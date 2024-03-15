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
package org.openapitools.client.model

import java.math.BigDecimal
import org.openapitools.client.core.ApiModel

case class AdsCreditDiscountsResponse (
  /* True if the offer code is currently active. */
  active: Option[Boolean] = None,
  /* Advertiser ID the offer was applied to. */
  advertiserId: Option[String] = None,
  /* The type of discount of this credit */
  discountType: Option[AdsCreditDiscountsResponseEnums.DiscountType] = None,
  /* The discount applied in the offer’s currency value. */
  discountInMicroCurrency: Option[BigDecimal] = None,
  /* Currency value for the discount. */
  discountCurrency: Option[String] = None,
  /* Human readable title of the offer code. */
  title: Option[String] = None,
  /* The credits left to spend. */
  remainingDiscountInMicroCurrency: Option[BigDecimal] = None
) extends ApiModel

object AdsCreditDiscountsResponseEnums {

  type DiscountType = DiscountType.Value
  object DiscountType extends Enumeration {
    val COUPON = Value("COUPON")
    val CREDIT = Value("CREDIT")
    val COUPONAPPLIED = Value("COUPON_APPLIED")
    val CREDITAPPLIED = Value("CREDIT_APPLIED")
    val MARKETINGOFFERCREDIT = Value("MARKETING_OFFER_CREDIT")
    val MARKETINGOFFERCREDITAPPLIED = Value("MARKETING_OFFER_CREDIT_APPLIED")
    val GOODWILLCREDIT = Value("GOODWILL_CREDIT")
    val GOODWILLCREDITAPPLIED = Value("GOODWILL_CREDIT_APPLIED")
    val INTERNALCREDIT = Value("INTERNAL_CREDIT")
    val INTERNALCREDITAPPLIED = Value("INTERNAL_CREDIT_APPLIED")
    val PREPAIDCREDIT = Value("PREPAID_CREDIT")
    val PREPAIDCREDITAPPLIED = Value("PREPAID_CREDIT_APPLIED")
    val SALESINCENTIVECREDIT = Value("SALES_INCENTIVE_CREDIT")
    val SALESINCENTIVECREDITAPPLIED = Value("SALES_INCENTIVE_CREDIT_APPLIED")
    val CREDITEXPIRED = Value("CREDIT_EXPIRED")
    val FUTURECREDIT = Value("FUTURE_CREDIT")
    val REFERRALCREDIT = Value("REFERRAL_CREDIT")
    val INVOICESALESINCENTIVECREDIT = Value("INVOICE_SALES_INCENTIVE_CREDIT")
    val INVOICESALESINCENTIVECREDITAPPLIED = Value("INVOICE_SALES_INCENTIVE_CREDIT_APPLIED")
    val PREPAIDCREDITREFUND = Value("PREPAID_CREDIT_REFUND")
    val `Null` = Value("null")
  }

}
