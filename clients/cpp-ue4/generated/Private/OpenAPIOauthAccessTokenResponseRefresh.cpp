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

#include "OpenAPIOauthAccessTokenResponseRefresh.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum::AuthorizationCode:
		return TEXT("authorization_code");
	case OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum::RefreshToken:
		return TEXT("refresh_token");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIOauthAccessTokenResponseRefresh::EnumToString(const OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum& Value)
{
	static TMap<FString, OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum> StringToEnum = { 
		{ TEXT("authorization_code"), OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum::AuthorizationCode },
		{ TEXT("refresh_token"), OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum::RefreshToken }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIOauthAccessTokenResponseRefresh::EnumFromString(const FString& EnumAsString, OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIOauthAccessTokenResponseRefresh::ResponseTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIOauthAccessTokenResponseRefresh::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ResponseType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("response_type")); WriteJsonValue(Writer, ResponseType.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("access_token")); WriteJsonValue(Writer, AccessToken);
	Writer->WriteIdentifierPrefix(TEXT("token_type")); WriteJsonValue(Writer, TokenType);
	Writer->WriteIdentifierPrefix(TEXT("expires_in")); WriteJsonValue(Writer, ExpiresIn);
	Writer->WriteIdentifierPrefix(TEXT("scope")); WriteJsonValue(Writer, Scope);
	Writer->WriteObjectEnd();
}

bool OpenAPIOauthAccessTokenResponseRefresh::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("response_type"), ResponseType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("access_token"), AccessToken);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("token_type"), TokenType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("expires_in"), ExpiresIn);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("scope"), Scope);

	return ParseSuccess;
}

}
