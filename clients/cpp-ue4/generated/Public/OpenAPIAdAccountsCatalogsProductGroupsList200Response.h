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
#include "OpenAPICatalogProductGroup.h"

namespace OpenAPI
{

/*
 * OpenAPIAdAccountsCatalogsProductGroupsList200Response
 *
 * 
 */
class OPENAPI_API OpenAPIAdAccountsCatalogsProductGroupsList200Response : public Model
{
public:
    virtual ~OpenAPIAdAccountsCatalogsProductGroupsList200Response() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TArray<OpenAPICatalogProductGroup> Items;
	TOptional<FString> Bookmark;
};

}
