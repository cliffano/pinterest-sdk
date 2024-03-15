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
 * @param AD_LINK_FORMAT_WARNING Some items have ad links that are formatted incorrectly.
 * @param AD_LINK_SAME_AS_LINK Some items have ad link URLs that are duplicates of the link URLs for those items.
 * @param TITLE_LENGTH_TOO_LONG The title for some items were truncated because they contain too many characters.
 * @param DESCRIPTION_LENGTH_TOO_LONG The description for some items were truncated because they contain too many characters.
 * @param GENDER_INVALID Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
 * @param AGE_GROUP_INVALID Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
 * @param SIZE_TYPE_INVALID Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
 * @param SIZE_SYSTEM_INVALID Some items have size system values which are not one of the supported size systems.
 * @param LINK_FORMAT_WARNING Some items have an invalid product link which contains invalid UTM tracking paramaters.
 * @param SALES_PRICE_INVALID Some items have sale price values that are higher than the original price of the item.
 * @param PRODUCT_CATEGORY_DEPTH_WARNING Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences.
 * @param ADWORDS_FORMAT_WARNING Some items have adwords_redirect links that are formatted incorrectly.
 * @param ADWORDS_SAME_AS_LINK Some items have adwords_redirect URLs that are duplicates of the link URLs for those items.
 * @param DUPLICATE_HEADERS Your feed contains duplicate headers.
 * @param FETCH_SAME_SIGNATURE Ingestion completed early because there are no changes to your feed since the last successful update.
 * @param ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG Some items have additional_image_link URLs that contain too many characters, so those items will not be published.
 * @param ADDITIONAL_IMAGE_LINK_WARNING Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items.
 * @param IMAGE_LINK_WARNING Some items have image_link URLs that are formatted incorrectly and will not be published with those items.
 * @param SHIPPING_INVALID Some items have shipping values that are formatted incorrectly.
 * @param TAX_INVALID Some items have tax values that are formatted incorrectly.
 * @param SHIPPING_WEIGHT_INVALID Some items have invalid shipping_weight values.
 * @param EXPIRATION_DATE_INVALID Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date.
 * @param AVAILABILITY_DATE_INVALID Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date.
 * @param SALE_DATE_INVALID Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date.
 * @param WEIGHT_UNIT_INVALID Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit.
 * @param IS_BUNDLE_INVALID Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products.
 * @param UPDATED_TIME_INVALID Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time.
 * @param CUSTOM_LABEL_LENGTH_TOO_LONG Some items have custom_label values that are too long, those items will be published without that custom label.
 * @param PRODUCT_TYPE_LENGTH_TOO_LONG Some items have product_type values that are too long, those items will be published without that product type.
 * @param TOO_MANY_ADDITIONAL_IMAGE_LINKS Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images.
 * @param MULTIPACK_INVALID Some items have invalid multipack values.
 * @param INDEXED_PRODUCT_COUNT_LARGE_DELTA The product count has increased or decreased significantly compared to the last successful ingestion.
 * @param ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE Some items include additional_image_links that can't be found.
 * @param OPTIONAL_PRODUCT_CATEGORY_MISSING Some items are missing a google_product_category.
 * @param OPTIONAL_PRODUCT_CATEGORY_INVALID Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy.
 * @param OPTIONAL_CONDITION_MISSING Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences.
 * @param OPTIONAL_CONDITION_INVALID Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
 * @param IOS_DEEP_LINK_INVALID Some items include invalid ios_deep_link values.
 * @param ANDROID_DEEP_LINK_INVALID Some items include invalid android_deep_link.
 * @param UTM_SOURCE_AUTO_CORRECTED Some items include utm_source values that are formatted incorrectly and have been automatically corrected.
 * @param COUNTRY_DOES_NOT_MAP_TO_CURRENCY Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped.
 * @param MIN_AD_PRICE_INVALID Some items include min_ad_price values that are formatted incorrectly.
 * @param GTIN_INVALID Some items include incorrectly formatted GTINs.
 * @param INCONSISTENT_CURRENCY_VALUES Some items include inconsistent currencies in price fields.
 * @param SALES_PRICE_TOO_LOW Some items include sales price that is much lower than the list price.
 * @param SHIPPING_WIDTH_INVALID Some items include incorrectly formatted shipping_width.
 * @param SHIPPING_HEIGHT_INVALID Some items include incorrectly formatted shipping_height.
 * @param SALES_PRICE_TOO_HIGH Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price.
 * @param MPN_INVALID Some items include incorrectly formatted MPNs.
 */


data class CatalogsFeedValidationWarnings (

    /* Some items have ad links that are formatted incorrectly. */
    @Json(name = "AD_LINK_FORMAT_WARNING")
    val AD_LINK_FORMAT_WARNING: kotlin.Int? = null,

    /* Some items have ad link URLs that are duplicates of the link URLs for those items. */
    @Json(name = "AD_LINK_SAME_AS_LINK")
    val AD_LINK_SAME_AS_LINK: kotlin.Int? = null,

    /* The title for some items were truncated because they contain too many characters. */
    @Json(name = "TITLE_LENGTH_TOO_LONG")
    val TITLE_LENGTH_TOO_LONG: kotlin.Int? = null,

    /* The description for some items were truncated because they contain too many characters. */
    @Json(name = "DESCRIPTION_LENGTH_TOO_LONG")
    val DESCRIPTION_LENGTH_TOO_LONG: kotlin.Int? = null,

    /* Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    @Json(name = "GENDER_INVALID")
    val GENDER_INVALID: kotlin.Int? = null,

    /* Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    @Json(name = "AGE_GROUP_INVALID")
    val AGE_GROUP_INVALID: kotlin.Int? = null,

    /* Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    @Json(name = "SIZE_TYPE_INVALID")
    val SIZE_TYPE_INVALID: kotlin.Int? = null,

    /* Some items have size system values which are not one of the supported size systems. */
    @Json(name = "SIZE_SYSTEM_INVALID")
    val SIZE_SYSTEM_INVALID: kotlin.Int? = null,

    /* Some items have an invalid product link which contains invalid UTM tracking paramaters. */
    @Json(name = "LINK_FORMAT_WARNING")
    val LINK_FORMAT_WARNING: kotlin.Int? = null,

    /* Some items have sale price values that are higher than the original price of the item. */
    @Json(name = "SALES_PRICE_INVALID")
    val SALES_PRICE_INVALID: kotlin.Int? = null,

    /* Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences. */
    @Json(name = "PRODUCT_CATEGORY_DEPTH_WARNING")
    val PRODUCT_CATEGORY_DEPTH_WARNING: kotlin.Int? = null,

    /* Some items have adwords_redirect links that are formatted incorrectly. */
    @Json(name = "ADWORDS_FORMAT_WARNING")
    val ADWORDS_FORMAT_WARNING: kotlin.Int? = null,

    /* Some items have adwords_redirect URLs that are duplicates of the link URLs for those items. */
    @Json(name = "ADWORDS_SAME_AS_LINK")
    val ADWORDS_SAME_AS_LINK: kotlin.Int? = null,

    /* Your feed contains duplicate headers. */
    @Json(name = "DUPLICATE_HEADERS")
    val DUPLICATE_HEADERS: kotlin.Int? = null,

    /* Ingestion completed early because there are no changes to your feed since the last successful update. */
    @Json(name = "FETCH_SAME_SIGNATURE")
    val FETCH_SAME_SIGNATURE: CatalogsFeedValidationWarnings.FETCHSAMESIGNATURE? = null,

    /* Some items have additional_image_link URLs that contain too many characters, so those items will not be published. */
    @Json(name = "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG")
    val ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG: kotlin.Int? = null,

    /* Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items. */
    @Json(name = "ADDITIONAL_IMAGE_LINK_WARNING")
    val ADDITIONAL_IMAGE_LINK_WARNING: kotlin.Int? = null,

    /* Some items have image_link URLs that are formatted incorrectly and will not be published with those items. */
    @Json(name = "IMAGE_LINK_WARNING")
    val IMAGE_LINK_WARNING: kotlin.Int? = null,

    /* Some items have shipping values that are formatted incorrectly. */
    @Json(name = "SHIPPING_INVALID")
    val SHIPPING_INVALID: kotlin.Int? = null,

    /* Some items have tax values that are formatted incorrectly. */
    @Json(name = "TAX_INVALID")
    val TAX_INVALID: kotlin.Int? = null,

    /* Some items have invalid shipping_weight values. */
    @Json(name = "SHIPPING_WEIGHT_INVALID")
    val SHIPPING_WEIGHT_INVALID: kotlin.Int? = null,

    /* Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date. */
    @Json(name = "EXPIRATION_DATE_INVALID")
    val EXPIRATION_DATE_INVALID: kotlin.Int? = null,

    /* Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date. */
    @Json(name = "AVAILABILITY_DATE_INVALID")
    val AVAILABILITY_DATE_INVALID: kotlin.Int? = null,

    /* Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date. */
    @Json(name = "SALE_DATE_INVALID")
    val SALE_DATE_INVALID: kotlin.Int? = null,

    /* Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit. */
    @Json(name = "WEIGHT_UNIT_INVALID")
    val WEIGHT_UNIT_INVALID: kotlin.Int? = null,

    /* Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products. */
    @Json(name = "IS_BUNDLE_INVALID")
    val IS_BUNDLE_INVALID: kotlin.Int? = null,

    /* Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time. */
    @Json(name = "UPDATED_TIME_INVALID")
    val UPDATED_TIME_INVALID: kotlin.Int? = null,

    /* Some items have custom_label values that are too long, those items will be published without that custom label. */
    @Json(name = "CUSTOM_LABEL_LENGTH_TOO_LONG")
    val CUSTOM_LABEL_LENGTH_TOO_LONG: kotlin.Int? = null,

    /* Some items have product_type values that are too long, those items will be published without that product type. */
    @Json(name = "PRODUCT_TYPE_LENGTH_TOO_LONG")
    val PRODUCT_TYPE_LENGTH_TOO_LONG: kotlin.Int? = null,

    /* Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images. */
    @Json(name = "TOO_MANY_ADDITIONAL_IMAGE_LINKS")
    val TOO_MANY_ADDITIONAL_IMAGE_LINKS: kotlin.Int? = null,

    /* Some items have invalid multipack values. */
    @Json(name = "MULTIPACK_INVALID")
    val MULTIPACK_INVALID: kotlin.Int? = null,

    /* The product count has increased or decreased significantly compared to the last successful ingestion. */
    @Json(name = "INDEXED_PRODUCT_COUNT_LARGE_DELTA")
    val INDEXED_PRODUCT_COUNT_LARGE_DELTA: kotlin.Int? = null,

    /* Some items include additional_image_links that can't be found. */
    @Json(name = "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE")
    val ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE: kotlin.Int? = null,

    /* Some items are missing a google_product_category. */
    @Json(name = "OPTIONAL_PRODUCT_CATEGORY_MISSING")
    val OPTIONAL_PRODUCT_CATEGORY_MISSING: kotlin.Int? = null,

    /* Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy. */
    @Json(name = "OPTIONAL_PRODUCT_CATEGORY_INVALID")
    val OPTIONAL_PRODUCT_CATEGORY_INVALID: kotlin.Int? = null,

    /* Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences. */
    @Json(name = "OPTIONAL_CONDITION_MISSING")
    val OPTIONAL_CONDITION_MISSING: kotlin.Int? = null,

    /* Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    @Json(name = "OPTIONAL_CONDITION_INVALID")
    val OPTIONAL_CONDITION_INVALID: kotlin.Int? = null,

    /* Some items include invalid ios_deep_link values. */
    @Json(name = "IOS_DEEP_LINK_INVALID")
    val IOS_DEEP_LINK_INVALID: kotlin.Int? = null,

    /* Some items include invalid android_deep_link. */
    @Json(name = "ANDROID_DEEP_LINK_INVALID")
    val ANDROID_DEEP_LINK_INVALID: kotlin.Int? = null,

    /* Some items include utm_source values that are formatted incorrectly and have been automatically corrected. */
    @Json(name = "UTM_SOURCE_AUTO_CORRECTED")
    val UTM_SOURCE_AUTO_CORRECTED: kotlin.Int? = null,

    /* Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped. */
    @Json(name = "COUNTRY_DOES_NOT_MAP_TO_CURRENCY")
    val COUNTRY_DOES_NOT_MAP_TO_CURRENCY: kotlin.Int? = null,

    /* Some items include min_ad_price values that are formatted incorrectly. */
    @Json(name = "MIN_AD_PRICE_INVALID")
    val MIN_AD_PRICE_INVALID: kotlin.Int? = null,

    /* Some items include incorrectly formatted GTINs. */
    @Json(name = "GTIN_INVALID")
    val GTIN_INVALID: kotlin.Int? = null,

    /* Some items include inconsistent currencies in price fields. */
    @Json(name = "INCONSISTENT_CURRENCY_VALUES")
    val INCONSISTENT_CURRENCY_VALUES: kotlin.Int? = null,

    /* Some items include sales price that is much lower than the list price. */
    @Json(name = "SALES_PRICE_TOO_LOW")
    val SALES_PRICE_TOO_LOW: kotlin.Int? = null,

    /* Some items include incorrectly formatted shipping_width. */
    @Json(name = "SHIPPING_WIDTH_INVALID")
    val SHIPPING_WIDTH_INVALID: kotlin.Int? = null,

    /* Some items include incorrectly formatted shipping_height. */
    @Json(name = "SHIPPING_HEIGHT_INVALID")
    val SHIPPING_HEIGHT_INVALID: kotlin.Int? = null,

    /* Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price. */
    @Json(name = "SALES_PRICE_TOO_HIGH")
    val SALES_PRICE_TOO_HIGH: kotlin.Int? = null,

    /* Some items include incorrectly formatted MPNs. */
    @Json(name = "MPN_INVALID")
    val MPN_INVALID: kotlin.Int? = null

) {

    /**
     * Ingestion completed early because there are no changes to your feed since the last successful update.
     *
     * Values: _1
     */
    @JsonClass(generateAdapter = false)
    enum class FETCHSAMESIGNATURE(val value: kotlin.Int) {
        @Json(name = "1") _1(1);
    }
}

