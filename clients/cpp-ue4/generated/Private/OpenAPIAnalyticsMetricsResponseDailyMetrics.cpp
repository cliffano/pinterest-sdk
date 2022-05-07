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

#include "OpenAPIAnalyticsMetricsResponseDailyMetrics.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::Processing:
		return TEXT("PROCESSING");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::Ready:
		return TEXT("READY");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::Estimate:
		return TEXT("ESTIMATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeBusinessCreated:
		return TEXT("BEFORE_BUSINESS_CREATED");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeDataRetentionPeriod:
		return TEXT("BEFORE_DATA_RETENTION_PERIOD");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePinDataRetentionPeriod:
		return TEXT("BEFORE_PIN_DATA_RETENTION_PERIOD");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeMetricStartDate:
		return TEXT("BEFORE_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeCoreMetricStartDate:
		return TEXT("BEFORE_CORE_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePinFormatMetricStartDate:
		return TEXT("BEFORE_PIN_FORMAT_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAudienceMetricStartDate:
		return TEXT("BEFORE_AUDIENCE_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAudienceMonthlyMetricStartDate:
		return TEXT("BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeVideoMetricStartDate:
		return TEXT("BEFORE_VIDEO_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeConversionMetricStartDate:
		return TEXT("BEFORE_CONVERSION_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::PurchasersMetricSmallerThanThreshold:
		return TEXT("PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::InBadTagDate:
		return TEXT("IN_BAD_TAG_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePublishedMetricStartDate:
		return TEXT("BEFORE_PUBLISHED_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAssistMetricStartDate:
		return TEXT("BEFORE_ASSIST_METRIC_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePinCreated:
		return TEXT("BEFORE_PIN_CREATED");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAccountClaimed:
		return TEXT("BEFORE_ACCOUNT_CLAIMED");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeDemographicFiltersStartDate:
		return TEXT("BEFORE_DEMOGRAPHIC_FILTERS_START_DATE");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::AudienceSegmentSmallerThanThreshold:
		return TEXT("AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::AudienceTotalSmallerThanThreshold:
		return TEXT("AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD");
	case OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeProductGroupFilterStartDate:
		return TEXT("BEFORE_PRODUCT_GROUP_FILTER_START_DATE");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAnalyticsMetricsResponseDailyMetrics::EnumToString(const OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum& Value)
{
	static TMap<FString, OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum> StringToEnum = { 
		{ TEXT("PROCESSING"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::Processing },
		{ TEXT("READY"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::Ready },
		{ TEXT("ESTIMATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::Estimate },
		{ TEXT("BEFORE_BUSINESS_CREATED"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeBusinessCreated },
		{ TEXT("BEFORE_DATA_RETENTION_PERIOD"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeDataRetentionPeriod },
		{ TEXT("BEFORE_PIN_DATA_RETENTION_PERIOD"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePinDataRetentionPeriod },
		{ TEXT("BEFORE_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeMetricStartDate },
		{ TEXT("BEFORE_CORE_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeCoreMetricStartDate },
		{ TEXT("BEFORE_PIN_FORMAT_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePinFormatMetricStartDate },
		{ TEXT("BEFORE_AUDIENCE_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAudienceMetricStartDate },
		{ TEXT("BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAudienceMonthlyMetricStartDate },
		{ TEXT("BEFORE_VIDEO_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeVideoMetricStartDate },
		{ TEXT("BEFORE_CONVERSION_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeConversionMetricStartDate },
		{ TEXT("PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::PurchasersMetricSmallerThanThreshold },
		{ TEXT("IN_BAD_TAG_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::InBadTagDate },
		{ TEXT("BEFORE_PUBLISHED_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePublishedMetricStartDate },
		{ TEXT("BEFORE_ASSIST_METRIC_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAssistMetricStartDate },
		{ TEXT("BEFORE_PIN_CREATED"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforePinCreated },
		{ TEXT("BEFORE_ACCOUNT_CLAIMED"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeAccountClaimed },
		{ TEXT("BEFORE_DEMOGRAPHIC_FILTERS_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeDemographicFiltersStartDate },
		{ TEXT("AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::AudienceSegmentSmallerThanThreshold },
		{ TEXT("AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::AudienceTotalSmallerThanThreshold },
		{ TEXT("BEFORE_PRODUCT_GROUP_FILTER_START_DATE"), OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum::BeforeProductGroupFilterStartDate }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAnalyticsMetricsResponseDailyMetrics::EnumFromString(const FString& EnumAsString, OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAnalyticsMetricsResponseDailyMetrics::DataStatusEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIAnalyticsMetricsResponseDailyMetrics::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (DataStatus.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("data_status")); WriteJsonValue(Writer, DataStatus.GetValue());
	}
	if (Date.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("date")); WriteJsonValue(Writer, Date.GetValue());
	}
	if (Metrics.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("metrics")); WriteJsonValue(Writer, Metrics.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAnalyticsMetricsResponseDailyMetrics::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data_status"), DataStatus);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("date"), Date);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("metrics"), Metrics);

	return ParseSuccess;
}

}
