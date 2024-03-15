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
#include "OpenAPIOauthAccessTokenResponse.h"

namespace OpenAPI
{

/*
 * OpenAPIOauthAccessTokenResponseEverlastingRefresh
 *
 * A successful OAuth access token response for the refresh token flow, with an added everlasting refresh token.
 */
class OPENAPI_API OpenAPIOauthAccessTokenResponseEverlastingRefresh : public Model
{
public:
    virtual ~OpenAPIOauthAccessTokenResponseEverlastingRefresh() {}
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
	FString RefreshToken;
	int32 RefreshTokenExpiresIn = 0;
	int32 RefreshTokenExpiresAt = 0;
};

}
