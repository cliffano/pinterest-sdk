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
#include "OpenAPIUserAccountApi.h"

#include "OpenAPIAccount.h"
#include "OpenAPIAnalyticsMetricsResponse.h"
#include "OpenAPIError.h"
#include "OpenAPITopPinsAnalyticsResponse.h"
#include "OpenAPITopVideoPinsAnalyticsResponse.h"

namespace OpenAPI
{

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

	/* Metric report start date (UTC). Format: YYYY-MM-DD */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD */
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

	/* Metric report start date (UTC). Format: YYYY-MM-DD */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD */
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

	/* Metric report start date (UTC). Format: YYYY-MM-DD */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD */
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

/* Get user account
 *
 * Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
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

}
