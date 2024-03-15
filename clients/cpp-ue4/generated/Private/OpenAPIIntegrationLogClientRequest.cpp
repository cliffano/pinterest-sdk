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

#include "OpenAPIIntegrationLogClientRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIIntegrationLogClientRequest::MethodEnum& Value)
{
	switch (Value)
	{
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Get:
		return TEXT("GET");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Head:
		return TEXT("HEAD");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Post:
		return TEXT("POST");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Put:
		return TEXT("PUT");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::_Delete:
		return TEXT("DELETE");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Connect:
		return TEXT("CONNECT");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Options:
		return TEXT("OPTIONS");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Trace:
		return TEXT("TRACE");
	case OpenAPIIntegrationLogClientRequest::MethodEnum::Patch:
		return TEXT("PATCH");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIIntegrationLogClientRequest::MethodEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIIntegrationLogClientRequest::EnumToString(const OpenAPIIntegrationLogClientRequest::MethodEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIIntegrationLogClientRequest::MethodEnum& Value)
{
	static TMap<FString, OpenAPIIntegrationLogClientRequest::MethodEnum> StringToEnum = { 
		{ TEXT("GET"), OpenAPIIntegrationLogClientRequest::MethodEnum::Get },
		{ TEXT("HEAD"), OpenAPIIntegrationLogClientRequest::MethodEnum::Head },
		{ TEXT("POST"), OpenAPIIntegrationLogClientRequest::MethodEnum::Post },
		{ TEXT("PUT"), OpenAPIIntegrationLogClientRequest::MethodEnum::Put },
		{ TEXT("DELETE"), OpenAPIIntegrationLogClientRequest::MethodEnum::_Delete },
		{ TEXT("CONNECT"), OpenAPIIntegrationLogClientRequest::MethodEnum::Connect },
		{ TEXT("OPTIONS"), OpenAPIIntegrationLogClientRequest::MethodEnum::Options },
		{ TEXT("TRACE"), OpenAPIIntegrationLogClientRequest::MethodEnum::Trace },
		{ TEXT("PATCH"), OpenAPIIntegrationLogClientRequest::MethodEnum::Patch }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIIntegrationLogClientRequest::EnumFromString(const FString& EnumAsString, OpenAPIIntegrationLogClientRequest::MethodEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIIntegrationLogClientRequest::MethodEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIIntegrationLogClientRequest::MethodEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIIntegrationLogClientRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("method")); WriteJsonValue(Writer, Method);
	Writer->WriteIdentifierPrefix(TEXT("host")); WriteJsonValue(Writer, Host);
	Writer->WriteIdentifierPrefix(TEXT("path")); WriteJsonValue(Writer, Path);
	if (RequestHeaders.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("request_headers")); WriteJsonValue(Writer, RequestHeaders.GetValue());
	}
	if (ResponseHeaders.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("response_headers")); WriteJsonValue(Writer, ResponseHeaders.GetValue());
	}
	if (ResponseStatusCode.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("response_status_code")); WriteJsonValue(Writer, ResponseStatusCode.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIIntegrationLogClientRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("method"), Method);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("host"), Host);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("path"), Path);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("request_headers"), RequestHeaders);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("response_headers"), ResponseHeaders);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("response_status_code"), ResponseStatusCode);

	return ParseSuccess;
}

}