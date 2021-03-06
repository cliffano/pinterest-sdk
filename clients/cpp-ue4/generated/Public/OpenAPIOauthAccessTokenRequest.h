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
 * OpenAPIOauthAccessTokenRequest
 *
 * Describes the valid schema for possible OAuth access token requests.
 */
class OPENAPI_API OpenAPIOauthAccessTokenRequest : public Model
{
public:
    virtual ~OpenAPIOauthAccessTokenRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class GrantTypeEnum
	{
		AuthorizationCode,
		RefreshToken,
  	};

	static FString EnumToString(const GrantTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, GrantTypeEnum& EnumValue);
	GrantTypeEnum GrantType;
};

}
