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

class OPENAPI_API OpenAPIAudiencesApi
{
public:
	OpenAPIAudiencesApi();
	~OpenAPIAudiencesApi();

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

	class AudiencesCreateRequest;
	class AudiencesCreateResponse;
	class AudiencesCreateCustomRequest;
	class AudiencesCreateCustomResponse;
	class AudiencesGetRequest;
	class AudiencesGetResponse;
	class AudiencesListRequest;
	class AudiencesListResponse;
	class AudiencesUpdateRequest;
	class AudiencesUpdateResponse;
	
    DECLARE_DELEGATE_OneParam(FAudiencesCreateDelegate, const AudiencesCreateResponse&);
    DECLARE_DELEGATE_OneParam(FAudiencesCreateCustomDelegate, const AudiencesCreateCustomResponse&);
    DECLARE_DELEGATE_OneParam(FAudiencesGetDelegate, const AudiencesGetResponse&);
    DECLARE_DELEGATE_OneParam(FAudiencesListDelegate, const AudiencesListResponse&);
    DECLARE_DELEGATE_OneParam(FAudiencesUpdateDelegate, const AudiencesUpdateResponse&);
    
    FHttpRequestPtr AudiencesCreate(const AudiencesCreateRequest& Request, const FAudiencesCreateDelegate& Delegate = FAudiencesCreateDelegate()) const;
    FHttpRequestPtr AudiencesCreateCustom(const AudiencesCreateCustomRequest& Request, const FAudiencesCreateCustomDelegate& Delegate = FAudiencesCreateCustomDelegate()) const;
    FHttpRequestPtr AudiencesGet(const AudiencesGetRequest& Request, const FAudiencesGetDelegate& Delegate = FAudiencesGetDelegate()) const;
    FHttpRequestPtr AudiencesList(const AudiencesListRequest& Request, const FAudiencesListDelegate& Delegate = FAudiencesListDelegate()) const;
    FHttpRequestPtr AudiencesUpdate(const AudiencesUpdateRequest& Request, const FAudiencesUpdateDelegate& Delegate = FAudiencesUpdateDelegate()) const;
    
private:
    void OnAudiencesCreateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAudiencesCreateDelegate Delegate) const;
    void OnAudiencesCreateCustomResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAudiencesCreateCustomDelegate Delegate) const;
    void OnAudiencesGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAudiencesGetDelegate Delegate) const;
    void OnAudiencesListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAudiencesListDelegate Delegate) const;
    void OnAudiencesUpdateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAudiencesUpdateDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
