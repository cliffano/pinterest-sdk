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
 * The field types supported by the update mask
 *
 * Values: ad_link,adult,age_group,availability,average_review_rating,brand,checkout_enabled,color,condition,custom_label_0,custom_label_1,custom_label_2,custom_label_3,custom_label_4,description,free_shipping_label,free_shipping_limit,gender,google_product_category,gtin,item_group_id,last_updated_time,link,material,min_ad_price,mpn,number_of_ratings,number_of_reviews,pattern,price,product_type,sale_price,shipping,shipping_height,shipping_weight,shipping_width,size,size_system,size_type,tax,title,variant_names,variant_values
 */

@JsonClass(generateAdapter = false)
enum class UpdateMaskFieldType(val value: kotlin.String) {

    @Json(name = "ad_link")
    ad_link("ad_link"),

    @Json(name = "adult")
    adult("adult"),

    @Json(name = "age_group")
    age_group("age_group"),

    @Json(name = "availability")
    availability("availability"),

    @Json(name = "average_review_rating")
    average_review_rating("average_review_rating"),

    @Json(name = "brand")
    brand("brand"),

    @Json(name = "checkout_enabled")
    checkout_enabled("checkout_enabled"),

    @Json(name = "color")
    color("color"),

    @Json(name = "condition")
    condition("condition"),

    @Json(name = "custom_label_0")
    custom_label_0("custom_label_0"),

    @Json(name = "custom_label_1")
    custom_label_1("custom_label_1"),

    @Json(name = "custom_label_2")
    custom_label_2("custom_label_2"),

    @Json(name = "custom_label_3")
    custom_label_3("custom_label_3"),

    @Json(name = "custom_label_4")
    custom_label_4("custom_label_4"),

    @Json(name = "description")
    description("description"),

    @Json(name = "free_shipping_label")
    free_shipping_label("free_shipping_label"),

    @Json(name = "free_shipping_limit")
    free_shipping_limit("free_shipping_limit"),

    @Json(name = "gender")
    gender("gender"),

    @Json(name = "google_product_category")
    google_product_category("google_product_category"),

    @Json(name = "gtin")
    gtin("gtin"),

    @Json(name = "item_group_id")
    item_group_id("item_group_id"),

    @Json(name = "last_updated_time")
    last_updated_time("last_updated_time"),

    @Json(name = "link")
    link("link"),

    @Json(name = "material")
    material("material"),

    @Json(name = "min_ad_price")
    min_ad_price("min_ad_price"),

    @Json(name = "mpn")
    mpn("mpn"),

    @Json(name = "number_of_ratings")
    number_of_ratings("number_of_ratings"),

    @Json(name = "number_of_reviews")
    number_of_reviews("number_of_reviews"),

    @Json(name = "pattern")
    pattern("pattern"),

    @Json(name = "price")
    price("price"),

    @Json(name = "product_type")
    product_type("product_type"),

    @Json(name = "sale_price")
    sale_price("sale_price"),

    @Json(name = "shipping")
    shipping("shipping"),

    @Json(name = "shipping_height")
    shipping_height("shipping_height"),

    @Json(name = "shipping_weight")
    shipping_weight("shipping_weight"),

    @Json(name = "shipping_width")
    shipping_width("shipping_width"),

    @Json(name = "size")
    size("size"),

    @Json(name = "size_system")
    size_system("size_system"),

    @Json(name = "size_type")
    size_type("size_type"),

    @Json(name = "tax")
    tax("tax"),

    @Json(name = "title")
    title("title"),

    @Json(name = "variant_names")
    variant_names("variant_names"),

    @Json(name = "variant_values")
    variant_values("variant_values");

    /**
     * Override [toString()] to avoid using the enum variable name as the value, and instead use
     * the actual value defined in the API spec file.
     *
     * This solves a problem when the variable name and its value are different, and ensures that
     * the client sends the correct enum values to the server always.
     */
    override fun toString(): kotlin.String = value

    companion object {
        /**
         * Converts the provided [data] to a [String] on success, null otherwise.
         */
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is UpdateMaskFieldType) "$data" else null

        /**
         * Returns a valid [UpdateMaskFieldType] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): UpdateMaskFieldType? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}
