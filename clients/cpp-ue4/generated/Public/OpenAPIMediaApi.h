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

#pragma once

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIMediaApi
{
public:
	OpenAPIMediaApi();
	~OpenAPIMediaApi();

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

	class MediaCreateRequest;
	class MediaCreateResponse;
	class MediaGetRequest;
	class MediaGetResponse;
	class MediaListRequest;
	class MediaListResponse;
	
    DECLARE_DELEGATE_OneParam(FMediaCreateDelegate, const MediaCreateResponse&);
    DECLARE_DELEGATE_OneParam(FMediaGetDelegate, const MediaGetResponse&);
    DECLARE_DELEGATE_OneParam(FMediaListDelegate, const MediaListResponse&);
    
    FHttpRequestPtr MediaCreate(const MediaCreateRequest& Request, const FMediaCreateDelegate& Delegate = FMediaCreateDelegate()) const;
    FHttpRequestPtr MediaGet(const MediaGetRequest& Request, const FMediaGetDelegate& Delegate = FMediaGetDelegate()) const;
    FHttpRequestPtr MediaList(const MediaListRequest& Request, const FMediaListDelegate& Delegate = FMediaListDelegate()) const;
    
private:
    void OnMediaCreateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMediaCreateDelegate Delegate) const;
    void OnMediaGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMediaGetDelegate Delegate) const;
    void OnMediaListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FMediaListDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
