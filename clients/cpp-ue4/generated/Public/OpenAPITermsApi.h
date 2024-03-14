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

class OPENAPI_API OpenAPITermsApi
{
public:
	OpenAPITermsApi();
	~OpenAPITermsApi();

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

	class TermsRelatedListRequest;
	class TermsRelatedListResponse;
	class TermsSuggestedListRequest;
	class TermsSuggestedListResponse;
	
    DECLARE_DELEGATE_OneParam(FTermsRelatedListDelegate, const TermsRelatedListResponse&);
    DECLARE_DELEGATE_OneParam(FTermsSuggestedListDelegate, const TermsSuggestedListResponse&);
    
    FHttpRequestPtr TermsRelatedList(const TermsRelatedListRequest& Request, const FTermsRelatedListDelegate& Delegate = FTermsRelatedListDelegate()) const;
    FHttpRequestPtr TermsSuggestedList(const TermsSuggestedListRequest& Request, const FTermsSuggestedListDelegate& Delegate = FTermsSuggestedListDelegate()) const;
    
private:
    void OnTermsRelatedListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FTermsRelatedListDelegate Delegate) const;
    void OnTermsSuggestedListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FTermsSuggestedListDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
