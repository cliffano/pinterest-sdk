#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Feeds_update_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Feeds_update_request::Feeds_update_request()
{
	//__init();
}

Feeds_update_request::~Feeds_update_request()
{
	//__cleanup();
}

void
Feeds_update_request::__init()
{
	//default_currency = new NullableCurrency();
	//name = std::string();
	//format = new CatalogsFormat();
	//credentials = new CatalogsFeedCredentials();
	//location = std::string();
	//preferred_processing_schedule = new CatalogsFeedProcessingSchedule();
	//status = new CatalogsStatus();
	//catalog_type = new CatalogsType();
	//default_availability = new ProductAvailabilityType();
}

void
Feeds_update_request::__cleanup()
{
	//if(default_currency != NULL) {
	//
	//delete default_currency;
	//default_currency = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(format != NULL) {
	//
	//delete format;
	//format = NULL;
	//}
	//if(credentials != NULL) {
	//
	//delete credentials;
	//credentials = NULL;
	//}
	//if(location != NULL) {
	//
	//delete location;
	//location = NULL;
	//}
	//if(preferred_processing_schedule != NULL) {
	//
	//delete preferred_processing_schedule;
	//preferred_processing_schedule = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(catalog_type != NULL) {
	//
	//delete catalog_type;
	//catalog_type = NULL;
	//}
	//if(default_availability != NULL) {
	//
	//delete default_availability;
	//default_availability = NULL;
	//}
	//
}

void
Feeds_update_request::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *default_currencyKey = "default_currency";
	node = json_object_get_member(pJsonObject, default_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("NullableCurrency")) {
			jsonToValue(&default_currency, node, "NullableCurrency", "NullableCurrency");
		} else {
			
			NullableCurrency* obj = static_cast<NullableCurrency*> (&default_currency);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *formatKey = "format";
	node = json_object_get_member(pJsonObject, formatKey);
	if (node !=NULL) {
	

		if (isprimitive("CatalogsFormat")) {
			jsonToValue(&format, node, "CatalogsFormat", "CatalogsFormat");
		} else {
			
			CatalogsFormat* obj = static_cast<CatalogsFormat*> (&format);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *credentialsKey = "credentials";
	node = json_object_get_member(pJsonObject, credentialsKey);
	if (node !=NULL) {
	

		if (isprimitive("CatalogsFeedCredentials")) {
			jsonToValue(&credentials, node, "CatalogsFeedCredentials", "CatalogsFeedCredentials");
		} else {
			
			CatalogsFeedCredentials* obj = static_cast<CatalogsFeedCredentials*> (&credentials);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *locationKey = "location";
	node = json_object_get_member(pJsonObject, locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *preferred_processing_scheduleKey = "preferred_processing_schedule";
	node = json_object_get_member(pJsonObject, preferred_processing_scheduleKey);
	if (node !=NULL) {
	

		if (isprimitive("CatalogsFeedProcessingSchedule")) {
			jsonToValue(&preferred_processing_schedule, node, "CatalogsFeedProcessingSchedule", "CatalogsFeedProcessingSchedule");
		} else {
			
			CatalogsFeedProcessingSchedule* obj = static_cast<CatalogsFeedProcessingSchedule*> (&preferred_processing_schedule);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("CatalogsStatus")) {
			jsonToValue(&status, node, "CatalogsStatus", "CatalogsStatus");
		} else {
			
			CatalogsStatus* obj = static_cast<CatalogsStatus*> (&status);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *catalog_typeKey = "catalog_type";
	node = json_object_get_member(pJsonObject, catalog_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("CatalogsType")) {
			jsonToValue(&catalog_type, node, "CatalogsType", "CatalogsType");
		} else {
			
			CatalogsType* obj = static_cast<CatalogsType*> (&catalog_type);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *default_availabilityKey = "default_availability";
	node = json_object_get_member(pJsonObject, default_availabilityKey);
	if (node !=NULL) {
	

		if (isprimitive("ProductAvailabilityType")) {
			jsonToValue(&default_availability, node, "ProductAvailabilityType", "ProductAvailabilityType");
		} else {
			
			ProductAvailabilityType* obj = static_cast<ProductAvailabilityType*> (&default_availability);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Feeds_update_request::Feeds_update_request(char* json)
{
	this->fromJson(json);
}

char*
Feeds_update_request::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("NullableCurrency")) {
		NullableCurrency obj = getDefaultCurrency();
		node = converttoJson(&obj, "NullableCurrency", "");
	}
	else {
		
		NullableCurrency obj = static_cast<NullableCurrency> (getDefaultCurrency());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *default_currencyKey = "default_currency";
	json_object_set_member(pJsonObject, default_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("CatalogsFormat")) {
		CatalogsFormat obj = getFormat();
		node = converttoJson(&obj, "CatalogsFormat", "");
	}
	else {
		
		CatalogsFormat obj = static_cast<CatalogsFormat> (getFormat());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *formatKey = "format";
	json_object_set_member(pJsonObject, formatKey, node);
	if (isprimitive("CatalogsFeedCredentials")) {
		CatalogsFeedCredentials obj = getCredentials();
		node = converttoJson(&obj, "CatalogsFeedCredentials", "");
	}
	else {
		
		CatalogsFeedCredentials obj = static_cast<CatalogsFeedCredentials> (getCredentials());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *credentialsKey = "credentials";
	json_object_set_member(pJsonObject, credentialsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *locationKey = "location";
	json_object_set_member(pJsonObject, locationKey, node);
	if (isprimitive("CatalogsFeedProcessingSchedule")) {
		CatalogsFeedProcessingSchedule obj = getPreferredProcessingSchedule();
		node = converttoJson(&obj, "CatalogsFeedProcessingSchedule", "");
	}
	else {
		
		CatalogsFeedProcessingSchedule obj = static_cast<CatalogsFeedProcessingSchedule> (getPreferredProcessingSchedule());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *preferred_processing_scheduleKey = "preferred_processing_schedule";
	json_object_set_member(pJsonObject, preferred_processing_scheduleKey, node);
	if (isprimitive("CatalogsStatus")) {
		CatalogsStatus obj = getStatus();
		node = converttoJson(&obj, "CatalogsStatus", "");
	}
	else {
		
		CatalogsStatus obj = static_cast<CatalogsStatus> (getStatus());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("CatalogsType")) {
		CatalogsType obj = getCatalogType();
		node = converttoJson(&obj, "CatalogsType", "");
	}
	else {
		
		CatalogsType obj = static_cast<CatalogsType> (getCatalogType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *catalog_typeKey = "catalog_type";
	json_object_set_member(pJsonObject, catalog_typeKey, node);
	if (isprimitive("ProductAvailabilityType")) {
		ProductAvailabilityType obj = getDefaultAvailability();
		node = converttoJson(&obj, "ProductAvailabilityType", "");
	}
	else {
		
		ProductAvailabilityType obj = static_cast<ProductAvailabilityType> (getDefaultAvailability());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *default_availabilityKey = "default_availability";
	json_object_set_member(pJsonObject, default_availabilityKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

NullableCurrency
Feeds_update_request::getDefaultCurrency()
{
	return default_currency;
}

void
Feeds_update_request::setDefaultCurrency(NullableCurrency  default_currency)
{
	this->default_currency = default_currency;
}

std::string
Feeds_update_request::getName()
{
	return name;
}

void
Feeds_update_request::setName(std::string  name)
{
	this->name = name;
}

CatalogsFormat
Feeds_update_request::getFormat()
{
	return format;
}

void
Feeds_update_request::setFormat(CatalogsFormat  format)
{
	this->format = format;
}

CatalogsFeedCredentials
Feeds_update_request::getCredentials()
{
	return credentials;
}

void
Feeds_update_request::setCredentials(CatalogsFeedCredentials  credentials)
{
	this->credentials = credentials;
}

std::string
Feeds_update_request::getLocation()
{
	return location;
}

void
Feeds_update_request::setLocation(std::string  location)
{
	this->location = location;
}

CatalogsFeedProcessingSchedule
Feeds_update_request::getPreferredProcessingSchedule()
{
	return preferred_processing_schedule;
}

void
Feeds_update_request::setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule  preferred_processing_schedule)
{
	this->preferred_processing_schedule = preferred_processing_schedule;
}

CatalogsStatus
Feeds_update_request::getStatus()
{
	return status;
}

void
Feeds_update_request::setStatus(CatalogsStatus  status)
{
	this->status = status;
}

CatalogsType
Feeds_update_request::getCatalogType()
{
	return catalog_type;
}

void
Feeds_update_request::setCatalogType(CatalogsType  catalog_type)
{
	this->catalog_type = catalog_type;
}

ProductAvailabilityType
Feeds_update_request::getDefaultAvailability()
{
	return default_availability;
}

void
Feeds_update_request::setDefaultAvailability(ProductAvailabilityType  default_availability)
{
	this->default_availability = default_availability;
}


