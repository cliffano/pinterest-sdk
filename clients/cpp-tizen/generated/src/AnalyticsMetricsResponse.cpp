#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AnalyticsMetricsResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AnalyticsMetricsResponse::AnalyticsMetricsResponse()
{
	//__init();
}

AnalyticsMetricsResponse::~AnalyticsMetricsResponse()
{
	//__cleanup();
}

void
AnalyticsMetricsResponse::__init()
{
	//new std::map()std::map> summary_metrics;
	//new std::list()std::list> daily_metrics;
}

void
AnalyticsMetricsResponse::__cleanup()
{
	//if(summary_metrics != NULL) {
	//summary_metrics.RemoveAll(true);
	//delete summary_metrics;
	//summary_metrics = NULL;
	//}
	//if(daily_metrics != NULL) {
	//daily_metrics.RemoveAll(true);
	//delete daily_metrics;
	//daily_metrics = NULL;
	//}
	//
}

void
AnalyticsMetricsResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *summary_metricsKey = "summary_metrics";
	node = json_object_get_member(pJsonObject, summary_metricsKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			summary_metrics = new_map;
		}
		
	}
	const gchar *daily_metricsKey = "daily_metrics";
	node = json_object_get_member(pJsonObject, daily_metricsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AnalyticsDailyMetrics> new_list;
			AnalyticsDailyMetrics inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AnalyticsDailyMetrics")) {
					jsonToValue(&inst, temp_json, "AnalyticsDailyMetrics", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			daily_metrics = new_list;
		}
		
	}
}

AnalyticsMetricsResponse::AnalyticsMetricsResponse(char* json)
{
	this->fromJson(json);
}

char*
AnalyticsMetricsResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getSummaryMetrics());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *summary_metricsKey = "summary_metrics";
	json_object_set_member(pJsonObject, summary_metricsKey, node);
	if (isprimitive("AnalyticsDailyMetrics")) {
		list<AnalyticsDailyMetrics> new_list = static_cast<list <AnalyticsDailyMetrics> > (getDailyMetrics());
		node = converttoJson(&new_list, "AnalyticsDailyMetrics", "array");
	} else {
		node = json_node_alloc();
		list<AnalyticsDailyMetrics> new_list = static_cast<list <AnalyticsDailyMetrics> > (getDailyMetrics());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AnalyticsDailyMetrics>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AnalyticsDailyMetrics obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *daily_metricsKey = "daily_metrics";
	json_object_set_member(pJsonObject, daily_metricsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
AnalyticsMetricsResponse::getSummaryMetrics()
{
	return summary_metrics;
}

void
AnalyticsMetricsResponse::setSummaryMetrics(std::map <string, string> summary_metrics)
{
	this->summary_metrics = summary_metrics;
}

std::list<AnalyticsDailyMetrics>
AnalyticsMetricsResponse::getDailyMetrics()
{
	return daily_metrics;
}

void
AnalyticsMetricsResponse::setDailyMetrics(std::list <AnalyticsDailyMetrics> daily_metrics)
{
	this->daily_metrics = daily_metrics;
}


