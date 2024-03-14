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

#pragma once

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIAdsApi
{
public:
	OpenAPIAdsApi();
	~OpenAPIAdsApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class AdPreviewsCreateRequest;
	class AdPreviewsCreateResponse;
	class AdTargetingAnalyticsGetRequest;
	class AdTargetingAnalyticsGetResponse;
	class AdsAnalyticsRequest;
	class AdsAnalyticsResponse;
	class AdsCreateRequest;
	class AdsCreateResponse;
	class AdsGetRequest;
	class AdsGetResponse;
	class AdsListRequest;
	class AdsListResponse;
	class AdsUpdateRequest;
	class AdsUpdateResponse;
	
    DECLARE_DELEGATE_OneParam(FAdPreviewsCreateDelegate, const AdPreviewsCreateResponse&);
    DECLARE_DELEGATE_OneParam(FAdTargetingAnalyticsGetDelegate, const AdTargetingAnalyticsGetResponse&);
    DECLARE_DELEGATE_OneParam(FAdsAnalyticsDelegate, const AdsAnalyticsResponse&);
    DECLARE_DELEGATE_OneParam(FAdsCreateDelegate, const AdsCreateResponse&);
    DECLARE_DELEGATE_OneParam(FAdsGetDelegate, const AdsGetResponse&);
    DECLARE_DELEGATE_OneParam(FAdsListDelegate, const AdsListResponse&);
    DECLARE_DELEGATE_OneParam(FAdsUpdateDelegate, const AdsUpdateResponse&);
    
    FHttpRequestPtr AdPreviewsCreate(const AdPreviewsCreateRequest& Request, const FAdPreviewsCreateDelegate& Delegate = FAdPreviewsCreateDelegate()) const;
    FHttpRequestPtr AdTargetingAnalyticsGet(const AdTargetingAnalyticsGetRequest& Request, const FAdTargetingAnalyticsGetDelegate& Delegate = FAdTargetingAnalyticsGetDelegate()) const;
    FHttpRequestPtr AdsAnalytics(const AdsAnalyticsRequest& Request, const FAdsAnalyticsDelegate& Delegate = FAdsAnalyticsDelegate()) const;
    FHttpRequestPtr AdsCreate(const AdsCreateRequest& Request, const FAdsCreateDelegate& Delegate = FAdsCreateDelegate()) const;
    FHttpRequestPtr AdsGet(const AdsGetRequest& Request, const FAdsGetDelegate& Delegate = FAdsGetDelegate()) const;
    FHttpRequestPtr AdsList(const AdsListRequest& Request, const FAdsListDelegate& Delegate = FAdsListDelegate()) const;
    FHttpRequestPtr AdsUpdate(const AdsUpdateRequest& Request, const FAdsUpdateDelegate& Delegate = FAdsUpdateDelegate()) const;
    
private:
    void OnAdPreviewsCreateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAdPreviewsCreateDelegate Delegate) const;
    void OnAdTargetingAnalyticsGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAdTargetingAnalyticsGetDelegate Delegate) const;
    void OnAdsAnalyticsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAdsAnalyticsDelegate Delegate) const;
    void OnAdsCreateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAdsCreateDelegate Delegate) const;
    void OnAdsGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAdsGetDelegate Delegate) const;
    void OnAdsListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAdsListDelegate Delegate) const;
    void OnAdsUpdateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAdsUpdateDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
