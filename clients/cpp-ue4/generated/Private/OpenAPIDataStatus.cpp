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

#include "OpenAPIDataStatus.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIDataStatus::Values& Value)
{
	switch (Value)
	{
	case OpenAPIDataStatus::Values::Processing:
		return TEXT("PROCESSING");
	case OpenAPIDataStatus::Values::Ready:
		return TEXT("READY");
	case OpenAPIDataStatus::Values::Estimate:
		return TEXT("ESTIMATE");
	case OpenAPIDataStatus::Values::BeforeBusinessCreated:
		return TEXT("BEFORE_BUSINESS_CREATED");
	case OpenAPIDataStatus::Values::BeforeDataRetentionPeriod:
		return TEXT("BEFORE_DATA_RETENTION_PERIOD");
	case OpenAPIDataStatus::Values::BeforePinDataRetentionPeriod:
		return TEXT("BEFORE_PIN_DATA_RETENTION_PERIOD");
	case OpenAPIDataStatus::Values::BeforeMetricStartDate:
		return TEXT("BEFORE_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforeCoreMetricStartDate:
		return TEXT("BEFORE_CORE_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforePinFormatMetricStartDate:
		return TEXT("BEFORE_PIN_FORMAT_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforeAudienceMetricStartDate:
		return TEXT("BEFORE_AUDIENCE_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforeAudienceMonthlyMetricStartDate:
		return TEXT("BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforeVideoMetricStartDate:
		return TEXT("BEFORE_VIDEO_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforeConversionMetricStartDate:
		return TEXT("BEFORE_CONVERSION_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::PurchasersMetricSmallerThanThreshold:
		return TEXT("PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD");
	case OpenAPIDataStatus::Values::InBadTagDate:
		return TEXT("IN_BAD_TAG_DATE");
	case OpenAPIDataStatus::Values::BeforePublishedMetricStartDate:
		return TEXT("BEFORE_PUBLISHED_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforeAssistMetricStartDate:
		return TEXT("BEFORE_ASSIST_METRIC_START_DATE");
	case OpenAPIDataStatus::Values::BeforePinCreated:
		return TEXT("BEFORE_PIN_CREATED");
	case OpenAPIDataStatus::Values::BeforeAccountClaimed:
		return TEXT("BEFORE_ACCOUNT_CLAIMED");
	case OpenAPIDataStatus::Values::BeforeDemographicFiltersStartDate:
		return TEXT("BEFORE_DEMOGRAPHIC_FILTERS_START_DATE");
	case OpenAPIDataStatus::Values::AudienceSegmentSmallerThanThreshold:
		return TEXT("AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD");
	case OpenAPIDataStatus::Values::AudienceTotalSmallerThanThreshold:
		return TEXT("AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD");
	case OpenAPIDataStatus::Values::BeforeProductGroupFilterStartDate:
		return TEXT("BEFORE_PRODUCT_GROUP_FILTER_START_DATE");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIDataStatus::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIDataStatus::EnumToString(const OpenAPIDataStatus::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIDataStatus::Values& Value)
{
	static TMap<FString, OpenAPIDataStatus::Values> StringToEnum = { 
		{ TEXT("PROCESSING"), OpenAPIDataStatus::Values::Processing },
		{ TEXT("READY"), OpenAPIDataStatus::Values::Ready },
		{ TEXT("ESTIMATE"), OpenAPIDataStatus::Values::Estimate },
		{ TEXT("BEFORE_BUSINESS_CREATED"), OpenAPIDataStatus::Values::BeforeBusinessCreated },
		{ TEXT("BEFORE_DATA_RETENTION_PERIOD"), OpenAPIDataStatus::Values::BeforeDataRetentionPeriod },
		{ TEXT("BEFORE_PIN_DATA_RETENTION_PERIOD"), OpenAPIDataStatus::Values::BeforePinDataRetentionPeriod },
		{ TEXT("BEFORE_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforeMetricStartDate },
		{ TEXT("BEFORE_CORE_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforeCoreMetricStartDate },
		{ TEXT("BEFORE_PIN_FORMAT_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforePinFormatMetricStartDate },
		{ TEXT("BEFORE_AUDIENCE_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforeAudienceMetricStartDate },
		{ TEXT("BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforeAudienceMonthlyMetricStartDate },
		{ TEXT("BEFORE_VIDEO_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforeVideoMetricStartDate },
		{ TEXT("BEFORE_CONVERSION_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforeConversionMetricStartDate },
		{ TEXT("PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD"), OpenAPIDataStatus::Values::PurchasersMetricSmallerThanThreshold },
		{ TEXT("IN_BAD_TAG_DATE"), OpenAPIDataStatus::Values::InBadTagDate },
		{ TEXT("BEFORE_PUBLISHED_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforePublishedMetricStartDate },
		{ TEXT("BEFORE_ASSIST_METRIC_START_DATE"), OpenAPIDataStatus::Values::BeforeAssistMetricStartDate },
		{ TEXT("BEFORE_PIN_CREATED"), OpenAPIDataStatus::Values::BeforePinCreated },
		{ TEXT("BEFORE_ACCOUNT_CLAIMED"), OpenAPIDataStatus::Values::BeforeAccountClaimed },
		{ TEXT("BEFORE_DEMOGRAPHIC_FILTERS_START_DATE"), OpenAPIDataStatus::Values::BeforeDemographicFiltersStartDate },
		{ TEXT("AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD"), OpenAPIDataStatus::Values::AudienceSegmentSmallerThanThreshold },
		{ TEXT("AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD"), OpenAPIDataStatus::Values::AudienceTotalSmallerThanThreshold },
		{ TEXT("BEFORE_PRODUCT_GROUP_FILTER_START_DATE"), OpenAPIDataStatus::Values::BeforeProductGroupFilterStartDate }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIDataStatus::EnumFromString(const FString& EnumAsString, OpenAPIDataStatus::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIDataStatus::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIDataStatus::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIDataStatus::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIDataStatus::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
