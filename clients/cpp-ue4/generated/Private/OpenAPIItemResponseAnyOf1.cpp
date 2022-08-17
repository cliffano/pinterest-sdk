/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIItemResponseAnyOf1.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIItemResponseAnyOf1::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ItemId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_id")); WriteJsonValue(Writer, ItemId.GetValue());
	}
	if (Errors.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("errors")); WriteJsonValue(Writer, Errors.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIItemResponseAnyOf1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_id"), ItemId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("errors"), Errors);

	return ParseSuccess;
}

}
