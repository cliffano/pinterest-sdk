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

#include "OpenAPIOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ClickWindowDays.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("click_window_days")); WriteJsonValue(Writer, ClickWindowDays.GetValue());
	}
	if (EngagementWindowDays.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("engagement_window_days")); WriteJsonValue(Writer, EngagementWindowDays.GetValue());
	}
	if (ViewWindowDays.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("view_window_days")); WriteJsonValue(Writer, ViewWindowDays.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("click_window_days"), ClickWindowDays);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("engagement_window_days"), EngagementWindowDays);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("view_window_days"), ViewWindowDays);

	return ParseSuccess;
}

}