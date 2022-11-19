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

#include "OpenAPIItemDeleteDiscontinuedBatchRecord.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIItemDeleteDiscontinuedBatchRecord::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ItemId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_id")); WriteJsonValue(Writer, ItemId.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIItemDeleteDiscontinuedBatchRecord::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_id"), ItemId);

	return ParseSuccess;
}

}
