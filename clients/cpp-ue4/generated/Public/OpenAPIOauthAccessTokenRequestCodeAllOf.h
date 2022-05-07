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

namespace OpenAPI
{

/*
 * OpenAPIOauthAccessTokenRequestCodeAllOf
 *
 * 
 */
class OPENAPI_API OpenAPIOauthAccessTokenRequestCodeAllOf : public Model
{
public:
    virtual ~OpenAPIOauthAccessTokenRequestCodeAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString Code;
	FString RedirectUri;
};

}
