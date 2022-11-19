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

#include "OpenAPIAdCommon.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAdCommon::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdGroupId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_group_id")); WriteJsonValue(Writer, AdGroupId.GetValue());
	}
	if (AndroidDeepLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("android_deep_link")); WriteJsonValue(Writer, AndroidDeepLink.GetValue());
	}
	if (CarouselAndroidDeepLinks.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("carousel_android_deep_links")); WriteJsonValue(Writer, CarouselAndroidDeepLinks.GetValue());
	}
	if (CarouselDestinationUrls.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("carousel_destination_urls")); WriteJsonValue(Writer, CarouselDestinationUrls.GetValue());
	}
	if (CarouselIosDeepLinks.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("carousel_ios_deep_links")); WriteJsonValue(Writer, CarouselIosDeepLinks.GetValue());
	}
	if (ClickTrackingUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("click_tracking_url")); WriteJsonValue(Writer, ClickTrackingUrl.GetValue());
	}
	if (CreativeType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("creative_type")); WriteJsonValue(Writer, CreativeType.GetValue());
	}
	if (DestinationUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("destination_url")); WriteJsonValue(Writer, DestinationUrl.GetValue());
	}
	if (IosDeepLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ios_deep_link")); WriteJsonValue(Writer, IosDeepLink.GetValue());
	}
	if (IsPinDeleted.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_pin_deleted")); WriteJsonValue(Writer, IsPinDeleted.GetValue());
	}
	if (IsRemovable.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_removable")); WriteJsonValue(Writer, IsRemovable.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (PinId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pin_id")); WriteJsonValue(Writer, PinId.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (TrackingUrls.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("tracking_urls")); WriteJsonValue(Writer, TrackingUrls.GetValue());
	}
	if (ViewTrackingUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("view_tracking_url")); WriteJsonValue(Writer, ViewTrackingUrl.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAdCommon::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_group_id"), AdGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("android_deep_link"), AndroidDeepLink);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("carousel_android_deep_links"), CarouselAndroidDeepLinks);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("carousel_destination_urls"), CarouselDestinationUrls);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("carousel_ios_deep_links"), CarouselIosDeepLinks);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("click_tracking_url"), ClickTrackingUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("creative_type"), CreativeType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("destination_url"), DestinationUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ios_deep_link"), IosDeepLink);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_pin_deleted"), IsPinDeleted);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_removable"), IsRemovable);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pin_id"), PinId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tracking_urls"), TrackingUrls);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("view_tracking_url"), ViewTrackingUrl);

	return ParseSuccess;
}

}
