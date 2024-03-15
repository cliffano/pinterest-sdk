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

#include "OpenAPIConversionEventsApiOperations.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace OpenAPI
{

FString OpenAPIConversionEventsApi::EventsCreateRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("ad_account_id"), FStringFormatArg(ToUrlString(AdAccountId)) } };

	FString Path = FString::Format(TEXT("/ad_accounts/{ad_account_id}/events"), PathParams);

	TArray<FString> QueryParams;
	if(Test.IsSet())
	{
		QueryParams.Add(FString(TEXT("test=")) + ToUrlString(Test.GetValue()));
	}
	Path += TCHAR('?');
	Path += FString::Join(QueryParams, TEXT("&"));

	return Path;
}

void OpenAPIConversionEventsApi::EventsCreateRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

		WriteJsonValue(Writer, OpenAPIConversionEvents);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIConversionEvents) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Body parameter (OpenAPIConversionEvents) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogOpenAPI, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIConversionEventsApi::EventsCreateResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Success"));
		break;
	case 400:
		SetResponseString(TEXT("The request was invalid."));
		break;
	case 401:
		SetResponseString(TEXT("Not authorized to send conversion events"));
		break;
	case 403:
		SetResponseString(TEXT("Unauthorized access."));
		break;
	case 422:
		SetResponseString(TEXT("Not all events were successfully processed."));
		break;
	case 429:
		SetResponseString(TEXT("This request exceeded a rate limit. This can happen if the client exceeds one of the published rate limits within a short time window."));
		break;
	case 503:
		SetResponseString(TEXT("The endpoint has been ramped down and is currently not accepting any traffic."));
		break;
	case 0:
	default:
		SetResponseString(TEXT("Unexpected errors"));
		break;
	}
}

bool OpenAPIConversionEventsApi::EventsCreateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
