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

#include "OpenAPICatalogsItemsBatch.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsItemsBatch::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Items.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("items")); WriteJsonValue(Writer, Items.GetValue());
	}
	if (BatchId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("batch_id")); WriteJsonValue(Writer, BatchId.GetValue());
	}
	if (CreatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("created_time")); WriteJsonValue(Writer, CreatedTime.GetValue());
	}
	if (CompletedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("completed_time")); WriteJsonValue(Writer, CompletedTime.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsItemsBatch::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("items"), Items);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("batch_id"), BatchId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("created_time"), CreatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("completed_time"), CompletedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);

	return ParseSuccess;
}

}
