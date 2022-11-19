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

#include "OpenAPICatalogsProductGroupProductCounts.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsProductGroupProductCounts::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("in_stock")); WriteJsonValue(Writer, InStock);
	Writer->WriteIdentifierPrefix(TEXT("out_of_stock")); WriteJsonValue(Writer, OutOfStock);
	Writer->WriteIdentifierPrefix(TEXT("preorder")); WriteJsonValue(Writer, Preorder);
	Writer->WriteIdentifierPrefix(TEXT("total")); WriteJsonValue(Writer, Total);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsProductGroupProductCounts::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("in_stock"), InStock);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("out_of_stock"), OutOfStock);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("preorder"), Preorder);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("total"), Total);

	return ParseSuccess;
}

}
