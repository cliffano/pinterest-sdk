/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models


import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param adLink Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
 * @param adult Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest.
 * @param ageGroup The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’.
 * @param availability The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’.
 * @param averageReviewRating Average reviews for the item. Can be a number from 1-5.
 * @param brand The brand of the product.
 * @param checkoutEnabled This attribute is not supported anymore.
 * @param color The primary color of the product.
 * @param condition The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’.
 * @param customLabel0 <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @param customLabel1 <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @param customLabel2 <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @param customLabel3 <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @param customLabel4 <p><= 1000 characters</p> <p>Custom grouping of products.</p>
 * @param description <p><= 10000 characters</p> <p>The description of the product.</p>
 * @param freeShippingLabel The item is free to ship.
 * @param freeShippingLimit The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
 * @param gender The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’.
 * @param googleProductCategory The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
 * @param gtin The unique universal product identifier.
 * @param id <p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p>
 * @param itemGroupId <p><= 127 characters</p> <p>The parent ID of the product.</p>
 * @param lastUpdatedTime The millisecond timestamp when the item was lastly modified by the merchant.
 * @param link <p><= 511 characters</p> <p>The landing page for the product.</p>
 * @param material The material used to make the product.
 * @param minAdPrice The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars.
 * @param mobileLink The mobile-optimized version of your landing page. Must begin with http:// or https://.
 * @param mpn Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
 * @param numberOfRatings The number of ratings for the item.
 * @param numberOfReviews The number of reviews available for the item.
 * @param pattern The description of the pattern used for the product.
 * @param price The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars.
 * @param productType <p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p>
 * @param salePrice The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars.
 * @param shipping Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
 * @param shippingHeight The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
 * @param shippingWeight The weight of the product. Ensure there is a space between the numeric string and the metric.
 * @param shippingWidth The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
 * @param propertySize The size of the product.
 * @param sizeSystem Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’.
 * @param sizeType Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’.
 * @param tax Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
 * @param title <p><= 500 characters</p> <p>The name of the product.</p>
 * @param variantNames Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed.
 * @param variantValues Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names.
 */


data class UpdatableItemAttributes (

    /* Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. */
    @Json(name = "ad_link")
    val adLink: kotlin.String? = null,

    /* Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. */
    @Json(name = "adult")
    val adult: kotlin.Boolean? = null,

    /* The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’. */
    @Json(name = "age_group")
    val ageGroup: kotlin.String? = null,

    /* The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’. */
    @Json(name = "availability")
    val availability: kotlin.String? = null,

    /* Average reviews for the item. Can be a number from 1-5. */
    @Json(name = "average_review_rating")
    val averageReviewRating: java.math.BigDecimal? = null,

    /* The brand of the product. */
    @Json(name = "brand")
    val brand: kotlin.String? = null,

    /* This attribute is not supported anymore. */
    @Json(name = "checkout_enabled")
    @Deprecated(message = "This property is deprecated.")
    val checkoutEnabled: kotlin.Boolean? = null,

    /* The primary color of the product. */
    @Json(name = "color")
    val color: kotlin.String? = null,

    /* The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’. */
    @Json(name = "condition")
    val condition: kotlin.String? = null,

    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    @Json(name = "custom_label_0")
    val customLabel0: kotlin.String? = null,

    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    @Json(name = "custom_label_1")
    val customLabel1: kotlin.String? = null,

    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    @Json(name = "custom_label_2")
    val customLabel2: kotlin.String? = null,

    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    @Json(name = "custom_label_3")
    val customLabel3: kotlin.String? = null,

    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    @Json(name = "custom_label_4")
    val customLabel4: kotlin.String? = null,

    /* <p><= 10000 characters</p> <p>The description of the product.</p> */
    @Json(name = "description")
    val description: kotlin.String? = null,

    /* The item is free to ship. */
    @Json(name = "free_shipping_label")
    val freeShippingLabel: kotlin.Boolean? = null,

    /* The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. */
    @Json(name = "free_shipping_limit")
    val freeShippingLimit: kotlin.String? = null,

    /* The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’. */
    @Json(name = "gender")
    val gender: kotlin.String? = null,

    /* The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. */
    @Json(name = "google_product_category")
    val googleProductCategory: kotlin.String? = null,

    /* The unique universal product identifier. */
    @Json(name = "gtin")
    val gtin: kotlin.Int? = null,

    /* <p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p> */
    @Json(name = "id")
    @Deprecated(message = "This property is deprecated.")
    val id: kotlin.String? = null,

    /* <p><= 127 characters</p> <p>The parent ID of the product.</p> */
    @Json(name = "item_group_id")
    val itemGroupId: kotlin.String? = null,

    /* The millisecond timestamp when the item was lastly modified by the merchant. */
    @Json(name = "last_updated_time")
    val lastUpdatedTime: kotlin.Long? = null,

    /* <p><= 511 characters</p> <p>The landing page for the product.</p> */
    @Json(name = "link")
    val link: kotlin.String? = null,

    /* The material used to make the product. */
    @Json(name = "material")
    val material: kotlin.String? = null,

    /* The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars. */
    @Json(name = "min_ad_price")
    val minAdPrice: kotlin.String? = null,

    /* The mobile-optimized version of your landing page. Must begin with http:// or https://. */
    @Json(name = "mobile_link")
    val mobileLink: kotlin.String? = null,

    /* Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. */
    @Json(name = "mpn")
    val mpn: kotlin.String? = null,

    /* The number of ratings for the item. */
    @Json(name = "number_of_ratings")
    val numberOfRatings: kotlin.Int? = null,

    /* The number of reviews available for the item. */
    @Json(name = "number_of_reviews")
    val numberOfReviews: kotlin.Int? = null,

    /* The description of the pattern used for the product. */
    @Json(name = "pattern")
    val pattern: kotlin.String? = null,

    /* The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars. */
    @Json(name = "price")
    val price: kotlin.String? = null,

    /* <p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p> */
    @Json(name = "product_type")
    val productType: kotlin.String? = null,

    /* The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars. */
    @Json(name = "sale_price")
    val salePrice: kotlin.String? = null,

    /* Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. */
    @Json(name = "shipping")
    val shipping: kotlin.String? = null,

    /* The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
    @Json(name = "shipping_height")
    val shippingHeight: kotlin.String? = null,

    /* The weight of the product. Ensure there is a space between the numeric string and the metric. */
    @Json(name = "shipping_weight")
    val shippingWeight: kotlin.String? = null,

    /* The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
    @Json(name = "shipping_width")
    val shippingWidth: kotlin.String? = null,

    /* The size of the product. */
    @Json(name = "size")
    val propertySize: kotlin.String? = null,

    /* Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’. */
    @Json(name = "size_system")
    val sizeSystem: kotlin.String? = null,

    /* Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’. */
    @Json(name = "size_type")
    val sizeType: kotlin.String? = null,

    /* Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. */
    @Json(name = "tax")
    val tax: kotlin.String? = null,

    /* <p><= 500 characters</p> <p>The name of the product.</p> */
    @Json(name = "title")
    val title: kotlin.String? = null,

    /* Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. */
    @Json(name = "variant_names")
    val variantNames: kotlin.collections.List<kotlin.String>? = null,

    /* Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names. */
    @Json(name = "variant_values")
    val variantValues: kotlin.collections.List<kotlin.String>? = null

)
