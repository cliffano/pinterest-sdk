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

#include "OpenAPIProductGroupPromotionUpdateResponseItem.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIProductGroupPromotionUpdateResponseItem::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Data.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data.GetValue());
	}
	if (Exceptions.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("exceptions")); WriteJsonValue(Writer, Exceptions.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIProductGroupPromotionUpdateResponseItem::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("exceptions"), Exceptions);

	return ParseSuccess;
}

}
