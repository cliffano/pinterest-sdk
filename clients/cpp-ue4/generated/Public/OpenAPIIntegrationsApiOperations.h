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

#include "OpenAPIBaseModel.h"
#include "OpenAPIIntegrationsApi.h"

#include "OpenAPIDetailedError.h"
#include "OpenAPIError.h"
#include "OpenAPIIntegrationLogsRequest.h"
#include "OpenAPIIntegrationLogsSuccessResponse.h"
#include "OpenAPIIntegrationMetadata.h"
#include "OpenAPIIntegrationRecord.h"
#include "OpenAPIIntegrationRequest.h"
#include "OpenAPIIntegrationRequestPatch.h"
#include "OpenAPIIntegrationsGetList200Response.h"

namespace OpenAPI
{

/* Delete commerce integration
 *
 * Delete commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
*/
class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommerceDelRequest : public Request
{
public:
    virtual ~IntegrationsCommerceDelRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* External business ID for the integration. */
	FString ExternalBusinessId;
};

class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommerceDelResponse : public Response
{
public:
    virtual ~IntegrationsCommerceDelResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Get commerce integration
 *
 * Get commerce integration metadata associated with the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
*/
class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommerceGetRequest : public Request
{
public:
    virtual ~IntegrationsCommerceGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* External business ID for the integration. */
	FString ExternalBusinessId;
};

class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommerceGetResponse : public Response
{
public:
    virtual ~IntegrationsCommerceGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIIntegrationMetadata Content;
};

/* Update commerce integration
 *
 * Update commerce integration metadata for the given external business ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
*/
class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommercePatchRequest : public Request
{
public:
    virtual ~IntegrationsCommercePatchRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* External business ID for the integration. */
	FString ExternalBusinessId;
	/* Parameters to get create/update the Integration Metadata */
	TOptional<OpenAPIIntegrationRequestPatch> OpenAPIIntegrationRequestPatch;
};

class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommercePatchResponse : public Response
{
public:
    virtual ~IntegrationsCommercePatchResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIIntegrationMetadata Content;
};

/* Create commerce integration
 *
 * Create commerce integration metadata to link an external business ID with a Pinterest merchant &amp; ad account. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
*/
class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommercePostRequest : public Request
{
public:
    virtual ~IntegrationsCommercePostRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Parameters to get create/update the Integration Metadata */
	TOptional<OpenAPIIntegrationRequest> OpenAPIIntegrationRequest;
};

class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsCommercePostResponse : public Response
{
public:
    virtual ~IntegrationsCommercePostResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIIntegrationMetadata Content;
};

/* Receives batched logs from integration applications.
 *
 * This endpoint receives batched logs from integration applications on partner platforms. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
*/
class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsLogsPostRequest : public Request
{
public:
    virtual ~IntegrationsLogsPostRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Ingest log information from external integration application. */
	OpenAPIIntegrationLogsRequest OpenAPIIntegrationLogsRequest;
};

class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsLogsPostResponse : public Response
{
public:
    virtual ~IntegrationsLogsPostResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIIntegrationLogsSuccessResponse Content;
};

/* Get integration metadata
 *
 * Get integration metadata by ID. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
*/
class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsGetByIdRequest : public Request
{
public:
    virtual ~IntegrationsGetByIdRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Integration ID. */
	FString Id;
};

class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsGetByIdResponse : public Response
{
public:
    virtual ~IntegrationsGetByIdResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIIntegrationRecord Content;
};

/* Get integration metadata list
 *
 * Get integration metadata list. Note: If you&#39;re interested in joining the beta, please reach out to your Pinterest account manager.
*/
class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsGetListRequest : public Request
{
public:
    virtual ~IntegrationsGetListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
};

class OPENAPI_API OpenAPIIntegrationsApi::IntegrationsGetListResponse : public Response
{
public:
    virtual ~IntegrationsGetListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIIntegrationsGetList200Response Content;
};

}
