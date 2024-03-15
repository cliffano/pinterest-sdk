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

#include "OpenAPIBulkUpsertRequestCreate.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIBulkUpsertRequestCreate::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Campaigns.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("campaigns")); WriteJsonValue(Writer, Campaigns.GetValue());
	}
	if (AdGroups.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_groups")); WriteJsonValue(Writer, AdGroups.GetValue());
	}
	if (Ads.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ads")); WriteJsonValue(Writer, Ads.GetValue());
	}
	if (ProductGroups.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("product_groups")); WriteJsonValue(Writer, ProductGroups.GetValue());
	}
	if (Keywords.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("keywords")); WriteJsonValue(Writer, Keywords.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIBulkUpsertRequestCreate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("campaigns"), Campaigns);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_groups"), AdGroups);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ads"), Ads);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("product_groups"), ProductGroups);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("keywords"), Keywords);

	return ParseSuccess;
}

}
