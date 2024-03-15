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

#include "OpenAPICatalogsProductMetadata.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsProductMetadata::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("item_id")); WriteJsonValue(Writer, ItemId);
	Writer->WriteIdentifierPrefix(TEXT("item_group_id")); WriteJsonValue(Writer, ItemGroupId);
	Writer->WriteIdentifierPrefix(TEXT("availability")); WriteJsonValue(Writer, Availability);
	Writer->WriteIdentifierPrefix(TEXT("price")); WriteJsonValue(Writer, Price);
	Writer->WriteIdentifierPrefix(TEXT("sale_price")); WriteJsonValue(Writer, SalePrice);
	Writer->WriteIdentifierPrefix(TEXT("currency")); WriteJsonValue(Writer, Currency);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsProductMetadata::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_id"), ItemId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_group_id"), ItemGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("availability"), Availability);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("price"), Price);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("sale_price"), SalePrice);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("currency"), Currency);

	return ParseSuccess;
}

}
