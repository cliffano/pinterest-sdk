#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CampaignCreateResponseData_allOf.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CampaignCreateResponseData_allOf::CampaignCreateResponseData_allOf()
{
	//__init();
}

CampaignCreateResponseData_allOf::~CampaignCreateResponseData_allOf()
{
	//__cleanup();
}

void
CampaignCreateResponseData_allOf::__init()
{
	//objective_type = new ObjectiveType();
}

void
CampaignCreateResponseData_allOf::__cleanup()
{
	//if(objective_type != NULL) {
	//
	//delete objective_type;
	//objective_type = NULL;
	//}
	//
}

void
CampaignCreateResponseData_allOf::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *objective_typeKey = "objective_type";
	node = json_object_get_member(pJsonObject, objective_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("ObjectiveType")) {
			jsonToValue(&objective_type, node, "ObjectiveType", "ObjectiveType");
		} else {
			
			ObjectiveType* obj = static_cast<ObjectiveType*> (&objective_type);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

CampaignCreateResponseData_allOf::CampaignCreateResponseData_allOf(char* json)
{
	this->fromJson(json);
}

char*
CampaignCreateResponseData_allOf::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ObjectiveType")) {
		ObjectiveType obj = getObjectiveType();
		node = converttoJson(&obj, "ObjectiveType", "");
	}
	else {
		
		ObjectiveType obj = static_cast<ObjectiveType> (getObjectiveType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *objective_typeKey = "objective_type";
	json_object_set_member(pJsonObject, objective_typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ObjectiveType
CampaignCreateResponseData_allOf::getObjectiveType()
{
	return objective_type;
}

void
CampaignCreateResponseData_allOf::setObjectiveType(ObjectiveType  objective_type)
{
	this->objective_type = objective_type;
}


