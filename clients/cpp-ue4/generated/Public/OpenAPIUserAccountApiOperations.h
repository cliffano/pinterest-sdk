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
#include "OpenAPIUserAccountApi.h"

#include "OpenAPIAccount.h"
#include "OpenAPIAnalyticsMetricsResponse.h"
#include "OpenAPIBoardsUserFollowsList200Response.h"
#include "OpenAPIError.h"
#include "OpenAPIFollowUserRequest.h"
#include "OpenAPIFollowersList200Response.h"
#include "OpenAPILinkedBusiness.h"
#include "OpenAPITopPinsAnalyticsResponse.h"
#include "OpenAPITopVideoPinsAnalyticsResponse.h"
#include "OpenAPIUserAccountFollowedInterests200Response.h"
#include "OpenAPIUserFollowingFeedType.h"
#include "OpenAPIUserFollowingGet200Response.h"
#include "OpenAPIUserSummary.h"
#include "OpenAPIUserWebsiteSummary.h"
#include "OpenAPIUserWebsiteVerificationCode.h"
#include "OpenAPIUserWebsiteVerifyRequest.h"
#include "OpenAPIUserWebsitesGet200Response.h"

namespace OpenAPI
{

/* List following boards
 *
 * Get a list of the boards a user follows. The request returns a board summary object array.
*/
class OPENAPI_API OpenAPIUserAccountApi::BoardsUserFollowsListRequest : public Request
{
public:
    virtual ~BoardsUserFollowsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Whether or not to include implicit user follows, which means followees with board follows. When explicit_following is True, it means we only want explicit user follows. */
	TOptional<bool> ExplicitFollowing;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIUserAccountApi::BoardsUserFollowsListResponse : public Response
{
public:
    virtual ~BoardsUserFollowsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIBoardsUserFollowsList200Response Content;
};

/* Follow user
 *
 * &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;  Use this request, as a signed-in user, to follow another user.
*/
class OPENAPI_API OpenAPIUserAccountApi::FollowUserUpdateRequest : public Request
{
public:
    virtual ~FollowUserUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* A valid username */
	FString Username;
	/* Follow a user. */
	OpenAPIFollowUserRequest OpenAPIFollowUserRequest;
};

class OPENAPI_API OpenAPIUserAccountApi::FollowUserUpdateResponse : public Response
{
public:
    virtual ~FollowUserUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIUserSummary Content;
};

/* List followers
 *
 * Get a list of your followers.
*/
class OPENAPI_API OpenAPIUserAccountApi::FollowersListRequest : public Request
{
public:
    virtual ~FollowersListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
};

class OPENAPI_API OpenAPIUserAccountApi::FollowersListResponse : public Response
{
public:
    virtual ~FollowersListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIFollowersList200Response Content;
};

/* List linked businesses
 *
 * Get a list of your linked business accounts.
*/
class OPENAPI_API OpenAPIUserAccountApi::LinkedBusinessAccountsGetRequest : public Request
{
public:
    virtual ~LinkedBusinessAccountsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIUserAccountApi::LinkedBusinessAccountsGetResponse : public Response
{
public:
    virtual ~LinkedBusinessAccountsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPILinkedBusiness> Content;
};

/* Unverify website
 *
 * Unverifu a website verified by the signed-in user.
*/
class OPENAPI_API OpenAPIUserAccountApi::UnverifyWebsiteDeleteRequest : public Request
{
public:
    virtual ~UnverifyWebsiteDeleteRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Website with path or domain only */
	FString Website;
};

class OPENAPI_API OpenAPIUserAccountApi::UnverifyWebsiteDeleteResponse : public Response
{
public:
    virtual ~UnverifyWebsiteDeleteResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    
};

/* Get user account analytics
 *
 * Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
*/
class OPENAPI_API OpenAPIUserAccountApi::UserAccountAnalyticsRequest : public Request
{
public:
    virtual ~UserAccountAnalyticsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. */
	FDateTime EndDate;
	enum class FromClaimedContentEnum
	{
		Other,
		Claimed,
		Both,
  	};

	static FString EnumToString(const FromClaimedContentEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, FromClaimedContentEnum& EnumValue);
	/* Filter on Pins that match your claimed domain. */
	TOptional<FromClaimedContentEnum> FromClaimedContent;
	enum class PinFormatEnum
	{
		All,
		OrganicImage,
		OrganicProduct,
		OrganicVideo,
		AdsStandard,
		AdsProduct,
		AdsVideo,
		AdsIdea,
		Product,
		Regular,
		Video,
  	};

	static FString EnumToString(const PinFormatEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, PinFormatEnum& EnumValue);
	/* Pin formats to get data for, default is all. */
	TOptional<PinFormatEnum> PinFormat;
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
	enum class ContentTypeEnum
	{
		All,
		Paid,
		Organic,
  	};

	static FString EnumToString(const ContentTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ContentTypeEnum& EnumValue);
	/* Filter to paid or organic data. Default is all. */
	TOptional<ContentTypeEnum> ContentType;
	enum class SourceEnum
	{
		All,
		YourPins,
		OtherPins,
  	};

	static FString EnumToString(const SourceEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SourceEnum& EnumValue);
	/* Filter to activity from Pins created and saved by your, or activity created and saved by others from your claimed accounts */
	TOptional<SourceEnum> Source;
	enum class MetricTypesEnum
	{
		Engagement,
		EngagementRate,
		Impression,
		OutboundClick,
		OutboundClickRate,
		PinClick,
		PinClickRate,
		Save,
		SaveRate,
  	};

	static FString EnumToString(const MetricTypesEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, MetricTypesEnum& EnumValue);
	/* Metric types to get data for, default is all.  */
	TOptional<TArray<MetricTypesEnum>> MetricTypes;
	enum class SplitFieldEnum
	{
		NoSplit,
		AppType,
		OwnedContent,
		Source,
		PinFormat,
  	};

	static FString EnumToString(const SplitFieldEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SplitFieldEnum& EnumValue);
	/* How to split the data into groups. Not including this param means data won't be split. */
	TOptional<SplitFieldEnum> SplitField;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIUserAccountApi::UserAccountAnalyticsResponse : public Response
{
public:
    virtual ~UserAccountAnalyticsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TMap<FString, OpenAPIAnalyticsMetricsResponse> Content;
};

/* Get user account top pins analytics
 *
 * Gets analytics data about a user&#39;s top pins (limited to the top 50). - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
*/
class OPENAPI_API OpenAPIUserAccountApi::UserAccountAnalyticsTopPinsRequest : public Request
{
public:
    virtual ~UserAccountAnalyticsTopPinsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. */
	FDateTime EndDate;
	enum class SortByEnum
	{
		Engagement,
		Impression,
		OutboundClick,
		PinClick,
		Save,
  	};

	static FString EnumToString(const SortByEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SortByEnum& EnumValue);
	/* Specify sorting order for metrics */
	SortByEnum SortBy;
	enum class FromClaimedContentEnum
	{
		Other,
		Claimed,
		Both,
  	};

	static FString EnumToString(const FromClaimedContentEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, FromClaimedContentEnum& EnumValue);
	/* Filter on Pins that match your claimed domain. */
	TOptional<FromClaimedContentEnum> FromClaimedContent;
	enum class PinFormatEnum
	{
		All,
		OrganicImage,
		OrganicProduct,
		OrganicVideo,
		AdsStandard,
		AdsProduct,
		AdsVideo,
		AdsIdea,
		Product,
		Regular,
		Video,
  	};

	static FString EnumToString(const PinFormatEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, PinFormatEnum& EnumValue);
	/* Pin formats to get data for, default is all. */
	TOptional<PinFormatEnum> PinFormat;
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
	enum class ContentTypeEnum
	{
		All,
		Paid,
		Organic,
  	};

	static FString EnumToString(const ContentTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ContentTypeEnum& EnumValue);
	/* Filter to paid or organic data. Default is all. */
	TOptional<ContentTypeEnum> ContentType;
	enum class SourceEnum
	{
		All,
		YourPins,
		OtherPins,
  	};

	static FString EnumToString(const SourceEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SourceEnum& EnumValue);
	/* Filter to activity from Pins created and saved by your, or activity created and saved by others from your claimed accounts */
	TOptional<SourceEnum> Source;
	enum class MetricTypesEnum
	{
		Engagement,
		EngagementRate,
		Impression,
		OutboundClick,
		OutboundClickRate,
		PinClick,
		PinClickRate,
		Save,
		SaveRate,
  	};

	static FString EnumToString(const MetricTypesEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, MetricTypesEnum& EnumValue);
	/* Metric types to get data for, default is all.  */
	TOptional<TArray<MetricTypesEnum>> MetricTypes;
	/* Number of pins to include, default is 10. Max is 50. */
	TOptional<int32> NumOfPins;
	enum class CreatedInLastNDaysEnum
	{
		_30,
  	};

	static FString EnumToString(const CreatedInLastNDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, CreatedInLastNDaysEnum& EnumValue);
	/* Get metrics for pins created in the last \"n\" days. */
	TOptional<CreatedInLastNDaysEnum> CreatedInLastNDays;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIUserAccountApi::UserAccountAnalyticsTopPinsResponse : public Response
{
public:
    virtual ~UserAccountAnalyticsTopPinsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITopPinsAnalyticsResponse Content;
};

/* Get user account top video pins analytics
 *
 * Gets analytics data about a user&#39;s top video pins (limited to the top 50). - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
*/
class OPENAPI_API OpenAPIUserAccountApi::UserAccountAnalyticsTopVideoPinsRequest : public Request
{
public:
    virtual ~UserAccountAnalyticsTopVideoPinsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. */
	FDateTime EndDate;
	enum class SortByEnum
	{
		Impression,
		Save,
		OutboundClick,
		VideoMrcView,
		VideoAvgWatchTime,
		VIDEOV50WATCHTIME,
		QUARTILE95PERCENTVIEW,
		VIDEO10SVIEW,
		VideoStart,
  	};

	static FString EnumToString(const SortByEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SortByEnum& EnumValue);
	/* Specify sorting order for video metrics */
	SortByEnum SortBy;
	enum class FromClaimedContentEnum
	{
		Other,
		Claimed,
		Both,
  	};

	static FString EnumToString(const FromClaimedContentEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, FromClaimedContentEnum& EnumValue);
	/* Filter on Pins that match your claimed domain. */
	TOptional<FromClaimedContentEnum> FromClaimedContent;
	enum class PinFormatEnum
	{
		All,
		OrganicImage,
		OrganicProduct,
		OrganicVideo,
		AdsStandard,
		AdsProduct,
		AdsVideo,
		AdsIdea,
		Product,
		Regular,
		Video,
  	};

	static FString EnumToString(const PinFormatEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, PinFormatEnum& EnumValue);
	/* Pin formats to get data for, default is all. */
	TOptional<PinFormatEnum> PinFormat;
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
	enum class ContentTypeEnum
	{
		All,
		Paid,
		Organic,
  	};

	static FString EnumToString(const ContentTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ContentTypeEnum& EnumValue);
	/* Filter to paid or organic data. Default is all. */
	TOptional<ContentTypeEnum> ContentType;
	enum class SourceEnum
	{
		All,
		YourPins,
		OtherPins,
  	};

	static FString EnumToString(const SourceEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SourceEnum& EnumValue);
	/* Filter to activity from Pins created and saved by your, or activity created and saved by others from your claimed accounts */
	TOptional<SourceEnum> Source;
	enum class MetricTypesEnum
	{
		Impression,
		Save,
		VideoMrcView,
		VideoAvgWatchTime,
		VIDEOV50WATCHTIME,
		QUARTILE95PERCENTVIEW,
		VIDEO10SVIEW,
		VideoStart,
		OutboundClick,
  	};

	static FString EnumToString(const MetricTypesEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, MetricTypesEnum& EnumValue);
	/* Metric types to get video data for, default is all.  */
	TOptional<TArray<MetricTypesEnum>> MetricTypes;
	/* Number of pins to include, default is 10. Max is 50. */
	TOptional<int32> NumOfPins;
	enum class CreatedInLastNDaysEnum
	{
		_30,
  	};

	static FString EnumToString(const CreatedInLastNDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, CreatedInLastNDaysEnum& EnumValue);
	/* Get metrics for pins created in the last \"n\" days. */
	TOptional<CreatedInLastNDaysEnum> CreatedInLastNDays;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIUserAccountApi::UserAccountAnalyticsTopVideoPinsResponse : public Response
{
public:
    virtual ~UserAccountAnalyticsTopVideoPinsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITopVideoPinsAnalyticsResponse Content;
};

/* List following interests
 *
 * Get a list of a user&#39;s following interests in one place.
*/
class OPENAPI_API OpenAPIUserAccountApi::UserAccountFollowedInterestsRequest : public Request
{
public:
    virtual ~UserAccountFollowedInterestsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* A valid username */
	FString Username;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
};

class OPENAPI_API OpenAPIUserAccountApi::UserAccountFollowedInterestsResponse : public Response
{
public:
    virtual ~UserAccountFollowedInterestsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIUserAccountFollowedInterests200Response Content;
};

/* Get user account
 *
 * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/reference/business-access/&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
*/
class OPENAPI_API OpenAPIUserAccountApi::UserAccountGetRequest : public Request
{
public:
    virtual ~UserAccountGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIUserAccountApi::UserAccountGetResponse : public Response
{
public:
    virtual ~UserAccountGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccount Content;
};

/* List following
 *
 * Get a list of who a certain user follows.
*/
class OPENAPI_API OpenAPIUserAccountApi::UserFollowingGetRequest : public Request
{
public:
    virtual ~UserFollowingGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Thrift param specifying what type of followees will be kept. Default to include all followees. */
	TOptional<OpenAPIUserFollowingFeedType> FeedType;
	/* Whether or not to include implicit user follows, which means followees with board follows. When explicit_following is True, it means we only want explicit user follows. */
	TOptional<bool> ExplicitFollowing;
	/* Unique identifier of an ad account. */
	TOptional<FString> AdAccountId;
};

class OPENAPI_API OpenAPIUserAccountApi::UserFollowingGetResponse : public Response
{
public:
    virtual ~UserFollowingGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIUserFollowingGet200Response Content;
};

/* Get user websites
 *
 * Get user websites, claimed or not
*/
class OPENAPI_API OpenAPIUserAccountApi::UserWebsitesGetRequest : public Request
{
public:
    virtual ~UserWebsitesGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
};

class OPENAPI_API OpenAPIUserAccountApi::UserWebsitesGetResponse : public Response
{
public:
    virtual ~UserWebsitesGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIUserWebsitesGet200Response Content;
};

/* Verify website
 *
 * Verify a website as a signed-in user.
*/
class OPENAPI_API OpenAPIUserAccountApi::VerifyWebsiteUpdateRequest : public Request
{
public:
    virtual ~VerifyWebsiteUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Verify a website. */
	OpenAPIUserWebsiteVerifyRequest OpenAPIUserWebsiteVerifyRequest;
};

class OPENAPI_API OpenAPIUserAccountApi::VerifyWebsiteUpdateResponse : public Response
{
public:
    virtual ~VerifyWebsiteUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIUserWebsiteSummary Content;
};

/* Get user verification code for website claiming
 *
 * Get verification code for user to install on the website to claim it.
*/
class OPENAPI_API OpenAPIUserAccountApi::WebsiteVerificationGetRequest : public Request
{
public:
    virtual ~WebsiteVerificationGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIUserAccountApi::WebsiteVerificationGetResponse : public Response
{
public:
    virtual ~WebsiteVerificationGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIUserWebsiteVerificationCode Content;
};

}
