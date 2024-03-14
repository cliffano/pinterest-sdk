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

#include "OpenAPIBaseModel.h"
#include "OpenAPIAudiencesApi.h"

#include "OpenAPIAudience.h"
#include "OpenAPIAudienceCreateRequest.h"
#include "OpenAPIAudienceUpdateRequest.h"
#include "OpenAPIAudiencesList200Response.h"
#include "OpenAPIError.h"

namespace OpenAPI
{

/* Create audience
 *
 * Create an audience you can use in targeting for specific ad groups. Targeting combines customer information with the ways users interact with Pinterest to help you reach specific groups of users; you can include or exclude specific audience_ids when you create an ad group. &lt;p/&gt; For more, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audience targeting&lt;/a&gt;.
*/
class OPENAPI_API OpenAPIAudiencesApi::AudiencesCreateRequest : public Request
{
public:
    virtual ~AudiencesCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* List of ads to create, size limit [1, 30] */
	OpenAPIAudienceCreateRequest OpenAPIAudienceCreateRequest;
};

class OPENAPI_API OpenAPIAudiencesApi::AudiencesCreateResponse : public Response
{
public:
    virtual ~AudiencesCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAudience Content;
};

/* Get audience
 *
 * Get a specific audience given the audience ID.
*/
class OPENAPI_API OpenAPIAudiencesApi::AudiencesGetRequest : public Request
{
public:
    virtual ~AudiencesGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Unique identifier of an audience */
	FString AudienceId;
};

class OPENAPI_API OpenAPIAudiencesApi::AudiencesGetResponse : public Response
{
public:
    virtual ~AudiencesGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAudience Content;
};

/* List audiences
 *
 * Get list of audiences for the ad account.
*/
class OPENAPI_API OpenAPIAudiencesApi::AudiencesListRequest : public Request
{
public:
    virtual ~AudiencesListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	enum class EntityStatusesEnum
	{
		Active,
		Paused,
		Archived,
  	};

	static FString EnumToString(const EntityStatusesEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, EntityStatusesEnum& EnumValue);
	/* Entity status */
	TOptional<TArray<EntityStatusesEnum>> EntityStatuses;
	enum class OrderEnum
	{
		Ascending,
		Descending,
  	};

	static FString EnumToString(const OrderEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, OrderEnum& EnumValue);
	/* The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. */
	TOptional<OrderEnum> Order;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
};

class OPENAPI_API OpenAPIAudiencesApi::AudiencesListResponse : public Response
{
public:
    virtual ~AudiencesListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAudiencesList200Response Content;
};

/* Update audience
 *
 * Update (edit or remove) an existing targeting audience.
*/
class OPENAPI_API OpenAPIAudiencesApi::AudiencesUpdateRequest : public Request
{
public:
    virtual ~AudiencesUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Unique identifier of an audience */
	FString AudienceId;
	/* The audience to be updated. */
	TOptional<OpenAPIAudienceUpdateRequest> OpenAPIAudienceUpdateRequest;
};

class OPENAPI_API OpenAPIAudiencesApi::AudiencesUpdateResponse : public Response
{
public:
    virtual ~AudiencesUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAudience Content;
};

}
