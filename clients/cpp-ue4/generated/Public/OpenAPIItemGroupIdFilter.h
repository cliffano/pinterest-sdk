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
 * OpenAPIItemGroupIdFilter
 *
 * 
 */
class OPENAPI_API OpenAPIItemGroupIdFilter : public Model
{
public:
    virtual ~OpenAPIItemGroupIdFilter() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsProductGroupMultipleStringCriteria ItemGroupId;
};

}
