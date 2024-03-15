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
 * @param active True if the offer code is currently active.
 * @param advertiserId Advertiser ID the offer was applied to.
 * @param discountType The type of discount of this credit
 * @param discountInMicroCurrency The discount applied in the offer’s currency value.
 * @param discountCurrency Currency value for the discount.
 * @param title Human readable title of the offer code.
 * @param remainingDiscountInMicroCurrency The credits left to spend.
 */


data class AdsCreditDiscountsResponse (

    /* True if the offer code is currently active. */
    @Json(name = "active")
    val active: kotlin.Boolean? = null,

    /* Advertiser ID the offer was applied to. */
    @Json(name = "advertiser_id")
    val advertiserId: kotlin.String? = null,

    /* The type of discount of this credit */
    @Json(name = "discountType")
    val discountType: AdsCreditDiscountsResponse.DiscountType? = null,

    /* The discount applied in the offer’s currency value. */
    @Json(name = "discountInMicroCurrency")
    val discountInMicroCurrency: java.math.BigDecimal? = null,

    /* Currency value for the discount. */
    @Json(name = "discountCurrency")
    val discountCurrency: kotlin.String? = null,

    /* Human readable title of the offer code. */
    @Json(name = "title")
    val title: kotlin.String? = null,

    /* The credits left to spend. */
    @Json(name = "remainingDiscountInMicroCurrency")
    val remainingDiscountInMicroCurrency: java.math.BigDecimal? = null

) {

    /**
     * The type of discount of this credit
     *
     * Values: COUPON,CREDIT,COUPON_APPLIED,CREDIT_APPLIED,MARKETING_OFFER_CREDIT,MARKETING_OFFER_CREDIT_APPLIED,GOODWILL_CREDIT,GOODWILL_CREDIT_APPLIED,INTERNAL_CREDIT,INTERNAL_CREDIT_APPLIED,PREPAID_CREDIT,PREPAID_CREDIT_APPLIED,SALES_INCENTIVE_CREDIT,SALES_INCENTIVE_CREDIT_APPLIED,CREDIT_EXPIRED,FUTURE_CREDIT,REFERRAL_CREDIT,INVOICE_SALES_INCENTIVE_CREDIT,INVOICE_SALES_INCENTIVE_CREDIT_APPLIED,PREPAID_CREDIT_REFUND,`null`
     */
    @JsonClass(generateAdapter = false)
    enum class DiscountType(val value: kotlin.String) {
        @Json(name = "COUPON") COUPON("COUPON"),
        @Json(name = "CREDIT") CREDIT("CREDIT"),
        @Json(name = "COUPON_APPLIED") COUPON_APPLIED("COUPON_APPLIED"),
        @Json(name = "CREDIT_APPLIED") CREDIT_APPLIED("CREDIT_APPLIED"),
        @Json(name = "MARKETING_OFFER_CREDIT") MARKETING_OFFER_CREDIT("MARKETING_OFFER_CREDIT"),
        @Json(name = "MARKETING_OFFER_CREDIT_APPLIED") MARKETING_OFFER_CREDIT_APPLIED("MARKETING_OFFER_CREDIT_APPLIED"),
        @Json(name = "GOODWILL_CREDIT") GOODWILL_CREDIT("GOODWILL_CREDIT"),
        @Json(name = "GOODWILL_CREDIT_APPLIED") GOODWILL_CREDIT_APPLIED("GOODWILL_CREDIT_APPLIED"),
        @Json(name = "INTERNAL_CREDIT") INTERNAL_CREDIT("INTERNAL_CREDIT"),
        @Json(name = "INTERNAL_CREDIT_APPLIED") INTERNAL_CREDIT_APPLIED("INTERNAL_CREDIT_APPLIED"),
        @Json(name = "PREPAID_CREDIT") PREPAID_CREDIT("PREPAID_CREDIT"),
        @Json(name = "PREPAID_CREDIT_APPLIED") PREPAID_CREDIT_APPLIED("PREPAID_CREDIT_APPLIED"),
        @Json(name = "SALES_INCENTIVE_CREDIT") SALES_INCENTIVE_CREDIT("SALES_INCENTIVE_CREDIT"),
        @Json(name = "SALES_INCENTIVE_CREDIT_APPLIED") SALES_INCENTIVE_CREDIT_APPLIED("SALES_INCENTIVE_CREDIT_APPLIED"),
        @Json(name = "CREDIT_EXPIRED") CREDIT_EXPIRED("CREDIT_EXPIRED"),
        @Json(name = "FUTURE_CREDIT") FUTURE_CREDIT("FUTURE_CREDIT"),
        @Json(name = "REFERRAL_CREDIT") REFERRAL_CREDIT("REFERRAL_CREDIT"),
        @Json(name = "INVOICE_SALES_INCENTIVE_CREDIT") INVOICE_SALES_INCENTIVE_CREDIT("INVOICE_SALES_INCENTIVE_CREDIT"),
        @Json(name = "INVOICE_SALES_INCENTIVE_CREDIT_APPLIED") INVOICE_SALES_INCENTIVE_CREDIT_APPLIED("INVOICE_SALES_INCENTIVE_CREDIT_APPLIED"),
        @Json(name = "PREPAID_CREDIT_REFUND") PREPAID_CREDIT_REFUND("PREPAID_CREDIT_REFUND"),
        @Json(name = "null") `null`("null");
    }
}
