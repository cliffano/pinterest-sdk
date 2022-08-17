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

#include "OpenAPIBaseModel.h"
#include "OpenAPIAdGroupsApi.h"

#include "OpenAPIAdGroupArrayResponse.h"
#include "OpenAPIAdGroupCreateRequest.h"
#include "OpenAPIAdGroupResponse.h"
#include "OpenAPIAdGroupUpdateRequest.h"
#include "OpenAPIAdGroupsList200Response.h"
#include "OpenAPIBidFloor.h"
#include "OpenAPIBidFloorRequest.h"
#include "OpenAPIError.h"

namespace OpenAPI
{

/* Get bid floors
 *
 * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; List bid floors for your campaign configuration. Bid floors are given in microcurrency values based on the currency in the bid floor specification. &lt;p/&gt; Microcurrency is used to track very small transactions, based on the currency field set in the advertiser&#39;s profile. A microcurrency unit is one one-millionth of the standard unit of currency selected in the advertiser&#39;s profile (e.g. a microdollar is $0.000001.) &lt;p/&gt; For more on bid floors see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-your-bid\&quot;&gt; Set your bid&lt;/a&gt;.
*/
class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsBidFloorGetRequest : public Request
{
public:
    virtual ~AdGroupsBidFloorGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Parameters to get bid_floor info */
	OpenAPIBidFloorRequest OpenAPIBidFloorRequest;
};

class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsBidFloorGetResponse : public Response
{
public:
    virtual ~AdGroupsBidFloorGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIBidFloor Content;
};

/* Create ad groups
 *
 * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Create multiple new ad groups. All ads in a given ad group will have the same budget, bid, run dates, targeting, and placement (search, browse, other). For more information, &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/campaign-structure\&quot; target&#x3D;\&quot;_blank\&quot;&gt; click here&lt;/a&gt;.&lt;/p&gt; &lt;strong&gt;Note:&lt;/strong&gt; - &#39;bid_in_micro_currency&#39; and &#39;budget_in_micro_currency&#39; should be expressed in microcurrency amounts based on the currency field set in the advertiser&#39;s profile. Microcurrency is used to track very small transactions, based on the currency field set in the advertiser&#39;s profile. A microcurrency unit is one one-millionth of the standard unit of currency selected in the advertiser&#39;s profile (e.g. a microdollar is $0.000001.) - Ad groups belong to ad campaigns. Some types of campaigns (e.g. budget optimization) have limits on the number of ad groups they can hold. If you exceed those limits, you will get an error message.
*/
class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsCreateRequest : public Request
{
public:
    virtual ~AdGroupsCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* List of ad groups to create, size limit [1, 30]. */
	TArray<OpenAPIAdGroupCreateRequest> OpenAPIAdGroupCreateRequest;
};

class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsCreateResponse : public Response
{
public:
    virtual ~AdGroupsCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdGroupArrayResponse Content;
};

/* Get ad group
 *
 * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the &lt;a href&#x3D;\&quot;https://www.pinterest.com/_/_/policy/advertising-guidelines/\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
*/
class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsGetRequest : public Request
{
public:
    virtual ~AdGroupsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Unique identifier of an ad group. */
	FString AdGroupId;
};

class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsGetResponse : public Response
{
public:
    virtual ~AdGroupsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdGroupResponse Content;
};

/* List ad groups
 *
 * List ad groups based on provided campaign IDs or ad group IDs.(campaign_ids or ad_group_ids). &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; Provide only campaign_id or ad_group_id. Do not provide both.
*/
class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsListRequest : public Request
{
public:
    virtual ~AdGroupsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* List of Campaign Ids to use to filter the results. */
	TOptional<TArray<FString>> CampaignIds;
	/* List of Ad group Ids to use to filter the results. */
	TOptional<TArray<FString>> AdGroupIds;
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
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/api/v5/#tag/Pagination'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	enum class OrderEnum
	{
		Ascending,
		Descending,
  	};

	static FString EnumToString(const OrderEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, OrderEnum& EnumValue);
	/* The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. */
	TOptional<OrderEnum> Order;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Return interests as text names (if value is true) rather than topic IDs. */
	TOptional<bool> TranslateInterestsToNames;
};

class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsListResponse : public Response
{
public:
    virtual ~AdGroupsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdGroupsList200Response Content;
};

/* Update ad groups
 *
 * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/features/ads-management/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt; &lt;p/&gt; Update multiple existing ad groups.
*/
class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsUpdateRequest : public Request
{
public:
    virtual ~AdGroupsUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* List of ad groups to update, size limit [1, 30]. */
	TArray<OpenAPIAdGroupUpdateRequest> OpenAPIAdGroupUpdateRequest;
};

class OPENAPI_API OpenAPIAdGroupsApi::AdGroupsUpdateResponse : public Response
{
public:
    virtual ~AdGroupsUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdGroupArrayResponse Content;
};

}
