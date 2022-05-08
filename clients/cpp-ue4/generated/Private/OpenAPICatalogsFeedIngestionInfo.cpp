/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICatalogsFeedIngestionInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsFeedIngestionInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (InStock.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("in_stock")); WriteJsonValue(Writer, InStock.GetValue());
	}
	if (OutOfStock.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("out_of_stock")); WriteJsonValue(Writer, OutOfStock.GetValue());
	}
	if (Preorder.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("preorder")); WriteJsonValue(Writer, Preorder.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsFeedIngestionInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("in_stock"), InStock);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("out_of_stock"), OutOfStock);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("preorder"), Preorder);

	return ParseSuccess;
}

}