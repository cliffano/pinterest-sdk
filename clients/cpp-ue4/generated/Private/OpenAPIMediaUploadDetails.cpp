/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIMediaUploadDetails.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIMediaUploadDetails::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (MediaId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_id")); WriteJsonValue(Writer, MediaId.GetValue());
	}
	if (MediaType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_type")); WriteJsonValue(Writer, MediaType.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIMediaUploadDetails::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_id"), MediaId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_type"), MediaType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);

	return ParseSuccess;
}

}
