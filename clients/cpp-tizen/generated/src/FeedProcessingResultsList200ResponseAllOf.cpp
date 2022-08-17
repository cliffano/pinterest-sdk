#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Feed_processing_results_list_200_response_allOf.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Feed_processing_results_list_200_response_allOf::Feed_processing_results_list_200_response_allOf()
{
	//__init();
}

Feed_processing_results_list_200_response_allOf::~Feed_processing_results_list_200_response_allOf()
{
	//__cleanup();
}

void
Feed_processing_results_list_200_response_allOf::__init()
{
	//new std::list()std::list> items;
}

void
Feed_processing_results_list_200_response_allOf::__cleanup()
{
	//if(items != NULL) {
	//items.RemoveAll(true);
	//delete items;
	//items = NULL;
	//}
	//
}

void
Feed_processing_results_list_200_response_allOf::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *itemsKey = "items";
	node = json_object_get_member(pJsonObject, itemsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<CatalogsFeedProcessingResult> new_list;
			CatalogsFeedProcessingResult inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("CatalogsFeedProcessingResult")) {
					jsonToValue(&inst, temp_json, "CatalogsFeedProcessingResult", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			items = new_list;
		}
		
	}
}

Feed_processing_results_list_200_response_allOf::Feed_processing_results_list_200_response_allOf(char* json)
{
	this->fromJson(json);
}

char*
Feed_processing_results_list_200_response_allOf::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("CatalogsFeedProcessingResult")) {
		list<CatalogsFeedProcessingResult> new_list = static_cast<list <CatalogsFeedProcessingResult> > (getItems());
		node = converttoJson(&new_list, "CatalogsFeedProcessingResult", "array");
	} else {
		node = json_node_alloc();
		list<CatalogsFeedProcessingResult> new_list = static_cast<list <CatalogsFeedProcessingResult> > (getItems());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<CatalogsFeedProcessingResult>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			CatalogsFeedProcessingResult obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *itemsKey = "items";
	json_object_set_member(pJsonObject, itemsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<CatalogsFeedProcessingResult>
Feed_processing_results_list_200_response_allOf::getItems()
{
	return items;
}

void
Feed_processing_results_list_200_response_allOf::setItems(std::list <CatalogsFeedProcessingResult> items)
{
	this->items = items;
}


