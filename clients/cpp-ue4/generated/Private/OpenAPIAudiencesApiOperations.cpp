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

#include "OpenAPIAudiencesApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIAudiencesApi::AudiencesCreateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), FStringFormatArg(ToUrlString(AdAccountId)) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/audiences"), PathParams);

	return Path;
}

void OpenAPIAudiencesApi::AudiencesCreateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIAudienceCreateRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIAudienceCreateRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIAudienceCreateRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIAudiencesApi::AudiencesCreateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Success"));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIAudiencesApi::AudiencesCreateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIAudiencesApi::AudiencesGetRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), FStringFormatArg(ToUrlString(AdAccountId)) },
	{ TEXT("audience_id"), FStringFormatArg(ToUrlString(AudienceId)) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/audiences/{audience_id}"), PathParams);

	return Path;
}

void OpenAPIAudiencesApi::AudiencesGetRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIAudiencesApi::AudiencesGetResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Success"));
		break;
	case 404:
		SetResponseString(TEXT("Audience not found."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error."));
		break;
	}
}

bool OpenAPIAudiencesApi::AudiencesGetResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

inline FString ToString(const OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum::Active:
		return TEXT("ACTIVE");
	case OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum::Paused:
		return TEXT("PAUSED");
	case OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum::Archived:
		return TEXT("ARCHIVED");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAudiencesApi::AudiencesListRequest::EnumToString(const OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum& Value)
{
	static TMap<FString, OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum> StringToEnum = { 
		{ TEXT("ACTIVE"), OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum::Active },
		{ TEXT("PAUSED"), OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum::Paused },
		{ TEXT("ARCHIVED"), OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum::Archived }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAudiencesApi::AudiencesListRequest::EnumFromString(const FString& EnumAsString, OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAudiencesApi::AudiencesListRequest::EntityStatusesEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

inline FString ToString(const OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum::Ascending:
		return TEXT("ASCENDING");
	case OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum::Descending:
		return TEXT("DESCENDING");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAudiencesApi::AudiencesListRequest::EnumToString(const OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum& Value)
{
	static TMap<FString, OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum> StringToEnum = { 
		{ TEXT("ASCENDING"), OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum::Ascending },
		{ TEXT("DESCENDING"), OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum::Descending }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAudiencesApi::AudiencesListRequest::EnumFromString(const FString& EnumAsString, OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAudiencesApi::AudiencesListRequest::OrderEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

FString OpenAPIAudiencesApi::AudiencesListRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), FStringFormatArg(ToUrlString(AdAccountId)) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/audiences"), PathParams);

	TArray<FString> QueryParams;
	if(Bookmark.IsSet())
	{
		QueryParams.Add(FString(TEXT("bookmark=")) + ToUrlString(Bookmark.GetValue()));
	}
	if(EntityStatuses.IsSet())
	{
		QueryParams.Add(CollectionToUrlString_multi(EntityStatuses.GetValue(), TEXT("entity_statuses")));
	}
	if(Order.IsSet())
	{
		QueryParams.Add(FString(TEXT("order=")) + ToUrlString(Order.GetValue()));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIAudiencesApi::AudiencesListRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIAudiencesApi::AudiencesListResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Success"));
		break;
	case 400:
		SetResponseString(TEXT("Invalid ad account audience parameters."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIAudiencesApi::AudiencesListResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIAudiencesApi::AudiencesUpdateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), FStringFormatArg(ToUrlString(AdAccountId)) },
	{ TEXT("audience_id"), FStringFormatArg(ToUrlString(AudienceId)) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/audiences/{audience_id}"), PathParams);

	return Path;
}

void OpenAPIAudiencesApi::AudiencesUpdateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PATCH"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		if (OpenAPIAudienceUpdateRequest.IsSet())
		{
			WriteJsonValue(Writer, OpenAPIAudienceUpdateRequest.GetValue());
		}
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIAudienceUpdateRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIAudienceUpdateRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIAudiencesApi::AudiencesUpdateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Success"));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPIAudiencesApi::AudiencesUpdateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
