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


/**
 * 
 * @param active True if the offer code is currently active.
 * @param advertiserId Advertiser ID the offer was applied to.
 * @param discountType The type of discount of this credit
 * @param discountInMicroCurrency The discount applied in the offer’s currency value.
 * @param discountCurrency Currency value for the discount.
 * @param title Human readable title of the offer code.
 * @param remainingDiscountInMicroCurrency The credits left to spend.
 */
data class AdsCreditDiscountsResponse(
    /* True if the offer code is currently active. */
    val active: kotlin.Boolean? = null,
    /* Advertiser ID the offer was applied to. */
    val advertiserId: kotlin.String? = null,
    /* The type of discount of this credit */
    val discountType: AdsCreditDiscountsResponse.DiscountType? = null,
    /* The discount applied in the offer’s currency value. */
    val discountInMicroCurrency: java.math.BigDecimal? = null,
    /* Currency value for the discount. */
    val discountCurrency: kotlin.String? = null,
    /* Human readable title of the offer code. */
    val title: kotlin.String? = null,
    /* The credits left to spend. */
    val remainingDiscountInMicroCurrency: java.math.BigDecimal? = null
) 
{
    /**
    * The type of discount of this credit
    * Values: COUPON,CREDIT,COUPON_APPLIED,CREDIT_APPLIED,MARKETING_OFFER_CREDIT,MARKETING_OFFER_CREDIT_APPLIED,GOODWILL_CREDIT,GOODWILL_CREDIT_APPLIED,INTERNAL_CREDIT,INTERNAL_CREDIT_APPLIED,PREPAID_CREDIT,PREPAID_CREDIT_APPLIED,SALES_INCENTIVE_CREDIT,SALES_INCENTIVE_CREDIT_APPLIED,CREDIT_EXPIRED,FUTURE_CREDIT,REFERRAL_CREDIT,INVOICE_SALES_INCENTIVE_CREDIT,INVOICE_SALES_INCENTIVE_CREDIT_APPLIED,PREPAID_CREDIT_REFUND,`null`
    */
    enum class DiscountType(val value: kotlin.String){
        COUPON("COUPON"),
        CREDIT("CREDIT"),
        COUPON_APPLIED("COUPON_APPLIED"),
        CREDIT_APPLIED("CREDIT_APPLIED"),
        MARKETING_OFFER_CREDIT("MARKETING_OFFER_CREDIT"),
        MARKETING_OFFER_CREDIT_APPLIED("MARKETING_OFFER_CREDIT_APPLIED"),
        GOODWILL_CREDIT("GOODWILL_CREDIT"),
        GOODWILL_CREDIT_APPLIED("GOODWILL_CREDIT_APPLIED"),
        INTERNAL_CREDIT("INTERNAL_CREDIT"),
        INTERNAL_CREDIT_APPLIED("INTERNAL_CREDIT_APPLIED"),
        PREPAID_CREDIT("PREPAID_CREDIT"),
        PREPAID_CREDIT_APPLIED("PREPAID_CREDIT_APPLIED"),
        SALES_INCENTIVE_CREDIT("SALES_INCENTIVE_CREDIT"),
        SALES_INCENTIVE_CREDIT_APPLIED("SALES_INCENTIVE_CREDIT_APPLIED"),
        CREDIT_EXPIRED("CREDIT_EXPIRED"),
        FUTURE_CREDIT("FUTURE_CREDIT"),
        REFERRAL_CREDIT("REFERRAL_CREDIT"),
        INVOICE_SALES_INCENTIVE_CREDIT("INVOICE_SALES_INCENTIVE_CREDIT"),
        INVOICE_SALES_INCENTIVE_CREDIT_APPLIED("INVOICE_SALES_INCENTIVE_CREDIT_APPLIED"),
        PREPAID_CREDIT_REFUND("PREPAID_CREDIT_REFUND"),
        `null`("null");
    }
}

