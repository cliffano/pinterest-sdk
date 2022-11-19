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

#include "OpenAPITopPinsAnalyticsResponseDateAvailability.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITopPinsAnalyticsResponseDateAvailability::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (LatestAvailableTimestamp.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("latest_available_timestamp")); WriteJsonValue(Writer, LatestAvailableTimestamp.GetValue());
	}
	if (IsRealtime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_realtime")); WriteJsonValue(Writer, IsRealtime.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITopPinsAnalyticsResponseDateAvailability::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("latest_available_timestamp"), LatestAvailableTimestamp);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_realtime"), IsRealtime);

	return ParseSuccess;
}

}
