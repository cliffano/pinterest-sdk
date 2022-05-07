/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
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

class OPENAPI_API OpenAPIBoardsApi
{
public:
	OpenAPIBoardsApi();
	~OpenAPIBoardsApi();

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

	class BoardSectionsCreateRequest;
	class BoardSectionsCreateResponse;
	class BoardSectionsDeleteRequest;
	class BoardSectionsDeleteResponse;
	class BoardSectionsListRequest;
	class BoardSectionsListResponse;
	class BoardSectionsListPinsRequest;
	class BoardSectionsListPinsResponse;
	class BoardSectionsUpdateRequest;
	class BoardSectionsUpdateResponse;
	class BoardsCreateRequest;
	class BoardsCreateResponse;
	class BoardsDeleteRequest;
	class BoardsDeleteResponse;
	class BoardsGetRequest;
	class BoardsGetResponse;
	class BoardsListRequest;
	class BoardsListResponse;
	class BoardsListPinsRequest;
	class BoardsListPinsResponse;
	class BoardsUpdateRequest;
	class BoardsUpdateResponse;
	
    DECLARE_DELEGATE_OneParam(FBoardSectionsCreateDelegate, const BoardSectionsCreateResponse&);
    DECLARE_DELEGATE_OneParam(FBoardSectionsDeleteDelegate, const BoardSectionsDeleteResponse&);
    DECLARE_DELEGATE_OneParam(FBoardSectionsListDelegate, const BoardSectionsListResponse&);
    DECLARE_DELEGATE_OneParam(FBoardSectionsListPinsDelegate, const BoardSectionsListPinsResponse&);
    DECLARE_DELEGATE_OneParam(FBoardSectionsUpdateDelegate, const BoardSectionsUpdateResponse&);
    DECLARE_DELEGATE_OneParam(FBoardsCreateDelegate, const BoardsCreateResponse&);
    DECLARE_DELEGATE_OneParam(FBoardsDeleteDelegate, const BoardsDeleteResponse&);
    DECLARE_DELEGATE_OneParam(FBoardsGetDelegate, const BoardsGetResponse&);
    DECLARE_DELEGATE_OneParam(FBoardsListDelegate, const BoardsListResponse&);
    DECLARE_DELEGATE_OneParam(FBoardsListPinsDelegate, const BoardsListPinsResponse&);
    DECLARE_DELEGATE_OneParam(FBoardsUpdateDelegate, const BoardsUpdateResponse&);
    
    FHttpRequestPtr BoardSectionsCreate(const BoardSectionsCreateRequest& Request, const FBoardSectionsCreateDelegate& Delegate = FBoardSectionsCreateDelegate()) const;
    FHttpRequestPtr BoardSectionsDelete(const BoardSectionsDeleteRequest& Request, const FBoardSectionsDeleteDelegate& Delegate = FBoardSectionsDeleteDelegate()) const;
    FHttpRequestPtr BoardSectionsList(const BoardSectionsListRequest& Request, const FBoardSectionsListDelegate& Delegate = FBoardSectionsListDelegate()) const;
    FHttpRequestPtr BoardSectionsListPins(const BoardSectionsListPinsRequest& Request, const FBoardSectionsListPinsDelegate& Delegate = FBoardSectionsListPinsDelegate()) const;
    FHttpRequestPtr BoardSectionsUpdate(const BoardSectionsUpdateRequest& Request, const FBoardSectionsUpdateDelegate& Delegate = FBoardSectionsUpdateDelegate()) const;
    FHttpRequestPtr BoardsCreate(const BoardsCreateRequest& Request, const FBoardsCreateDelegate& Delegate = FBoardsCreateDelegate()) const;
    FHttpRequestPtr BoardsDelete(const BoardsDeleteRequest& Request, const FBoardsDeleteDelegate& Delegate = FBoardsDeleteDelegate()) const;
    FHttpRequestPtr BoardsGet(const BoardsGetRequest& Request, const FBoardsGetDelegate& Delegate = FBoardsGetDelegate()) const;
    FHttpRequestPtr BoardsList(const BoardsListRequest& Request, const FBoardsListDelegate& Delegate = FBoardsListDelegate()) const;
    FHttpRequestPtr BoardsListPins(const BoardsListPinsRequest& Request, const FBoardsListPinsDelegate& Delegate = FBoardsListPinsDelegate()) const;
    FHttpRequestPtr BoardsUpdate(const BoardsUpdateRequest& Request, const FBoardsUpdateDelegate& Delegate = FBoardsUpdateDelegate()) const;
    
private:
    void OnBoardSectionsCreateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardSectionsCreateDelegate Delegate) const;
    void OnBoardSectionsDeleteResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardSectionsDeleteDelegate Delegate) const;
    void OnBoardSectionsListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardSectionsListDelegate Delegate) const;
    void OnBoardSectionsListPinsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardSectionsListPinsDelegate Delegate) const;
    void OnBoardSectionsUpdateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardSectionsUpdateDelegate Delegate) const;
    void OnBoardsCreateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardsCreateDelegate Delegate) const;
    void OnBoardsDeleteResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardsDeleteDelegate Delegate) const;
    void OnBoardsGetResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardsGetDelegate Delegate) const;
    void OnBoardsListResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardsListDelegate Delegate) const;
    void OnBoardsListPinsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardsListPinsDelegate Delegate) const;
    void OnBoardsUpdateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBoardsUpdateDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
