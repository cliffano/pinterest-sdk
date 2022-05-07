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

#include "OpenAPICatalogsFeedProcessingStatus.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICatalogsFeedProcessingStatus::Values& Value)
{
	switch (Value)
	{
	case OpenAPICatalogsFeedProcessingStatus::Values::Completed:
		return TEXT("COMPLETED");
	case OpenAPICatalogsFeedProcessingStatus::Values::CompletedEarly:
		return TEXT("COMPLETED_EARLY");
	case OpenAPICatalogsFeedProcessingStatus::Values::Disapproved:
		return TEXT("DISAPPROVED");
	case OpenAPICatalogsFeedProcessingStatus::Values::Failed:
		return TEXT("FAILED");
	case OpenAPICatalogsFeedProcessingStatus::Values::Processing:
		return TEXT("PROCESSING");
	case OpenAPICatalogsFeedProcessingStatus::Values::QueuedForProcessing:
		return TEXT("QUEUED_FOR_PROCESSING");
	case OpenAPICatalogsFeedProcessingStatus::Values::UnderAppeal:
		return TEXT("UNDER_APPEAL");
	case OpenAPICatalogsFeedProcessingStatus::Values::UnderReview:
		return TEXT("UNDER_REVIEW");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICatalogsFeedProcessingStatus::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICatalogsFeedProcessingStatus::EnumToString(const OpenAPICatalogsFeedProcessingStatus::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICatalogsFeedProcessingStatus::Values& Value)
{
	static TMap<FString, OpenAPICatalogsFeedProcessingStatus::Values> StringToEnum = { 
		{ TEXT("COMPLETED"), OpenAPICatalogsFeedProcessingStatus::Values::Completed },
		{ TEXT("COMPLETED_EARLY"), OpenAPICatalogsFeedProcessingStatus::Values::CompletedEarly },
		{ TEXT("DISAPPROVED"), OpenAPICatalogsFeedProcessingStatus::Values::Disapproved },
		{ TEXT("FAILED"), OpenAPICatalogsFeedProcessingStatus::Values::Failed },
		{ TEXT("PROCESSING"), OpenAPICatalogsFeedProcessingStatus::Values::Processing },
		{ TEXT("QUEUED_FOR_PROCESSING"), OpenAPICatalogsFeedProcessingStatus::Values::QueuedForProcessing },
		{ TEXT("UNDER_APPEAL"), OpenAPICatalogsFeedProcessingStatus::Values::UnderAppeal },
		{ TEXT("UNDER_REVIEW"), OpenAPICatalogsFeedProcessingStatus::Values::UnderReview }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICatalogsFeedProcessingStatus::EnumFromString(const FString& EnumAsString, OpenAPICatalogsFeedProcessingStatus::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICatalogsFeedProcessingStatus::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICatalogsFeedProcessingStatus::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICatalogsFeedProcessingStatus::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICatalogsFeedProcessingStatus::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPICatalogsFeedProcessingStatus::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
