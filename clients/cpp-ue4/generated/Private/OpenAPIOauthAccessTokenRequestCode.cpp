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

#include "OpenAPIOauthAccessTokenRequestCode.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum::AuthorizationCode:
		return TEXT("authorization_code");
	case OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum::RefreshToken:
		return TEXT("refresh_token");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIOauthAccessTokenRequestCode::EnumToString(const OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum& Value)
{
	static TMap<FString, OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum> StringToEnum = { 
		{ TEXT("authorization_code"), OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum::AuthorizationCode },
		{ TEXT("refresh_token"), OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum::RefreshToken }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIOauthAccessTokenRequestCode::EnumFromString(const FString& EnumAsString, OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIOauthAccessTokenRequestCode::GrantTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIOauthAccessTokenRequestCode::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("grant_type")); WriteJsonValue(Writer, GrantType);
	Writer->WriteIdentifierPrefix(TEXT("code")); WriteJsonValue(Writer, Code);
	Writer->WriteIdentifierPrefix(TEXT("redirect_uri")); WriteJsonValue(Writer, RedirectUri);
	Writer->WriteObjectEnd();
}

bool OpenAPIOauthAccessTokenRequestCode::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("grant_type"), GrantType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("code"), Code);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("redirect_uri"), RedirectUri);

	return ParseSuccess;
}

}
