/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
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
 * OpenAPIConditionFilter
 *
 * 
 */
class OPENAPI_API OpenAPIConditionFilter : public Model
{
public:
    virtual ~OpenAPIConditionFilter() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsProductGroupMultipleStringCriteria Condition;
};

}
