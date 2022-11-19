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

namespace OpenAPI
{

/*
 * OpenAPIKeywordError
 *
 * 
 */
class OPENAPI_API OpenAPIKeywordError : public Model
{
public:
    virtual ~OpenAPIKeywordError() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIKeyword> Data;
	TOptional<TArray<FString>> ErrorMessages;
};

}
