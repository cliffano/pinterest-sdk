/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAdGroupArrayResponseElement.h"

namespace OpenAPI
{

/*
 * OpenAPIAdGroupArrayResponse
 *
 * 
 */
class OPENAPI_API OpenAPIAdGroupArrayResponse : public Model
{
public:
    virtual ~OpenAPIAdGroupArrayResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPIAdGroupArrayResponseElement>> Items;
};

}
