/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.api.model


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
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
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class UpdatableItemAttributes (
    /* Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. */
    val adLink: kotlin.String? = null,
    /* Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. */
    val adult: kotlin.Boolean? = null,
    /* The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’. */
    val ageGroup: kotlin.String? = null,
    /* The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’. */
    val availability: kotlin.String? = null,
    /* Average reviews for the item. Can be a number from 1-5. */
    val averageReviewRating: java.math.BigDecimal? = null,
    /* The brand of the product. */
    val brand: kotlin.String? = null,
    /* This attribute is not supported anymore. */
    val checkoutEnabled: kotlin.Boolean? = null,
    /* The primary color of the product. */
    val color: kotlin.String? = null,
    /* The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’. */
    val condition: kotlin.String? = null,
    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    val customLabel0: kotlin.String? = null,
    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    val customLabel1: kotlin.String? = null,
    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    val customLabel2: kotlin.String? = null,
    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    val customLabel3: kotlin.String? = null,
    /* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
    val customLabel4: kotlin.String? = null,
    /* <p><= 10000 characters</p> <p>The description of the product.</p> */
    val description: kotlin.String? = null,
    /* The item is free to ship. */
    val freeShippingLabel: kotlin.Boolean? = null,
    /* The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. */
    val freeShippingLimit: kotlin.String? = null,
    /* The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’. */
    val gender: kotlin.String? = null,
    /* The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. */
    val googleProductCategory: kotlin.String? = null,
    /* The unique universal product identifier. */
    val gtin: kotlin.Int? = null,
    /* <p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p> */
    val id: kotlin.String? = null,
    /* <p><= 127 characters</p> <p>The parent ID of the product.</p> */
    val itemGroupId: kotlin.String? = null,
    /* The millisecond timestamp when the item was lastly modified by the merchant. */
    val lastUpdatedTime: kotlin.Long? = null,
    /* <p><= 511 characters</p> <p>The landing page for the product.</p> */
    val link: kotlin.String? = null,
    /* The material used to make the product. */
    val material: kotlin.String? = null,
    /* The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars. */
    val minAdPrice: kotlin.String? = null,
    /* The mobile-optimized version of your landing page. Must begin with http:// or https://. */
    val mobileLink: kotlin.String? = null,
    /* Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. */
    val mpn: kotlin.String? = null,
    /* The number of ratings for the item. */
    val numberOfRatings: kotlin.Int? = null,
    /* The number of reviews available for the item. */
    val numberOfReviews: kotlin.Int? = null,
    /* The description of the pattern used for the product. */
    val pattern: kotlin.String? = null,
    /* The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars. */
    val price: kotlin.String? = null,
    /* <p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p> */
    val productType: kotlin.String? = null,
    /* The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars. */
    val salePrice: kotlin.String? = null,
    /* Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. */
    val shipping: kotlin.String? = null,
    /* The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
    val shippingHeight: kotlin.String? = null,
    /* The weight of the product. Ensure there is a space between the numeric string and the metric. */
    val shippingWeight: kotlin.String? = null,
    /* The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
    val shippingWidth: kotlin.String? = null,
    /* The size of the product. */
    val propertySize: kotlin.String? = null,
    /* Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’. */
    val sizeSystem: kotlin.String? = null,
    /* Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’. */
    val sizeType: kotlin.String? = null,
    /* Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. */
    val tax: kotlin.String? = null,
    /* <p><= 500 characters</p> <p>The name of the product.</p> */
    val title: kotlin.String? = null,
    /* Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. */
    val variantNames: kotlin.Array<kotlin.String>? = null,
    /* Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names. */
    val variantValues: kotlin.Array<kotlin.String>? = null
) {

}

