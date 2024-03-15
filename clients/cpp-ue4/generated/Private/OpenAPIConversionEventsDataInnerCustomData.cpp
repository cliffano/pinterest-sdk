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

#include "OpenAPIConversionEventsDataInnerCustomData.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIConversionEventsDataInnerCustomData::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Currency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("currency")); WriteJsonValue(Writer, Currency.GetValue());
	}
	if (Value.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value.GetValue());
	}
	if (ContentIds.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("content_ids")); WriteJsonValue(Writer, ContentIds.GetValue());
	}
	if (ContentName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("content_name")); WriteJsonValue(Writer, ContentName.GetValue());
	}
	if (ContentCategory.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("content_category")); WriteJsonValue(Writer, ContentCategory.GetValue());
	}
	if (ContentBrand.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("content_brand")); WriteJsonValue(Writer, ContentBrand.GetValue());
	}
	if (Contents.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("contents")); WriteJsonValue(Writer, Contents.GetValue());
	}
	if (NumItems.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("num_items")); WriteJsonValue(Writer, NumItems.GetValue());
	}
	if (OrderId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("order_id")); WriteJsonValue(Writer, OrderId.GetValue());
	}
	if (SearchString.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("search_string")); WriteJsonValue(Writer, SearchString.GetValue());
	}
	if (OptOutType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("opt_out_type")); WriteJsonValue(Writer, OptOutType.GetValue());
	}
	if (Np.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("np")); WriteJsonValue(Writer, Np.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIConversionEventsDataInnerCustomData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("currency"), Currency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("content_ids"), ContentIds);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("content_name"), ContentName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("content_category"), ContentCategory);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("content_brand"), ContentBrand);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contents"), Contents);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("num_items"), NumItems);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("order_id"), OrderId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("search_string"), SearchString);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("opt_out_type"), OptOutType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("np"), Np);

	return ParseSuccess;
}

}
