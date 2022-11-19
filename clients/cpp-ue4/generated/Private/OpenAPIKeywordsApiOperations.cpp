/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIKeywordsApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIKeywordsApi::CountryKeywordsMetricsGetRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/keywords/metrics"), PathParams);

	TArray<FString> QueryParams;
	QueryParams.Add(FString(TEXT("country_code=")) + ToUrlString(CountryCode));
	QueryParams.Add(FString(TEXT("keywords=")) + CollectionToUrlString_csv(Keywords, TEXT("keywords")));
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIKeywordsApi::CountryKeywordsMetricsGetRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIKeywordsApi::CountryKeywordsMetricsGetResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool OpenAPIKeywordsApi::CountryKeywordsMetricsGetResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIKeywordsApi::KeywordsCreateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/keywords"), PathParams);

	return Path;
}

void OpenAPIKeywordsApi::KeywordsCreateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

		WriteJsonValue(Writer, OpenAPIKeywordsRequest);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIKeywordsRequest) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIKeywordsRequest) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIKeywordsApi::KeywordsCreateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool OpenAPIKeywordsApi::KeywordsCreateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIKeywordsApi::KeywordsGetRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/keywords"), PathParams);

	TArray<FString> QueryParams;
	if(CampaignId.IsSet())
	{
		QueryParams.Add(FString(TEXT("campaign_id=")) + ToUrlString(CampaignId.GetValue()));
	}
	if(AdGroupId.IsSet())
	{
		QueryParams.Add(FString(TEXT("ad_group_id=")) + ToUrlString(AdGroupId.GetValue()));
	}
	if(MatchTypes.IsSet())
	{
		QueryParams.Add(FString(TEXT("match_types=")) + CollectionToUrlString_multi(MatchTypes.GetValue(), TEXT("match_types")));
	}
	if(PageSize.IsSet())
	{
		QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
	}
	if(Bookmark.IsSet())
	{
		QueryParams.Add(FString(TEXT("bookmark=")) + ToUrlString(Bookmark.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIKeywordsApi::KeywordsGetRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIKeywordsApi::KeywordsGetResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool OpenAPIKeywordsApi::KeywordsGetResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIKeywordsApi::KeywordsUpdateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), ToStringFormatArg(AdAccountId) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/keywords"), PathParams);

	return Path;
}

void OpenAPIKeywordsApi::KeywordsUpdateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

		WriteJsonValue(Writer, OpenAPIKeywordUpdateBody);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIKeywordUpdateBody) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIKeywordUpdateBody) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIKeywordsApi::KeywordsUpdateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool OpenAPIKeywordsApi::KeywordsUpdateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
