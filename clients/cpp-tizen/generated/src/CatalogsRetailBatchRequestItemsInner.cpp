#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CatalogsRetailBatchRequest_items_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CatalogsRetailBatchRequest_items_inner::CatalogsRetailBatchRequest_items_inner()
{
	//__init();
}

CatalogsRetailBatchRequest_items_inner::~CatalogsRetailBatchRequest_items_inner()
{
	//__cleanup();
}

void
CatalogsRetailBatchRequest_items_inner::__init()
{
	//item_id = std::string();
	//operation = std::string();
	//attributes = new ItemAttributes();
	//new std::list()std::list> update_mask;
}

void
CatalogsRetailBatchRequest_items_inner::__cleanup()
{
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(operation != NULL) {
	//
	//delete operation;
	//operation = NULL;
	//}
	//if(attributes != NULL) {
	//
	//delete attributes;
	//attributes = NULL;
	//}
	//if(update_mask != NULL) {
	//update_mask.RemoveAll(true);
	//delete update_mask;
	//update_mask = NULL;
	//}
	//
}

void
CatalogsRetailBatchRequest_items_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *item_idKey = "item_id";
	node = json_object_get_member(pJsonObject, item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&item_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *operationKey = "operation";
	node = json_object_get_member(pJsonObject, operationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&operation, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *attributesKey = "attributes";
	node = json_object_get_member(pJsonObject, attributesKey);
	if (node !=NULL) {
	

		if (isprimitive("ItemAttributes")) {
			jsonToValue(&attributes, node, "ItemAttributes", "ItemAttributes");
		} else {
			
			ItemAttributes* obj = static_cast<ItemAttributes*> (&attributes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *update_maskKey = "update_mask";
	node = json_object_get_member(pJsonObject, update_maskKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<UpdateMaskFieldType> new_list;
			UpdateMaskFieldType inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("UpdateMaskFieldType")) {
					jsonToValue(&inst, temp_json, "UpdateMaskFieldType", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			update_mask = new_list;
		}
		
	}
}

CatalogsRetailBatchRequest_items_inner::CatalogsRetailBatchRequest_items_inner(char* json)
{
	this->fromJson(json);
}

char*
CatalogsRetailBatchRequest_items_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getItemId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOperation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *operationKey = "operation";
	json_object_set_member(pJsonObject, operationKey, node);
	if (isprimitive("ItemAttributes")) {
		ItemAttributes obj = getAttributes();
		node = converttoJson(&obj, "ItemAttributes", "");
	}
	else {
		
		ItemAttributes obj = static_cast<ItemAttributes> (getAttributes());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *attributesKey = "attributes";
	json_object_set_member(pJsonObject, attributesKey, node);
	if (isprimitive("UpdateMaskFieldType")) {
		list<UpdateMaskFieldType> new_list = static_cast<list <UpdateMaskFieldType> > (getUpdateMask());
		node = converttoJson(&new_list, "UpdateMaskFieldType", "array");
	} else {
		node = json_node_alloc();
		list<UpdateMaskFieldType> new_list = static_cast<list <UpdateMaskFieldType> > (getUpdateMask());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<UpdateMaskFieldType>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			UpdateMaskFieldType obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *update_maskKey = "update_mask";
	json_object_set_member(pJsonObject, update_maskKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CatalogsRetailBatchRequest_items_inner::getItemId()
{
	return item_id;
}

void
CatalogsRetailBatchRequest_items_inner::setItemId(std::string  item_id)
{
	this->item_id = item_id;
}

std::string
CatalogsRetailBatchRequest_items_inner::getOperation()
{
	return operation;
}

void
CatalogsRetailBatchRequest_items_inner::setOperation(std::string  operation)
{
	this->operation = operation;
}

ItemAttributes
CatalogsRetailBatchRequest_items_inner::getAttributes()
{
	return attributes;
}

void
CatalogsRetailBatchRequest_items_inner::setAttributes(ItemAttributes  attributes)
{
	this->attributes = attributes;
}

std::list<UpdateMaskFieldType>
CatalogsRetailBatchRequest_items_inner::getUpdateMask()
{
	return update_mask;
}

void
CatalogsRetailBatchRequest_items_inner::setUpdateMask(std::list <UpdateMaskFieldType> update_mask)
{
	this->update_mask = update_mask;
}


