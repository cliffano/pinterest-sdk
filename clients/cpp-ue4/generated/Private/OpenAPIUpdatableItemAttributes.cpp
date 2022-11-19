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

#include "OpenAPIUpdatableItemAttributes.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIUpdatableItemAttributes::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_link")); WriteJsonValue(Writer, AdLink.GetValue());
	}
	if (Adult.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("adult")); WriteJsonValue(Writer, Adult.GetValue());
	}
	if (AgeGroup.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("age_group")); WriteJsonValue(Writer, AgeGroup.GetValue());
	}
	if (Availability.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("availability")); WriteJsonValue(Writer, Availability.GetValue());
	}
	if (AverageReviewRating.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("average_review_rating")); WriteJsonValue(Writer, AverageReviewRating.GetValue());
	}
	if (Brand.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("brand")); WriteJsonValue(Writer, Brand.GetValue());
	}
	if (CheckoutEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("checkout_enabled")); WriteJsonValue(Writer, CheckoutEnabled.GetValue());
	}
	if (Color.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("color")); WriteJsonValue(Writer, Color.GetValue());
	}
	if (Condition.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("condition")); WriteJsonValue(Writer, Condition.GetValue());
	}
	if (CustomLabel0.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_label_0")); WriteJsonValue(Writer, CustomLabel0.GetValue());
	}
	if (CustomLabel1.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_label_1")); WriteJsonValue(Writer, CustomLabel1.GetValue());
	}
	if (CustomLabel2.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_label_2")); WriteJsonValue(Writer, CustomLabel2.GetValue());
	}
	if (CustomLabel3.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_label_3")); WriteJsonValue(Writer, CustomLabel3.GetValue());
	}
	if (CustomLabel4.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("custom_label_4")); WriteJsonValue(Writer, CustomLabel4.GetValue());
	}
	if (Description.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("description")); WriteJsonValue(Writer, Description.GetValue());
	}
	if (FreeShippingLabel.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("free_shipping_label")); WriteJsonValue(Writer, FreeShippingLabel.GetValue());
	}
	if (FreeShippingLimit.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("free_shipping_limit")); WriteJsonValue(Writer, FreeShippingLimit.GetValue());
	}
	if (Gender.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gender")); WriteJsonValue(Writer, Gender.GetValue());
	}
	if (GoogleProductCategory.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("google_product_category")); WriteJsonValue(Writer, GoogleProductCategory.GetValue());
	}
	if (Gtin.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gtin")); WriteJsonValue(Writer, Gtin.GetValue());
	}
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (ItemGroupId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_group_id")); WriteJsonValue(Writer, ItemGroupId.GetValue());
	}
	if (LastUpdatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("last_updated_time")); WriteJsonValue(Writer, LastUpdatedTime.GetValue());
	}
	if (Link.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("link")); WriteJsonValue(Writer, Link.GetValue());
	}
	if (Material.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("material")); WriteJsonValue(Writer, Material.GetValue());
	}
	if (MinAdPrice.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("min_ad_price")); WriteJsonValue(Writer, MinAdPrice.GetValue());
	}
	if (MobileLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("mobile_link")); WriteJsonValue(Writer, MobileLink.GetValue());
	}
	if (Mpn.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("mpn")); WriteJsonValue(Writer, Mpn.GetValue());
	}
	if (NumberOfRatings.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("number_of_ratings")); WriteJsonValue(Writer, NumberOfRatings.GetValue());
	}
	if (NumberOfReviews.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("number_of_reviews")); WriteJsonValue(Writer, NumberOfReviews.GetValue());
	}
	if (Pattern.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pattern")); WriteJsonValue(Writer, Pattern.GetValue());
	}
	if (Price.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("price")); WriteJsonValue(Writer, Price.GetValue());
	}
	if (ProductType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("product_type")); WriteJsonValue(Writer, ProductType.GetValue());
	}
	if (SalePrice.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("sale_price")); WriteJsonValue(Writer, SalePrice.GetValue());
	}
	if (Shipping.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("shipping")); WriteJsonValue(Writer, Shipping.GetValue());
	}
	if (ShippingHeight.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("shipping_height")); WriteJsonValue(Writer, ShippingHeight.GetValue());
	}
	if (ShippingWeight.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("shipping_weight")); WriteJsonValue(Writer, ShippingWeight.GetValue());
	}
	if (ShippingWidth.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("shipping_width")); WriteJsonValue(Writer, ShippingWidth.GetValue());
	}
	if (Size.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("size")); WriteJsonValue(Writer, Size.GetValue());
	}
	if (SizeSystem.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("size_system")); WriteJsonValue(Writer, SizeSystem.GetValue());
	}
	if (SizeType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("size_type")); WriteJsonValue(Writer, SizeType.GetValue());
	}
	if (Tax.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("tax")); WriteJsonValue(Writer, Tax.GetValue());
	}
	if (Title.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("title")); WriteJsonValue(Writer, Title.GetValue());
	}
	if (VariantNames.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("variant_names")); WriteJsonValue(Writer, VariantNames.GetValue());
	}
	if (VariantValues.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("variant_values")); WriteJsonValue(Writer, VariantValues.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIUpdatableItemAttributes::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_link"), AdLink);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("adult"), Adult);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("age_group"), AgeGroup);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("availability"), Availability);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("average_review_rating"), AverageReviewRating);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("brand"), Brand);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("checkout_enabled"), CheckoutEnabled);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("color"), Color);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("condition"), Condition);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("custom_label_0"), CustomLabel0);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("custom_label_1"), CustomLabel1);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("custom_label_2"), CustomLabel2);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("custom_label_3"), CustomLabel3);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("custom_label_4"), CustomLabel4);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("description"), Description);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("free_shipping_label"), FreeShippingLabel);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("free_shipping_limit"), FreeShippingLimit);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gender"), Gender);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("google_product_category"), GoogleProductCategory);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gtin"), Gtin);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_group_id"), ItemGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("last_updated_time"), LastUpdatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("link"), Link);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("material"), Material);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("min_ad_price"), MinAdPrice);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("mobile_link"), MobileLink);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("mpn"), Mpn);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("number_of_ratings"), NumberOfRatings);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("number_of_reviews"), NumberOfReviews);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pattern"), Pattern);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("price"), Price);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("product_type"), ProductType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("sale_price"), SalePrice);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("shipping"), Shipping);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("shipping_height"), ShippingHeight);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("shipping_weight"), ShippingWeight);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("shipping_width"), ShippingWidth);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("size"), Size);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("size_system"), SizeSystem);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("size_type"), SizeType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tax"), Tax);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("title"), Title);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("variant_names"), VariantNames);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("variant_values"), VariantValues);

	return ParseSuccess;
}

}
