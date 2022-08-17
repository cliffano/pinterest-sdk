/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAdGroupResponse.h"
#include "OpenAPIAdGroupsList200ResponseAllOf.h"
#include "OpenAPIPaginated.h"

namespace OpenAPI
{

/*
 * OpenAPIAdGroupsList200Response
 *
 * 
 */
class OPENAPI_API OpenAPIAdGroupsList200Response : public Model
{
public:
    virtual ~OpenAPIAdGroupsList200Response() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TArray<OpenAPIAdGroupResponse> Items;
	TOptional<FString> Bookmark;
};

}
