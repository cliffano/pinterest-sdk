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

namespace OpenAPI
{

/*
 * OpenAPIOauthAccessTokenResponse
 *
 * A successful OAuth access token response.
 */
class OPENAPI_API OpenAPIOauthAccessTokenResponse : public Model
{
public:
    virtual ~OpenAPIOauthAccessTokenResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class ResponseTypeEnum
	{
		AuthorizationCode,
		RefreshToken,
  	};

	static FString EnumToString(const ResponseTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ResponseTypeEnum& EnumValue);
	TOptional<ResponseTypeEnum> ResponseType;
	FString AccessToken;
	FString TokenType = TEXT("bearer");
	int32 ExpiresIn = 0;
	FString Scope;
};

}
