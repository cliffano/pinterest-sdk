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

#include "OpenAPITopVideoPinsAnalyticsResponsePinsInner.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITopVideoPinsAnalyticsResponsePinsInner::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Metrics.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("metrics")); WriteJsonValue(Writer, Metrics.GetValue());
	}
	if (DataStatus.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("data_status")); WriteJsonValue(Writer, DataStatus.GetValue());
	}
	if (PinId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pin_id")); WriteJsonValue(Writer, PinId.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITopVideoPinsAnalyticsResponsePinsInner::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("metrics"), Metrics);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data_status"), DataStatus);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pin_id"), PinId);

	return ParseSuccess;
}

}
