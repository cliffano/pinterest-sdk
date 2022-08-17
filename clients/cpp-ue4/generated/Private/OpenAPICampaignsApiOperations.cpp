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

#include "OpenAPICampaignsApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPICampaignsApi::CampaignsCreateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/campaigns"), PathParams);

	return Path;
}

void OpenAPICampaignsApi::CampaignsCreateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

		WriteJsonValue(Writer, OpenAPICampaignCreateRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICampaignCreateRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICampaignCreateRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPICampaignsApi::CampaignsCreateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPICampaignsApi::CampaignsCreateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPICampaignsApi::CampaignsGetRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) },
	{ TEXT("campaign_id"), ToStringFormatArg(CampaignId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/campaigns/{campaign_id}"), PathParams);

	return Path;
}

void OpenAPICampaignsApi::CampaignsGetRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPICampaignsApi::CampaignsGetResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool OpenAPICampaignsApi::CampaignsGetResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

inline FString ToString(const OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum& Value)
{
	switch (Value)
	{
	case OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum::Active:
		return TEXT("ACTIVE");
	case OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum::Paused:
		return TEXT("PAUSED");
	case OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum::Archived:
		return TEXT("ARCHIVED");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICampaignsApi::CampaignsListRequest::EnumToString(const OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum& Value)
{
	static TMap<FString, OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum> StringToEnum = { 
		{ TEXT("ACTIVE"), OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum::Active },
		{ TEXT("PAUSED"), OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum::Paused },
		{ TEXT("ARCHIVED"), OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum::Archived }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICampaignsApi::CampaignsListRequest::EnumFromString(const FString& EnumAsString, OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICampaignsApi::CampaignsListRequest::EntityStatusesEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

inline FString ToString(const OpenAPICampaignsApi::CampaignsListRequest::OrderEnum& Value)
{
	switch (Value)
	{
	case OpenAPICampaignsApi::CampaignsListRequest::OrderEnum::Ascending:
		return TEXT("ASCENDING");
	case OpenAPICampaignsApi::CampaignsListRequest::OrderEnum::Descending:
		return TEXT("DESCENDING");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICampaignsApi::CampaignsListRequest::OrderEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICampaignsApi::CampaignsListRequest::EnumToString(const OpenAPICampaignsApi::CampaignsListRequest::OrderEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICampaignsApi::CampaignsListRequest::OrderEnum& Value)
{
	static TMap<FString, OpenAPICampaignsApi::CampaignsListRequest::OrderEnum> StringToEnum = { 
		{ TEXT("ASCENDING"), OpenAPICampaignsApi::CampaignsListRequest::OrderEnum::Ascending },
		{ TEXT("DESCENDING"), OpenAPICampaignsApi::CampaignsListRequest::OrderEnum::Descending }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICampaignsApi::CampaignsListRequest::EnumFromString(const FString& EnumAsString, OpenAPICampaignsApi::CampaignsListRequest::OrderEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICampaignsApi::CampaignsListRequest::OrderEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICampaignsApi::CampaignsListRequest::OrderEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICampaignsApi::CampaignsListRequest::OrderEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

FString OpenAPICampaignsApi::CampaignsListRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/campaigns"), PathParams);

	TArray<FString> QueryParams;
	if(CampaignIds.IsSet())
	{
		QueryParams.Add(FString(TEXT("campaign_ids=")) + CollectionToUrlString_multi(CampaignIds.GetValue(), TEXT("campaign_ids")));
	}
	if(EntityStatuses.IsSet())
	{
		QueryParams.Add(FString(TEXT("entity_statuses=")) + CollectionToUrlString_multi(EntityStatuses.GetValue(), TEXT("entity_statuses")));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	if(Order.IsSet())
	{
		QueryParams.Add(FString(TEXT("order=")) + ToUrlString(Order.GetValue()));
	}
	if(Bookmark.IsSet())
	{
		QueryParams.Add(FString(TEXT("bookmark=")) + ToUrlString(Bookmark.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPICampaignsApi::CampaignsListRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Form parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);
		Writer->WriteObjectStart();
		Writer->WriteObjectEnd();
		Writer->Close();
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPICampaignsApi::CampaignsListResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Success"));
		break;
	case 400:
		SetResponseString(TEXT("Invalid ad account campaign parameters."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPICampaignsApi::CampaignsListResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPICampaignsApi::CampaignsUpdateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/campaigns"), PathParams);

	return Path;
}

void OpenAPICampaignsApi::CampaignsUpdateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

		WriteJsonValue(Writer, OpenAPICampaignUpdateRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICampaignUpdateRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPICampaignUpdateRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPICampaignsApi::CampaignsUpdateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("response"));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected error"));
		break;
	}
}

bool OpenAPICampaignsApi::CampaignsUpdateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}