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

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPIItemAttributes
 *
 * 
 */
class OPENAPI_API OpenAPIItemAttributes : public Model
{
public:
    virtual ~OpenAPIItemAttributes() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. */
	TOptional<FString> AdLink;
	/* The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https:// */
	TOptional<TArray<FString>> AdditionalImageLink;
	/* Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. */
	TOptional<bool> Adult;
	/* The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’. */
	TOptional<FString> AgeGroup;
	/* The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’. */
	TOptional<FString> Availability;
	/* Average reviews for the item. Can be a number from 1-5. */
	TOptional<double> AverageReviewRating;
	/* The brand of the product. */
	TOptional<FString> Brand;
	/* The primary color of the product. */
	TOptional<FString> Color;
	/* The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’. */
	TOptional<FString> Condition;
	/* Custom grouping of products. */
	TOptional<FString> CustomLabel0;
	/* Custom grouping of products. */
	TOptional<FString> CustomLabel1;
	/* Custom grouping of products. */
	TOptional<FString> CustomLabel2;
	/* Custom grouping of products. */
	TOptional<FString> CustomLabel3;
	/* Custom grouping of products. */
	TOptional<FString> CustomLabel4;
	/* The description of the product. */
	TOptional<FString> Description;
	/* The item is free to ship. */
	TOptional<bool> FreeShippingLabel;
	/* The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. */
	TOptional<FString> FreeShippingLimit;
	/* The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’. */
	TOptional<FString> Gender;
	/* The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. */
	TOptional<FString> GoogleProductCategory;
	/* The unique universal product identifier. */
	TOptional<int32> Gtin;
	/* The user-created unique ID that represents the product. Only Unicode characters are accepted. */
	TOptional<FString> Id;
	/* The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https:// */
	TOptional<TArray<FString>> ImageLink;
	/* The parent ID of the product. */
	TOptional<FString> ItemGroupId;
	/* The millisecond timestamp when the item was lastly modified by the merchant. */
	TOptional<int64> LastUpdatedTime;
	/* The landing page for the product. */
	TOptional<FString> Link;
	/* The material used to make the product. */
	TOptional<FString> Material;
	/* The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars. */
	TOptional<FString> MinAdPrice;
	/* The mobile-optimized version of your landing page. Must begin with http:// or https://. */
	TOptional<FString> MobileLink;
	/* Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. */
	TOptional<FString> Mpn;
	/* The number of ratings for the item. */
	TOptional<int32> NumberOfRatings;
	/* The number of reviews available for the item. */
	TOptional<int32> NumberOfReviews;
	/* The description of the pattern used for the product. */
	TOptional<FString> Pattern;
	/* The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars. */
	TOptional<FString> Price;
	/* The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe. */
	TOptional<FString> ProductType;
	/* The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars. */
	TOptional<FString> SalePrice;
	/* Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. */
	TOptional<FString> Shipping;
	/* The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
	TOptional<FString> ShippingHeight;
	/* The weight of the product. Ensure there is a space between the numeric string and the metric. */
	TOptional<FString> ShippingWeight;
	/* The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
	TOptional<FString> ShippingWidth;
	/* The size of the product. */
	TOptional<FString> Size;
	/* Indicates the country’s sizing system in which you are submitting your product. */
	TOptional<FString> SizeSystem;
	/* Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’. */
	TOptional<FString> SizeType;
	/* Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. */
	TOptional<FString> Tax;
	/* The name of the product. */
	TOptional<FString> Title;
};

}