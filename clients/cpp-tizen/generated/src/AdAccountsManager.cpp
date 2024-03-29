#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "AdAccountsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


AdAccountsManager::AdAccountsManager()
{

}

AdAccountsManager::~AdAccountsManager()
{

}

static gboolean __AdAccountsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __AdAccountsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__AdAccountsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool adAccountAnalyticsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<AdAccountAnalyticsResponse_inner>, Error, void* )
	= reinterpret_cast<void(*)(std::list<AdAccountAnalyticsResponse_inner>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<AdAccountAnalyticsResponse_inner> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			AdAccountAnalyticsResponse_inner singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool adAccountAnalyticsHelper(char * accessToken,
	std::string adAccountId, Date startDate, Date endDate, std::list<std::string> columns, Granularity granularity, int clickWindowDays, int engagementWindowDays, int viewWindowDays, std::string conversionReportTime, 
	void(* handler)(std::list<AdAccountAnalyticsResponse_inner>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&startDate, "Date");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "Date");
	queryParams.insert(pair<string, string>("end_date", itemAtq));

	for (std::list
	<std::string>::iterator queryIter = columns.begin(); queryIter != columns.end(); ++queryIter) {
		string itemAt = stringify(&(*queryIter), "std::string");
		queryParams.insert(pair<string, string>("columns", itemAt));
	}
	

	itemAtq = stringify(&granularity, "Granularity");
	queryParams.insert(pair<string, string>("granularity", itemAtq));


	itemAtq = stringify(&clickWindowDays, "int");
	queryParams.insert(pair<string, string>("click_window_days", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("click_window_days");
	}


	itemAtq = stringify(&engagementWindowDays, "int");
	queryParams.insert(pair<string, string>("engagement_window_days", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("engagement_window_days");
	}


	itemAtq = stringify(&viewWindowDays, "int");
	queryParams.insert(pair<string, string>("view_window_days", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("view_window_days");
	}


	itemAtq = stringify(&conversionReportTime, "std::string");
	queryParams.insert(pair<string, string>("conversion_report_time", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("conversion_report_time");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}/analytics");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = adAccountAnalyticsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), adAccountAnalyticsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::adAccountAnalyticsAsync(char * accessToken,
	std::string adAccountId, Date startDate, Date endDate, std::list<std::string> columns, Granularity granularity, int clickWindowDays, int engagementWindowDays, int viewWindowDays, std::string conversionReportTime, 
	void(* handler)(std::list<AdAccountAnalyticsResponse_inner>, Error, void* )
	, void* userData)
{
	return adAccountAnalyticsHelper(accessToken,
	adAccountId, startDate, endDate, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, 
	handler, userData, true);
}

bool AdAccountsManager::adAccountAnalyticsSync(char * accessToken,
	std::string adAccountId, Date startDate, Date endDate, std::list<std::string> columns, Granularity granularity, int clickWindowDays, int engagementWindowDays, int viewWindowDays, std::string conversionReportTime, 
	void(* handler)(std::list<AdAccountAnalyticsResponse_inner>, Error, void* )
	, void* userData)
{
	return adAccountAnalyticsHelper(accessToken,
	adAccountId, startDate, endDate, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, 
	handler, userData, false);
}

static bool adAccountTargetingAnalyticsGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(MetricsResponse, Error, void* )
	= reinterpret_cast<void(*)(MetricsResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	MetricsResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("MetricsResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "MetricsResponse", "MetricsResponse");
			json_node_free(pJson);

			if ("MetricsResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool adAccountTargetingAnalyticsGetHelper(char * accessToken,
	std::string adAccountId, Date startDate, Date endDate, std::list<AdsAnalyticsTargetingType> targetingTypes, std::list<std::string> columns, Granularity granularity, int clickWindowDays, int engagementWindowDays, int viewWindowDays, std::string conversionReportTime, ConversionReportAttributionType attributionTypes, 
	void(* handler)(MetricsResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&startDate, "Date");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "Date");
	queryParams.insert(pair<string, string>("end_date", itemAtq));

	for (std::list
	<AdsAnalyticsTargetingType>::iterator queryIter = targetingTypes.begin(); queryIter != targetingTypes.end(); ++queryIter) {
		string itemAt = stringify(&(*queryIter), "AdsAnalyticsTargetingType");
		queryParams.insert(pair<string, string>("targetingTypes", itemAt));
	}
	
	for (std::list
	<std::string>::iterator queryIter = columns.begin(); queryIter != columns.end(); ++queryIter) {
		string itemAt = stringify(&(*queryIter), "std::string");
		queryParams.insert(pair<string, string>("columns", itemAt));
	}
	

	itemAtq = stringify(&granularity, "Granularity");
	queryParams.insert(pair<string, string>("granularity", itemAtq));


	itemAtq = stringify(&clickWindowDays, "int");
	queryParams.insert(pair<string, string>("click_window_days", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("click_window_days");
	}


	itemAtq = stringify(&engagementWindowDays, "int");
	queryParams.insert(pair<string, string>("engagement_window_days", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("engagement_window_days");
	}


	itemAtq = stringify(&viewWindowDays, "int");
	queryParams.insert(pair<string, string>("view_window_days", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("view_window_days");
	}


	itemAtq = stringify(&conversionReportTime, "std::string");
	queryParams.insert(pair<string, string>("conversion_report_time", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("conversion_report_time");
	}


	itemAtq = stringify(&attributionTypes, "ConversionReportAttributionType");
	queryParams.insert(pair<string, string>("attribution_types", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("attribution_types");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}/targeting_analytics");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = adAccountTargetingAnalyticsGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), adAccountTargetingAnalyticsGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::adAccountTargetingAnalyticsGetAsync(char * accessToken,
	std::string adAccountId, Date startDate, Date endDate, std::list<AdsAnalyticsTargetingType> targetingTypes, std::list<std::string> columns, Granularity granularity, int clickWindowDays, int engagementWindowDays, int viewWindowDays, std::string conversionReportTime, ConversionReportAttributionType attributionTypes, 
	void(* handler)(MetricsResponse, Error, void* )
	, void* userData)
{
	return adAccountTargetingAnalyticsGetHelper(accessToken,
	adAccountId, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes, 
	handler, userData, true);
}

bool AdAccountsManager::adAccountTargetingAnalyticsGetSync(char * accessToken,
	std::string adAccountId, Date startDate, Date endDate, std::list<AdsAnalyticsTargetingType> targetingTypes, std::list<std::string> columns, Granularity granularity, int clickWindowDays, int engagementWindowDays, int viewWindowDays, std::string conversionReportTime, ConversionReportAttributionType attributionTypes, 
	void(* handler)(MetricsResponse, Error, void* )
	, void* userData)
{
	return adAccountTargetingAnalyticsGetHelper(accessToken,
	adAccountId, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes, 
	handler, userData, false);
}

static bool adAccountsCreateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AdAccount, Error, void* )
	= reinterpret_cast<void(*)(AdAccount, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AdAccount out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AdAccount")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AdAccount", "AdAccount");
			json_node_free(pJson);

			if ("AdAccount" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool adAccountsCreateHelper(char * accessToken,
	std::shared_ptr<AdAccountCreateRequest> adAccountCreateRequest, 
	void(* handler)(AdAccount, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("AdAccountCreateRequest")) {
		node = converttoJson(&adAccountCreateRequest, "AdAccountCreateRequest", "");
	}
	
	char *jsonStr =  adAccountCreateRequest.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/ad_accounts");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = adAccountsCreateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), adAccountsCreateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::adAccountsCreateAsync(char * accessToken,
	std::shared_ptr<AdAccountCreateRequest> adAccountCreateRequest, 
	void(* handler)(AdAccount, Error, void* )
	, void* userData)
{
	return adAccountsCreateHelper(accessToken,
	adAccountCreateRequest, 
	handler, userData, true);
}

bool AdAccountsManager::adAccountsCreateSync(char * accessToken,
	std::shared_ptr<AdAccountCreateRequest> adAccountCreateRequest, 
	void(* handler)(AdAccount, Error, void* )
	, void* userData)
{
	return adAccountsCreateHelper(accessToken,
	adAccountCreateRequest, 
	handler, userData, false);
}

static bool adAccountsGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AdAccount, Error, void* )
	= reinterpret_cast<void(*)(AdAccount, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AdAccount out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AdAccount")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AdAccount", "AdAccount");
			json_node_free(pJson);

			if ("AdAccount" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool adAccountsGetHelper(char * accessToken,
	std::string adAccountId, 
	void(* handler)(AdAccount, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = adAccountsGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), adAccountsGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::adAccountsGetAsync(char * accessToken,
	std::string adAccountId, 
	void(* handler)(AdAccount, Error, void* )
	, void* userData)
{
	return adAccountsGetHelper(accessToken,
	adAccountId, 
	handler, userData, true);
}

bool AdAccountsManager::adAccountsGetSync(char * accessToken,
	std::string adAccountId, 
	void(* handler)(AdAccount, Error, void* )
	, void* userData)
{
	return adAccountsGetHelper(accessToken,
	adAccountId, 
	handler, userData, false);
}

static bool adAccountsListProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(Ad_accounts_list_200_response, Error, void* )
	= reinterpret_cast<void(*)(Ad_accounts_list_200_response, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	Ad_accounts_list_200_response out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("Ad_accounts_list_200_response")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "Ad_accounts_list_200_response", "Ad_accounts_list_200_response");
			json_node_free(pJson);

			if ("Ad_accounts_list_200_response" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool adAccountsListHelper(char * accessToken,
	std::string bookmark, int pageSize, bool includeSharedAccounts, 
	void(* handler)(Ad_accounts_list_200_response, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&bookmark, "std::string");
	queryParams.insert(pair<string, string>("bookmark", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("bookmark");
	}


	itemAtq = stringify(&pageSize, "int");
	queryParams.insert(pair<string, string>("page_size", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page_size");
	}


	itemAtq = stringify(&includeSharedAccounts, "bool");
	queryParams.insert(pair<string, string>("include_shared_accounts", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("include_shared_accounts");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = adAccountsListProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), adAccountsListProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::adAccountsListAsync(char * accessToken,
	std::string bookmark, int pageSize, bool includeSharedAccounts, 
	void(* handler)(Ad_accounts_list_200_response, Error, void* )
	, void* userData)
{
	return adAccountsListHelper(accessToken,
	bookmark, pageSize, includeSharedAccounts, 
	handler, userData, true);
}

bool AdAccountsManager::adAccountsListSync(char * accessToken,
	std::string bookmark, int pageSize, bool includeSharedAccounts, 
	void(* handler)(Ad_accounts_list_200_response, Error, void* )
	, void* userData)
{
	return adAccountsListHelper(accessToken,
	bookmark, pageSize, includeSharedAccounts, 
	handler, userData, false);
}

static bool analyticsCreateMmmReportProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CreateMMMReportResponse, Error, void* )
	= reinterpret_cast<void(*)(CreateMMMReportResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CreateMMMReportResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CreateMMMReportResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CreateMMMReportResponse", "CreateMMMReportResponse");
			json_node_free(pJson);

			if ("CreateMMMReportResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool analyticsCreateMmmReportHelper(char * accessToken,
	std::string adAccountId, std::shared_ptr<CreateMMMReportRequest> createMMMReportRequest, 
	void(* handler)(CreateMMMReportResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("CreateMMMReportRequest")) {
		node = converttoJson(&createMMMReportRequest, "CreateMMMReportRequest", "");
	}
	
	char *jsonStr =  createMMMReportRequest.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/ad_accounts/{ad_account_id}/mmm_reports");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = analyticsCreateMmmReportProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), analyticsCreateMmmReportProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::analyticsCreateMmmReportAsync(char * accessToken,
	std::string adAccountId, std::shared_ptr<CreateMMMReportRequest> createMMMReportRequest, 
	void(* handler)(CreateMMMReportResponse, Error, void* )
	, void* userData)
{
	return analyticsCreateMmmReportHelper(accessToken,
	adAccountId, createMMMReportRequest, 
	handler, userData, true);
}

bool AdAccountsManager::analyticsCreateMmmReportSync(char * accessToken,
	std::string adAccountId, std::shared_ptr<CreateMMMReportRequest> createMMMReportRequest, 
	void(* handler)(CreateMMMReportResponse, Error, void* )
	, void* userData)
{
	return analyticsCreateMmmReportHelper(accessToken,
	adAccountId, createMMMReportRequest, 
	handler, userData, false);
}

static bool analyticsCreateReportProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	= reinterpret_cast<void(*)(AdsAnalyticsCreateAsyncResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AdsAnalyticsCreateAsyncResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AdsAnalyticsCreateAsyncResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AdsAnalyticsCreateAsyncResponse", "AdsAnalyticsCreateAsyncResponse");
			json_node_free(pJson);

			if ("AdsAnalyticsCreateAsyncResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool analyticsCreateReportHelper(char * accessToken,
	std::string adAccountId, std::shared_ptr<AdsAnalyticsCreateAsyncRequest> adsAnalyticsCreateAsyncRequest, 
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("AdsAnalyticsCreateAsyncRequest")) {
		node = converttoJson(&adsAnalyticsCreateAsyncRequest, "AdsAnalyticsCreateAsyncRequest", "");
	}
	
	char *jsonStr =  adsAnalyticsCreateAsyncRequest.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/ad_accounts/{ad_account_id}/reports");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = analyticsCreateReportProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), analyticsCreateReportProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::analyticsCreateReportAsync(char * accessToken,
	std::string adAccountId, std::shared_ptr<AdsAnalyticsCreateAsyncRequest> adsAnalyticsCreateAsyncRequest, 
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	, void* userData)
{
	return analyticsCreateReportHelper(accessToken,
	adAccountId, adsAnalyticsCreateAsyncRequest, 
	handler, userData, true);
}

bool AdAccountsManager::analyticsCreateReportSync(char * accessToken,
	std::string adAccountId, std::shared_ptr<AdsAnalyticsCreateAsyncRequest> adsAnalyticsCreateAsyncRequest, 
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	, void* userData)
{
	return analyticsCreateReportHelper(accessToken,
	adAccountId, adsAnalyticsCreateAsyncRequest, 
	handler, userData, false);
}

static bool analyticsCreateTemplateReportProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	= reinterpret_cast<void(*)(AdsAnalyticsCreateAsyncResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AdsAnalyticsCreateAsyncResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AdsAnalyticsCreateAsyncResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AdsAnalyticsCreateAsyncResponse", "AdsAnalyticsCreateAsyncResponse");
			json_node_free(pJson);

			if ("AdsAnalyticsCreateAsyncResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool analyticsCreateTemplateReportHelper(char * accessToken,
	std::string adAccountId, std::string templateId, Date startDate, Date endDate, Granularity granularity, 
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&startDate, "Date");
	queryParams.insert(pair<string, string>("start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("start_date");
	}


	itemAtq = stringify(&endDate, "Date");
	queryParams.insert(pair<string, string>("end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("end_date");
	}


	itemAtq = stringify(&granularity, "Granularity");
	queryParams.insert(pair<string, string>("granularity", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("granularity");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}/templates/{template_id}/reports");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));
	string s_templateId("{");
	s_templateId.append("template_id");
	s_templateId.append("}");
	pos = url.find(s_templateId);
	url.erase(pos, s_templateId.length());
	url.insert(pos, stringify(&templateId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = analyticsCreateTemplateReportProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), analyticsCreateTemplateReportProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::analyticsCreateTemplateReportAsync(char * accessToken,
	std::string adAccountId, std::string templateId, Date startDate, Date endDate, Granularity granularity, 
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	, void* userData)
{
	return analyticsCreateTemplateReportHelper(accessToken,
	adAccountId, templateId, startDate, endDate, granularity, 
	handler, userData, true);
}

bool AdAccountsManager::analyticsCreateTemplateReportSync(char * accessToken,
	std::string adAccountId, std::string templateId, Date startDate, Date endDate, Granularity granularity, 
	void(* handler)(AdsAnalyticsCreateAsyncResponse, Error, void* )
	, void* userData)
{
	return analyticsCreateTemplateReportHelper(accessToken,
	adAccountId, templateId, startDate, endDate, granularity, 
	handler, userData, false);
}

static bool analyticsGetMmmReportProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(GetMMMReportResponse, Error, void* )
	= reinterpret_cast<void(*)(GetMMMReportResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	GetMMMReportResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("GetMMMReportResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "GetMMMReportResponse", "GetMMMReportResponse");
			json_node_free(pJson);

			if ("GetMMMReportResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool analyticsGetMmmReportHelper(char * accessToken,
	std::string adAccountId, std::string token, 
	void(* handler)(GetMMMReportResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&token, "std::string");
	queryParams.insert(pair<string, string>("token", itemAtq));

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}/mmm_reports");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = analyticsGetMmmReportProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), analyticsGetMmmReportProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::analyticsGetMmmReportAsync(char * accessToken,
	std::string adAccountId, std::string token, 
	void(* handler)(GetMMMReportResponse, Error, void* )
	, void* userData)
{
	return analyticsGetMmmReportHelper(accessToken,
	adAccountId, token, 
	handler, userData, true);
}

bool AdAccountsManager::analyticsGetMmmReportSync(char * accessToken,
	std::string adAccountId, std::string token, 
	void(* handler)(GetMMMReportResponse, Error, void* )
	, void* userData)
{
	return analyticsGetMmmReportHelper(accessToken,
	adAccountId, token, 
	handler, userData, false);
}

static bool analyticsGetReportProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AdsAnalyticsGetAsyncResponse, Error, void* )
	= reinterpret_cast<void(*)(AdsAnalyticsGetAsyncResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AdsAnalyticsGetAsyncResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AdsAnalyticsGetAsyncResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AdsAnalyticsGetAsyncResponse", "AdsAnalyticsGetAsyncResponse");
			json_node_free(pJson);

			if ("AdsAnalyticsGetAsyncResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool analyticsGetReportHelper(char * accessToken,
	std::string adAccountId, std::string token, 
	void(* handler)(AdsAnalyticsGetAsyncResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&token, "std::string");
	queryParams.insert(pair<string, string>("token", itemAtq));

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}/reports");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = analyticsGetReportProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), analyticsGetReportProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::analyticsGetReportAsync(char * accessToken,
	std::string adAccountId, std::string token, 
	void(* handler)(AdsAnalyticsGetAsyncResponse, Error, void* )
	, void* userData)
{
	return analyticsGetReportHelper(accessToken,
	adAccountId, token, 
	handler, userData, true);
}

bool AdAccountsManager::analyticsGetReportSync(char * accessToken,
	std::string adAccountId, std::string token, 
	void(* handler)(AdsAnalyticsGetAsyncResponse, Error, void* )
	, void* userData)
{
	return analyticsGetReportHelper(accessToken,
	adAccountId, token, 
	handler, userData, false);
}

static bool sandboxDeleteProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::string, Error, void* )
	= reinterpret_cast<void(*)(std::string, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	std::string out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("std::string")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "std::string", "std::string");
			json_node_free(pJson);

			if ("std::string" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool sandboxDeleteHelper(char * accessToken,
	std::string adAccountId, 
	void(* handler)(std::string, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}/sandbox");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("DELETE");

	if(strcmp("PUT", "DELETE") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sandboxDeleteProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sandboxDeleteProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::sandboxDeleteAsync(char * accessToken,
	std::string adAccountId, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return sandboxDeleteHelper(accessToken,
	adAccountId, 
	handler, userData, true);
}

bool AdAccountsManager::sandboxDeleteSync(char * accessToken,
	std::string adAccountId, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return sandboxDeleteHelper(accessToken,
	adAccountId, 
	handler, userData, false);
}

static bool templatesListProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(Templates_list_200_response, Error, void* )
	= reinterpret_cast<void(*)(Templates_list_200_response, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	Templates_list_200_response out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("Templates_list_200_response")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "Templates_list_200_response", "Templates_list_200_response");
			json_node_free(pJson);

			if ("Templates_list_200_response" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool templatesListHelper(char * accessToken,
	std::string adAccountId, int pageSize, std::string order, std::string bookmark, 
	void(* handler)(Templates_list_200_response, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&pageSize, "int");
	queryParams.insert(pair<string, string>("page_size", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page_size");
	}


	itemAtq = stringify(&order, "std::string");
	queryParams.insert(pair<string, string>("order", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("order");
	}


	itemAtq = stringify(&bookmark, "std::string");
	queryParams.insert(pair<string, string>("bookmark", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("bookmark");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/ad_accounts/{ad_account_id}/templates");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = templatesListProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (AdAccountsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), templatesListProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AdAccountsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AdAccountsManager::templatesListAsync(char * accessToken,
	std::string adAccountId, int pageSize, std::string order, std::string bookmark, 
	void(* handler)(Templates_list_200_response, Error, void* )
	, void* userData)
{
	return templatesListHelper(accessToken,
	adAccountId, pageSize, order, bookmark, 
	handler, userData, true);
}

bool AdAccountsManager::templatesListSync(char * accessToken,
	std::string adAccountId, int pageSize, std::string order, std::string bookmark, 
	void(* handler)(Templates_list_200_response, Error, void* )
	, void* userData)
{
	return templatesListHelper(accessToken,
	adAccountId, pageSize, order, bookmark, 
	handler, userData, false);
}

