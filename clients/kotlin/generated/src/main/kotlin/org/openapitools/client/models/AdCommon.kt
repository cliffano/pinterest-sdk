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

import org.openapitools.client.models.AdCommonQuizPinData
import org.openapitools.client.models.AdCommonTrackingUrls
import org.openapitools.client.models.CreativeType
import org.openapitools.client.models.EntityStatus
import org.openapitools.client.models.GridClickType

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Creation fields
 *
 * @param adGroupId ID of the ad group that contains the ad.
 * @param androidDeepLink Deep link URL for Android devices. Not currently available. Using this field will generate an error.
 * @param carouselAndroidDeepLinks Comma-separated deep links for the carousel pin on Android.
 * @param carouselDestinationUrls Comma-separated destination URLs for the carousel pin to promote.
 * @param carouselIosDeepLinks Comma-separated deep links for the carousel pin on iOS.
 * @param clickTrackingUrl Tracking url for the ad clicks.
 * @param creativeType 
 * @param destinationUrl Destination URL.
 * @param iosDeepLink Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
 * @param isPinDeleted Is original pin deleted?
 * @param isRemovable Is pin repinnable?
 * @param name Name of the ad - 255 chars max.
 * @param status 
 * @param trackingUrls 
 * @param viewTrackingUrl Tracking URL for ad impressions.
 * @param leadFormId Lead form ID for lead ad generation.
 * @param gridClickType 
 * @param customizableCtaType Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
 * @param quizPinData 
 */


data class AdCommon (

    /* ID of the ad group that contains the ad. */
    @Json(name = "ad_group_id")
    val adGroupId: kotlin.String? = null,

    /* Deep link URL for Android devices. Not currently available. Using this field will generate an error. */
    @Json(name = "android_deep_link")
    val androidDeepLink: kotlin.String? = null,

    /* Comma-separated deep links for the carousel pin on Android. */
    @Json(name = "carousel_android_deep_links")
    val carouselAndroidDeepLinks: kotlin.collections.List<kotlin.String>? = null,

    /* Comma-separated destination URLs for the carousel pin to promote. */
    @Json(name = "carousel_destination_urls")
    val carouselDestinationUrls: kotlin.collections.List<kotlin.String>? = null,

    /* Comma-separated deep links for the carousel pin on iOS. */
    @Json(name = "carousel_ios_deep_links")
    val carouselIosDeepLinks: kotlin.collections.List<kotlin.String>? = null,

    /* Tracking url for the ad clicks. */
    @Json(name = "click_tracking_url")
    val clickTrackingUrl: kotlin.String? = null,

    @Json(name = "creative_type")
    val creativeType: CreativeType? = null,

    /* Destination URL. */
    @Json(name = "destination_url")
    val destinationUrl: kotlin.String? = null,

    /* Deep link URL for iOS devices. Not currently available. Using this field will generate an error. */
    @Json(name = "ios_deep_link")
    val iosDeepLink: kotlin.String? = null,

    /* Is original pin deleted? */
    @Json(name = "is_pin_deleted")
    val isPinDeleted: kotlin.Boolean? = null,

    /* Is pin repinnable? */
    @Json(name = "is_removable")
    val isRemovable: kotlin.Boolean? = null,

    /* Name of the ad - 255 chars max. */
    @Json(name = "name")
    val name: kotlin.String? = null,

    @Json(name = "status")
    val status: EntityStatus? = null,

    @Json(name = "tracking_urls")
    val trackingUrls: AdCommonTrackingUrls? = null,

    /* Tracking URL for ad impressions. */
    @Json(name = "view_tracking_url")
    val viewTrackingUrl: kotlin.String? = null,

    /* Lead form ID for lead ad generation. */
    @Json(name = "lead_form_id")
    val leadFormId: kotlin.String? = null,

    @Json(name = "grid_click_type")
    val gridClickType: GridClickType? = null,

    /* Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only) */
    @Json(name = "customizable_cta_type")
    val customizableCtaType: AdCommon.CustomizableCtaType? = null,

    @Json(name = "quiz_pin_data")
    val quizPinData: AdCommonQuizPinData? = null

) {

    /**
     * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
     *
     * Values: GET_OFFER,LEARN_MORE,ORDER_NOW,SHOP_NOW,SIGN_UP,SUBSCRIBE,BUY_NOW,CONTACT_US,GET_QUOTE,VISIT_WEBSITE,APPLY_NOW,BOOK_NOW,REQUEST_DEMO,REGISTER_NOW,FIND_A_DEALER,ADD_TO_CART,WATCH_NOW,READ_MORE,`null`
     */
    @JsonClass(generateAdapter = false)
    enum class CustomizableCtaType(val value: kotlin.String) {
        @Json(name = "GET_OFFER") GET_OFFER("GET_OFFER"),
        @Json(name = "LEARN_MORE") LEARN_MORE("LEARN_MORE"),
        @Json(name = "ORDER_NOW") ORDER_NOW("ORDER_NOW"),
        @Json(name = "SHOP_NOW") SHOP_NOW("SHOP_NOW"),
        @Json(name = "SIGN_UP") SIGN_UP("SIGN_UP"),
        @Json(name = "SUBSCRIBE") SUBSCRIBE("SUBSCRIBE"),
        @Json(name = "BUY_NOW") BUY_NOW("BUY_NOW"),
        @Json(name = "CONTACT_US") CONTACT_US("CONTACT_US"),
        @Json(name = "GET_QUOTE") GET_QUOTE("GET_QUOTE"),
        @Json(name = "VISIT_WEBSITE") VISIT_WEBSITE("VISIT_WEBSITE"),
        @Json(name = "APPLY_NOW") APPLY_NOW("APPLY_NOW"),
        @Json(name = "BOOK_NOW") BOOK_NOW("BOOK_NOW"),
        @Json(name = "REQUEST_DEMO") REQUEST_DEMO("REQUEST_DEMO"),
        @Json(name = "REGISTER_NOW") REGISTER_NOW("REGISTER_NOW"),
        @Json(name = "FIND_A_DEALER") FIND_A_DEALER("FIND_A_DEALER"),
        @Json(name = "ADD_TO_CART") ADD_TO_CART("ADD_TO_CART"),
        @Json(name = "WATCH_NOW") WATCH_NOW("WATCH_NOW"),
        @Json(name = "READ_MORE") READ_MORE("READ_MORE"),
        @Json(name = "null") `null`("null");
    }
}

