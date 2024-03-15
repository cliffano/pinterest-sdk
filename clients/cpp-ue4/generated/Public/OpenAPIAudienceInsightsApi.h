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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIAudienceInsightsApi
{
public:
	OpenAPIAudienceInsightsApi();
	~OpenAPIAudienceInsightsApi();

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

	class AudienceInsightsScopeAndTypeGetRequest;
	class AudienceInsightsScopeAndTypeGetResponse;
	class AudienceInsightsGetRequest;
	class AudienceInsightsGetResponse;
	
    DECLARE_DELEGATE_OneParam(FAudienceInsightsScopeAndTypeGetDelegate, const AudienceInsightsScopeAndTypeGetResponse&);
    DECLARE_DELEGATE_OneParam(FAudienceInsightsGetDelegate, const AudienceInsightsGetResponse&);
    
    FHttpRequestPtr AudienceInsightsScopeAndTypeGet(const AudienceInsightsScopeAndTypeGetRequest& Request, const FAudienceInsightsScopeAndTypeGetDelegate& Delegate = FAudienceInsightsScopeAndTypeGetDelegate()) const;
    FHttpRequestPtr AudienceInsightsGet(const AudienceInsightsGetRequest& Request, const FAudienceInsightsGetDelegate& Delegate = FAudienceInsightsGetDelegate()) const;
    
private:
    void OnAudienceInsightsScopeAndTypeGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAudienceInsightsScopeAndTypeGetDelegate Delegate) const;
    void OnAudienceInsightsGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAudienceInsightsGetDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}