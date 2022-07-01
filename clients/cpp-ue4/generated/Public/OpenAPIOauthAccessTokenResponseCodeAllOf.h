/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
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
 * OpenAPIOauthAccessTokenResponseCodeAllOf
 *
 * 
 */
class OPENAPI_API OpenAPIOauthAccessTokenResponseCodeAllOf : public Model
{
public:
    virtual ~OpenAPIOauthAccessTokenResponseCodeAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString RefreshToken;
	int32 RefreshTokenExpiresIn = 0;
};

}
