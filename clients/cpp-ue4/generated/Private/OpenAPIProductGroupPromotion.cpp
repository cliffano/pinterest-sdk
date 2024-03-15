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

#include "OpenAPIProductGroupPromotion.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIProductGroupPromotion::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (AdGroupId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_group_id")); WriteJsonValue(Writer, AdGroupId.GetValue());
	}
	if (BidInMicroCurrency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bid_in_micro_currency")); WriteJsonValue(Writer, BidInMicroCurrency.GetValue());
	}
	if (Included.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("included")); WriteJsonValue(Writer, Included.GetValue());
	}
	if (Definition.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("definition")); WriteJsonValue(Writer, Definition.GetValue());
	}
	if (RelativeDefinition.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("relative_definition")); WriteJsonValue(Writer, RelativeDefinition.GetValue());
	}
	if (ParentId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("parent_id")); WriteJsonValue(Writer, ParentId.GetValue());
	}
	if (SlideshowCollectionsTitle.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("slideshow_collections_title")); WriteJsonValue(Writer, SlideshowCollectionsTitle.GetValue());
	}
	if (SlideshowCollectionsDescription.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("slideshow_collections_description")); WriteJsonValue(Writer, SlideshowCollectionsDescription.GetValue());
	}
	if (IsMdl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_mdl")); WriteJsonValue(Writer, IsMdl.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (TrackingUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("tracking_url")); WriteJsonValue(Writer, TrackingUrl.GetValue());
	}
	if (CatalogProductGroupId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("catalog_product_group_id")); WriteJsonValue(Writer, CatalogProductGroupId.GetValue());
	}
	if (CatalogProductGroupName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("catalog_product_group_name")); WriteJsonValue(Writer, CatalogProductGroupName.GetValue());
	}
	if (CreativeType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("creative_type")); WriteJsonValue(Writer, CreativeType.GetValue());
	}
	if (CollectionsHeroPinId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("collections_hero_pin_id")); WriteJsonValue(Writer, CollectionsHeroPinId.GetValue());
	}
	if (CollectionsHeroDestinationUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("collections_hero_destination_url")); WriteJsonValue(Writer, CollectionsHeroDestinationUrl.GetValue());
	}
	if (GridClickType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("grid_click_type")); WriteJsonValue(Writer, GridClickType.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIProductGroupPromotion::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_group_id"), AdGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bid_in_micro_currency"), BidInMicroCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("included"), Included);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("definition"), Definition);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("relative_definition"), RelativeDefinition);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("parent_id"), ParentId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("slideshow_collections_title"), SlideshowCollectionsTitle);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("slideshow_collections_description"), SlideshowCollectionsDescription);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_mdl"), IsMdl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tracking_url"), TrackingUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_product_group_id"), CatalogProductGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_product_group_name"), CatalogProductGroupName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("creative_type"), CreativeType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("collections_hero_pin_id"), CollectionsHeroPinId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("collections_hero_destination_url"), CollectionsHeroDestinationUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("grid_click_type"), GridClickType);

	return ParseSuccess;
}

}
