/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICatalogsProductGroupMultipleStringCriteria.h"

namespace OpenAPI
{

/*
 * OpenAPICustomLabel2Filter
 *
 * 
 */
class OPENAPI_API OpenAPICustomLabel2Filter : public Model
{
public:
    virtual ~OpenAPICustomLabel2Filter() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsProductGroupMultipleStringCriteria CUSTOMLABEL2;
};

}
