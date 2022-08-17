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

#include "OpenAPIProductGroupPromotionCommon.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIProductGroupPromotionCommon::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (TrackingUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("tracking_url")); WriteJsonValue(Writer, TrackingUrl.GetValue());
	}
	if (CatalogsProductGroupId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("catalogs_product_group_id")); WriteJsonValue(Writer, CatalogsProductGroupId.GetValue());
	}
	if (CatalogsProductGroupName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("catalogs_product_group_name")); WriteJsonValue(Writer, CatalogsProductGroupName.GetValue());
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
	if (SlideshowCollectionsTitle.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("slideshow_collections_title")); WriteJsonValue(Writer, SlideshowCollectionsTitle.GetValue());
	}
	if (SlideshowCollectionsDescription.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("slideshow_collections_description")); WriteJsonValue(Writer, SlideshowCollectionsDescription.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIProductGroupPromotionCommon::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tracking_url"), TrackingUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalogs_product_group_id"), CatalogsProductGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalogs_product_group_name"), CatalogsProductGroupName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("creative_type"), CreativeType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("collections_hero_pin_id"), CollectionsHeroPinId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("collections_hero_destination_url"), CollectionsHeroDestinationUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("slideshow_collections_title"), SlideshowCollectionsTitle);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("slideshow_collections_description"), SlideshowCollectionsDescription);

	return ParseSuccess;
}

}
