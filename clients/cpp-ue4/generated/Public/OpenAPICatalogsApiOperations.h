/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICatalogsApi.h"

#include "OpenAPICatalogsFeed.h"
#include "OpenAPICatalogsFeedsCreateRequest.h"
#include "OpenAPICatalogsFeedsUpdateRequest.h"
#include "OpenAPICatalogsItemValidationIssue.h"
#include "OpenAPICatalogsItems.h"
#include "OpenAPICatalogsItemsBatch.h"
#include "OpenAPICatalogsItemsBatchRequest.h"
#include "OpenAPICatalogsListProductsByFilterRequest.h"
#include "OpenAPICatalogsProductGroup.h"
#include "OpenAPICatalogsProductGroupCreateRequest.h"
#include "OpenAPICatalogsProductGroupProductCounts.h"
#include "OpenAPICatalogsProductGroupUpdateRequest.h"
#include "OpenAPICatalogsProductGroupsList200Response.h"
#include "OpenAPIError.h"
#include "OpenAPIFeedProcessingResultsList200Response.h"
#include "OpenAPIFeedsList200Response.h"
#include "OpenAPIItemsIssuesList200Response.h"
#include "OpenAPIProductsByProductGroupFilterList200Response.h"

namespace OpenAPI
{

/* List products
 *
 * Get a list of product pins for a given Catalogs Product Group Id owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupPinsListRequest : public Request
{
public:
    virtual ~CatalogsProductGroupPinsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a product group */
	FString ProductGroupId;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupPinsListResponse : public Response
{
public:
    virtual ~CatalogsProductGroupPinsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIProductsByProductGroupFilterList200Response Content;
};

/* Create product group
 *
 * Create product group to use in Catalogs owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsCreateRequest : public Request
{
public:
    virtual ~CatalogsProductGroupsCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Request object used to created a catalogs product group. */
	OpenAPICatalogsProductGroupCreateRequest OpenAPICatalogsProductGroupCreateRequest;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsCreateResponse : public Response
{
public:
    virtual ~CatalogsProductGroupsCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsProductGroup Content;
};

/* Delete product group
 *
 * Delete a product group owned by the \&quot;operation user_account\&quot; from being in use in Catalogs. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsDeleteRequest : public Request
{
public:
    virtual ~CatalogsProductGroupsDeleteRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a product group */
	FString ProductGroupId;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsDeleteResponse : public Response
{
public:
    virtual ~CatalogsProductGroupsDeleteResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Get product group
 *
 * Get a singe product group for a given Catalogs Product Group Id owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsGetRequest : public Request
{
public:
    virtual ~CatalogsProductGroupsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a product group */
	FString ProductGroupId;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsGetResponse : public Response
{
public:
    virtual ~CatalogsProductGroupsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsProductGroup Content;
};

/* List product groups
 *
 * Get a list of product groups for a given Catalogs Feed Id owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsListRequest : public Request
{
public:
    virtual ~CatalogsProductGroupsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a feed */
	FString FeedId;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsListResponse : public Response
{
public:
    virtual ~CatalogsProductGroupsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsProductGroupsList200Response Content;
};

/* Get product counts
 *
 * Get a product counts for a given Catalogs Product Group owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsProductCountsGetRequest : public Request
{
public:
    virtual ~CatalogsProductGroupsProductCountsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a product group */
	FString ProductGroupId;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsProductCountsGetResponse : public Response
{
public:
    virtual ~CatalogsProductGroupsProductCountsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsProductGroupProductCounts Content;
};

/* Update product group
 *
 * Update product group owned by the \&quot;operation user_account\&quot; to use in Catalogs. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsUpdateRequest : public Request
{
public:
    virtual ~CatalogsProductGroupsUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a product group */
	FString ProductGroupId;
	/* Request object used to Update a catalogs product group. */
	OpenAPICatalogsProductGroupUpdateRequest OpenAPICatalogsProductGroupUpdateRequest;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::CatalogsProductGroupsUpdateResponse : public Response
{
public:
    virtual ~CatalogsProductGroupsUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsProductGroup Content;
};

/* List processing results for a given feed
 *
 * Fetch a feed processing results owned by the \&quot;operation user_account\&quot;. Please note that for now the bookmark parameter is not functional and only the first page will be available until it is implemented in some release in the near future. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::FeedProcessingResultsListRequest : public Request
{
public:
    virtual ~FeedProcessingResultsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a feed */
	FString FeedId;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::FeedProcessingResultsListResponse : public Response
{
public:
    virtual ~FeedProcessingResultsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIFeedProcessingResultsList200Response Content;
};

/* Create feed
 *
 * Create a new feed owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::FeedsCreateRequest : public Request
{
public:
    virtual ~FeedsCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Request object used to created a feed. */
	OpenAPICatalogsFeedsCreateRequest OpenAPICatalogsFeedsCreateRequest;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::FeedsCreateResponse : public Response
{
public:
    virtual ~FeedsCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsFeed Content;
};

/* Delete feed
 *
 * Delete a feed owned by the \&quot;operating user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::FeedsDeleteRequest : public Request
{
public:
    virtual ~FeedsDeleteRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a feed */
	FString FeedId;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::FeedsDeleteResponse : public Response
{
public:
    virtual ~FeedsDeleteResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Get feed
 *
 * Get a single feed owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::FeedsGetRequest : public Request
{
public:
    virtual ~FeedsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a feed */
	FString FeedId;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::FeedsGetResponse : public Response
{
public:
    virtual ~FeedsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsFeed Content;
};

/* List feeds
 *
 * Fetch feeds owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::FeedsListRequest : public Request
{
public:
    virtual ~FeedsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::FeedsListResponse : public Response
{
public:
    virtual ~FeedsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIFeedsList200Response Content;
};

/* Update feed
 *
 * Update a feed owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::FeedsUpdateRequest : public Request
{
public:
    virtual ~FeedsUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a feed */
	FString FeedId;
	/* Request object used to update a feed. */
	OpenAPICatalogsFeedsUpdateRequest OpenAPICatalogsFeedsUpdateRequest;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::FeedsUpdateResponse : public Response
{
public:
    virtual ~FeedsUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsFeed Content;
};

/* Get catalogs items batch
 *
 * Get a single catalogs items batch owned by the \&quot;operating user_account\&quot;. &lt;a href&#x3D;\&quot;/docs/shopping/catalog/#Update%20items%20in%20batch\&quot; target&#x3D;\&quot;_blank\&quot;&gt;See detailed documentation here.&lt;/a&gt; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.
*/
class OPENAPI_API OpenAPICatalogsApi::ItemsBatchGetRequest : public Request
{
public:
    virtual ~ItemsBatchGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Id of a catalogs items batch to fetch */
	FString BatchId;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::ItemsBatchGetResponse : public Response
{
public:
    virtual ~ItemsBatchGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsItemsBatch Content;
};

/* Operate on item batch
 *
 * This endpoint supports multiple operations on a set of one or more catalog items owned by the \&quot;operation user_account\&quot;. &lt;a href&#x3D;\&quot;/docs/shopping/catalog/#Update%20items%20in%20batch\&quot; target&#x3D;\&quot;_blank\&quot;&gt;See detailed documentation here.&lt;/a&gt; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.
*/
class OPENAPI_API OpenAPICatalogsApi::ItemsBatchPostRequest : public Request
{
public:
    virtual ~ItemsBatchPostRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Request object used to create catalogs items in a batch */
	OpenAPICatalogsItemsBatchRequest OpenAPICatalogsItemsBatchRequest;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::ItemsBatchPostResponse : public Response
{
public:
    virtual ~ItemsBatchPostResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsItemsBatch Content;
};

/* List item issues for a given processing result
 *
 * List item validation issues for a given feed processing result owned by the \&quot;operation user_account\&quot;. Please note that for now query parameters &#39;item_numbers&#39; and &#39;item_validation_issue&#39; cannot be used simultaneously until it is implemented in some release in the future. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::ItemsIssuesListRequest : public Request
{
public:
    virtual ~ItemsIssuesListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a feed processing result */
	FString ProcessingResultId;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation. */
	TOptional<TArray<int32>> ItemNumbers;
	/* Filter item validation issues that have a given type of item validation issue. */
	TOptional<OpenAPICatalogsItemValidationIssue> ItemValidationIssue;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::ItemsIssuesListResponse : public Response
{
public:
    virtual ~ItemsIssuesListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIItemsIssuesList200Response Content;
};

/* Get catalogs items
 *
 * Get the items of the catalog owned by the \&quot;operation user_account\&quot;. &lt;a href&#x3D;\&quot;/docs/shopping/catalog/#Update%20items%20in%20batch\&quot; target&#x3D;\&quot;_blank\&quot;&gt;See detailed documentation here.&lt;/a&gt; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.
*/
class OPENAPI_API OpenAPICatalogsApi::ItemsGetRequest : public Request
{
public:
    virtual ~ItemsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Country for the Catalogs Items */
	FString Country;
	/* Catalogs Item ids */
	TArray<FString> ItemIds;
	/* Language for the Catalogs Items */
	FString Language;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::ItemsGetResponse : public Response
{
public:
    virtual ~ItemsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICatalogsItems Content;
};

/* List filtered products
 *
 * List products Pins owned by the \&quot;operation user_account\&quot; that meet the criteria specified in the Catalogs Product Group Filter given in the request. - This endpoint has been implemented in POST to allow for complex filters. This specific POST endpoint is designed to be idempotent. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account: Owner, Admin, Catalogs Manager.  &lt;a href&#x3D;&#39;/docs/shopping/catalog/&#39;&gt;Learn more&lt;/a&gt;
*/
class OPENAPI_API OpenAPICatalogsApi::ProductsByProductGroupFilterListRequest : public Request
{
public:
    virtual ~ProductsByProductGroupFilterListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Object holding a group of filters for a catalog product group */
	OpenAPICatalogsListProductsByFilterRequest OpenAPICatalogsListProductsByFilterRequest;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPICatalogsApi::ProductsByProductGroupFilterListResponse : public Response
{
public:
    virtual ~ProductsByProductGroupFilterListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIProductsByProductGroupFilterList200Response Content;
};

}
