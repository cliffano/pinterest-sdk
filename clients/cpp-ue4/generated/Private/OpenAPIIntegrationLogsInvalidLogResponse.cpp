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

#include "OpenAPIIntegrationLogsInvalidLogResponse.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIIntegrationLogsInvalidLogResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (RejectedLogs.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("rejected_logs")); WriteJsonValue(Writer, RejectedLogs.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIIntegrationLogsInvalidLogResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("rejected_logs"), RejectedLogs);

	return ParseSuccess;
}

}
