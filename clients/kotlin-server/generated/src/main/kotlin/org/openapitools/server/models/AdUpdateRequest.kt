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
package org.openapitools.server.models

import org.openapitools.server.models.AdCommonQuizPinData
import org.openapitools.server.models.AdCommonTrackingUrls
import org.openapitools.server.models.CreativeType
import org.openapitools.server.models.EntityStatus
import org.openapitools.server.models.GridClickType

/**
 * 
 * @param id The ID of this ad.
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
 * @param pinId Pin ID. This field may only be updated for draft ads.
 */
data class AdUpdateRequest(
    /* The ID of this ad. */
    val id: kotlin.String,
    /* ID of the ad group that contains the ad. */
    val adGroupId: kotlin.String? = null,
    /* Deep link URL for Android devices. Not currently available. Using this field will generate an error. */
    val androidDeepLink: kotlin.String? = null,
    /* Comma-separated deep links for the carousel pin on Android. */
    val carouselAndroidDeepLinks: kotlin.collections.List<kotlin.String>? = null,
    /* Comma-separated destination URLs for the carousel pin to promote. */
    val carouselDestinationUrls: kotlin.collections.List<kotlin.String>? = null,
    /* Comma-separated deep links for the carousel pin on iOS. */
    val carouselIosDeepLinks: kotlin.collections.List<kotlin.String>? = null,
    /* Tracking url for the ad clicks. */
    val clickTrackingUrl: kotlin.String? = null,
    val creativeType: CreativeType? = null,
    /* Destination URL. */
    val destinationUrl: kotlin.String? = null,
    /* Deep link URL for iOS devices. Not currently available. Using this field will generate an error. */
    val iosDeepLink: kotlin.String? = null,
    /* Is original pin deleted? */
    val isPinDeleted: kotlin.Boolean? = null,
    /* Is pin repinnable? */
    val isRemovable: kotlin.Boolean? = null,
    /* Name of the ad - 255 chars max. */
    val name: kotlin.String? = null,
    val status: EntityStatus? = null,
    val trackingUrls: AdCommonTrackingUrls? = null,
    /* Tracking URL for ad impressions. */
    val viewTrackingUrl: kotlin.String? = null,
    /* Lead form ID for lead ad generation. */
    val leadFormId: kotlin.String? = null,
    val gridClickType: GridClickType? = null,
    /* Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only) */
    val customizableCtaType: AdUpdateRequest.CustomizableCtaType? = null,
    val quizPinData: AdCommonQuizPinData? = null,
    /* Pin ID. This field may only be updated for draft ads. */
    val pinId: kotlin.String? = null
) 
{
    /**
    * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
    * Values: GET_OFFER,LEARN_MORE,ORDER_NOW,SHOP_NOW,SIGN_UP,SUBSCRIBE,BUY_NOW,CONTACT_US,GET_QUOTE,VISIT_WEBSITE,APPLY_NOW,BOOK_NOW,REQUEST_DEMO,REGISTER_NOW,FIND_A_DEALER,ADD_TO_CART,WATCH_NOW,READ_MORE,`null`
    */
    enum class CustomizableCtaType(val value: kotlin.String){
        GET_OFFER("GET_OFFER"),
        LEARN_MORE("LEARN_MORE"),
        ORDER_NOW("ORDER_NOW"),
        SHOP_NOW("SHOP_NOW"),
        SIGN_UP("SIGN_UP"),
        SUBSCRIBE("SUBSCRIBE"),
        BUY_NOW("BUY_NOW"),
        CONTACT_US("CONTACT_US"),
        GET_QUOTE("GET_QUOTE"),
        VISIT_WEBSITE("VISIT_WEBSITE"),
        APPLY_NOW("APPLY_NOW"),
        BOOK_NOW("BOOK_NOW"),
        REQUEST_DEMO("REQUEST_DEMO"),
        REGISTER_NOW("REGISTER_NOW"),
        FIND_A_DEALER("FIND_A_DEALER"),
        ADD_TO_CART("ADD_TO_CART"),
        WATCH_NOW("WATCH_NOW"),
        READ_MORE("READ_MORE"),
        `null`("null");
    }
}

