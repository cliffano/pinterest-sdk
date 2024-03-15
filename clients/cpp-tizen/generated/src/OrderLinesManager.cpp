#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "OrderLinesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


OrderLinesManager::OrderLinesManager()
{

}

OrderLinesManager::~OrderLinesManager()
{

}

static gboolean __OrderLinesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __OrderLinesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__OrderLinesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool orderLinesGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(OrderLine, Error, void* )
	= reinterpret_cast<void(*)(OrderLine, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	OrderLine out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("OrderLine")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "OrderLine", "OrderLine");
			json_node_free(pJson);

			if ("OrderLine" == "std::string") {
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

static bool orderLinesGetHelper(char * accessToken,
	std::string adAccountId, std::string orderLineId, 
	void(* handler)(OrderLine, Error, void* )
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

	string url("/ad_accounts/{ad_account_id}/order_lines/{order_line_id}");
	int pos;

	string s_adAccountId("{");
	s_adAccountId.append("ad_account_id");
	s_adAccountId.append("}");
	pos = url.find(s_adAccountId);
	url.erase(pos, s_adAccountId.length());
	url.insert(pos, stringify(&adAccountId, "std::string"));
	string s_orderLineId("{");
	s_orderLineId.append("order_line_id");
	s_orderLineId.append("}");
	pos = url.find(s_orderLineId);
	url.erase(pos, s_orderLineId.length());
	url.insert(pos, stringify(&orderLineId, "std::string"));

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
		NetClient::easycurl(OrderLinesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = orderLinesGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (OrderLinesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), orderLinesGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __OrderLinesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool OrderLinesManager::orderLinesGetAsync(char * accessToken,
	std::string adAccountId, std::string orderLineId, 
	void(* handler)(OrderLine, Error, void* )
	, void* userData)
{
	return orderLinesGetHelper(accessToken,
	adAccountId, orderLineId, 
	handler, userData, true);
}

bool OrderLinesManager::orderLinesGetSync(char * accessToken,
	std::string adAccountId, std::string orderLineId, 
	void(* handler)(OrderLine, Error, void* )
	, void* userData)
{
	return orderLinesGetHelper(accessToken,
	adAccountId, orderLineId, 
	handler, userData, false);
}

static bool orderLinesListProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(Order_lines_list_200_response, Error, void* )
	= reinterpret_cast<void(*)(Order_lines_list_200_response, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	Order_lines_list_200_response out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("Order_lines_list_200_response")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "Order_lines_list_200_response", "Order_lines_list_200_response");
			json_node_free(pJson);

			if ("Order_lines_list_200_response" == "std::string") {
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

static bool orderLinesListHelper(char * accessToken,
	std::string adAccountId, int pageSize, std::string order, std::string bookmark, 
	void(* handler)(Order_lines_list_200_response, Error, void* )
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

	string url("/ad_accounts/{ad_account_id}/order_lines");
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
		NetClient::easycurl(OrderLinesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = orderLinesListProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (OrderLinesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), orderLinesListProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __OrderLinesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool OrderLinesManager::orderLinesListAsync(char * accessToken,
	std::string adAccountId, int pageSize, std::string order, std::string bookmark, 
	void(* handler)(Order_lines_list_200_response, Error, void* )
	, void* userData)
{
	return orderLinesListHelper(accessToken,
	adAccountId, pageSize, order, bookmark, 
	handler, userData, true);
}

bool OrderLinesManager::orderLinesListSync(char * accessToken,
	std::string adAccountId, int pageSize, std::string order, std::string bookmark, 
	void(* handler)(Order_lines_list_200_response, Error, void* )
	, void* userData)
{
	return orderLinesListHelper(accessToken,
	adAccountId, pageSize, order, bookmark, 
	handler, userData, false);
}

