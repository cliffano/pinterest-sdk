/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPIKeywordUpdate
 *
 * 
 */
class OPENAPI_API OpenAPIKeywordUpdate : public Model
{
public:
    virtual ~OpenAPIKeywordUpdate() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Keyword ID. */
	FString Id;
	/* Is keyword archived? */
	TOptional<bool> Archived;
	/* Keyword custom bid in microcurrency - null if inherited from parent ad group. */
	TOptional<int32> Bid;
};

}