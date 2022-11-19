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
#include "OpenAPIKeyword.h"
#include "OpenAPIKeywordError.h"

namespace OpenAPI
{

/*
 * OpenAPIKeywordsResponse
 *
 * 
 */
class OPENAPI_API OpenAPIKeywordsResponse : public Model
{
public:
    virtual ~OpenAPIKeywordsResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPIKeywordError>> Errors;
	TOptional<TArray<OpenAPIKeyword>> Keywords;
};

}
