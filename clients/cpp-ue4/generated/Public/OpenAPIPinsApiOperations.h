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
#include "OpenAPIPinsApi.h"

#include "OpenAPIError.h"
#include "OpenAPIPin.h"
#include "OpenAPIPinAnalyticsMetricsResponse.h"
#include "OpenAPIPinCreate.h"
#include "OpenAPIPinUpdate.h"
#include "OpenAPIPinsAnalyticsMetricTypesParameterInner.h"
#include "OpenAPIPinsList200Response.h"
#include "OpenAPIPinsSaveRequest.h"

namespace OpenAPI
{

/* Get Pin analytics
 *
 * Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.  If Pin was created before &lt;code&gt;2023-03-20&lt;/code&gt; lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then.
*/
class OPENAPI_API OpenAPIPinsApi::PinsAnalyticsRequest : public Request
{
public:
    virtual ~PinsAnalyticsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a Pin. */
	FString PinId;
	/* Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. */
	FDateTime EndDate;
	/* Pin metric types to get data for, default is all. */
	TArray<OpenAPIPinsAnalyticsMetricTypesParameterInner> MetricTypes;
	enum class AppTypesEnum
	{
		All,
		Mobile,
		Tablet,
		Web,
  	};

	static FString EnumToString(const AppTypesEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, AppTypesEnum& EnumValue);
	/* Apps or devices to get data for, default is all. */
	TOptional<AppTypesEnum> AppTypes;
	enum class SplitFieldEnum
	{
		NoSplit,
		AppType,
  	};

	static FString EnumToString(const SplitFieldEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SplitFieldEnum& EnumValue);
	/* How to split the data into groups. Not including this param means data won't be split. */
	TOptional<SplitFieldEnum> SplitField;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIPinsApi::PinsAnalyticsResponse : public Response
{
public:
    virtual ~PinsAnalyticsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TMap<FString, OpenAPIPinAnalyticsMetricsResponse> Content;
};

/* Create Pin
 *
 * Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/content/content-creation/&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/content/content-creation/#Creating%20video%20Pins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
*/
class OPENAPI_API OpenAPIPinsApi::PinsCreateRequest : public Request
{
public:
    virtual ~PinsCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Create a new Pin. */
	OpenAPIPinCreate OpenAPIPinCreate;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIPinsApi::PinsCreateResponse : public Response
{
public:
    virtual ~PinsCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIPin Content;
};

/* Delete Pin
 *
 * Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
*/
class OPENAPI_API OpenAPIPinsApi::PinsDeleteRequest : public Request
{
public:
    virtual ~PinsDeleteRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a Pin. */
	FString PinId;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIPinsApi::PinsDeleteResponse : public Response
{
public:
    virtual ~PinsDeleteResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Get Pin
 *
 * Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
*/
class OPENAPI_API OpenAPIPinsApi::PinsGetRequest : public Request
{
public:
    virtual ~PinsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a Pin. */
	FString PinId;
	/* Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before <code>2023-03-20</code> lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then. */
	TOptional<bool> PinMetrics;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIPinsApi::PinsGetResponse : public Response
{
public:
    virtual ~PinsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIPin Content;
};

/* List Pins
 *
 * Get a list of the Pins owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account. - All Pins owned by the \&quot;operation user_account\&quot; are included, regardless of who owns the board they are on. Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
*/
class OPENAPI_API OpenAPIPinsApi::PinsListRequest : public Request
{
public:
    virtual ~PinsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	enum class PinFilterEnum
	{
		ExcludeNative,
		ExcludeRepins,
		HasBeenPromoted,
  	};

	static FString EnumToString(const PinFilterEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, PinFilterEnum& EnumValue);
	/* Pin filter. */
	TOptional<PinFilterEnum> PinFilter;
	/* Specify if return pins from protected boards */
	TOptional<bool> IncludeProtectedPins;
	enum class PinTypeEnum
	{
		_Private,
  	};

	static FString EnumToString(const PinTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, PinTypeEnum& EnumValue);
	/* The type of pins to return, currently only enabled for private pins */
	TOptional<PinTypeEnum> PinType;
	enum class CreativeTypesEnum
	{
		Regular,
		Video,
		Shopping,
		Carousel,
		MaxVideo,
		ShopThePin,
		Collection,
		Idea,
  	};

	static FString EnumToString(const CreativeTypesEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, CreativeTypesEnum& EnumValue);
	/* Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead. */
	TOptional<TArray<CreativeTypesEnum>> CreativeTypes;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
	/* Specify whether to return 90d and lifetime Pin metrics. Total comments and total reactions are only available with lifetime Pin metrics. If Pin was created before <code>2023-03-20</code> lifetime metrics will only be available for Video and Idea Pin formats. Lifetime metrics are available for all Pin formats since then. */
	TOptional<bool> PinMetrics;
};

class OPENAPI_API OpenAPIPinsApi::PinsListResponse : public Response
{
public:
    virtual ~PinsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIPinsList200Response Content;
};

/* Save Pin
 *
 * Save a Pin on a board or board section owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account. Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.  - Any Pin type can be saved: image Pin, video Pin, Idea Pin, product Pin, etc. - Any public Pin can be saved given a pin ID.
*/
class OPENAPI_API OpenAPIPinsApi::PinsSaveRequest : public Request
{
public:
    virtual ~PinsSaveRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a Pin. */
	FString PinId;
	/* Request object used to save an existing pin */
	OpenAPIPinsSaveRequest OpenAPIPinsSaveRequest;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIPinsApi::PinsSaveResponse : public Response
{
public:
    virtual ~PinsSaveResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIPin Content;
};

/* Update Pin
 *
 * Update a pin owned by the \&quot;operating user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
*/
class OPENAPI_API OpenAPIPinsApi::PinsUpdateRequest : public Request
{
public:
    virtual ~PinsUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of a Pin. */
	FString PinId;
	OpenAPIPinUpdate OpenAPIPinUpdate;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIPinsApi::PinsUpdateResponse : public Response
{
public:
    virtual ~PinsUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIPin Content;
};

}
