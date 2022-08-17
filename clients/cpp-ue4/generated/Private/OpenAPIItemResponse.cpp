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

#include "OpenAPIItemResponse.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIItemResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ItemId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_id")); WriteJsonValue(Writer, ItemId.GetValue());
	}
	if (Attributes.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("attributes")); WriteJsonValue(Writer, Attributes.GetValue());
	}
	if (Errors.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("errors")); WriteJsonValue(Writer, Errors.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIItemResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_id"), ItemId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("attributes"), Attributes);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("errors"), Errors);

	return ParseSuccess;
}

}
