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
 * @param startDate Starting date of time period. Format: YYYY-MM-DD
 * @param endDate End date of time period. Format: YYYY-MM-DD
 * @param poNumber The po number
 * @param budgetAmount If Budget order line, the budget amount.
 * @param billingContactFirstname The billing contact first name
 * @param billingContactLastname The billing contact last name
 * @param billingContactEmail The billing contact email
 * @param mediaContactFirstname The media contact first name
 * @param mediaContactLastname The media contact last name
 * @param mediaContactEmail The media contact email
 * @param agencyLink URL link for agency
 * @param userEmail The email of user submitting the insertion order
 * @param oracleLineId LineId in the Oracle DB
 * @param salesforceOrderId OrderId in SFDC
 * @param salesforceOrderLineId OrderLineId in SFDC
 * @param adsManagerOrderLineId Ads manager OrderLineId
 */


data class SSIOEditInsertionOrderRequest (

    /* Starting date of time period. Format: YYYY-MM-DD */
    @Json(name = "start_date")
    val startDate: kotlin.String? = null,

    /* End date of time period. Format: YYYY-MM-DD */
    @Json(name = "end_date")
    val endDate: kotlin.String? = null,

    /* The po number */
    @Json(name = "po_number")
    val poNumber: kotlin.String? = null,

    /* If Budget order line, the budget amount. */
    @Json(name = "budget_amount")
    val budgetAmount: java.math.BigDecimal? = null,

    /* The billing contact first name */
    @Json(name = "billing_contact_firstname")
    val billingContactFirstname: kotlin.String? = null,

    /* The billing contact last name */
    @Json(name = "billing_contact_lastname")
    val billingContactLastname: kotlin.String? = null,

    /* The billing contact email */
    @Json(name = "billing_contact_email")
    val billingContactEmail: kotlin.String? = null,

    /* The media contact first name */
    @Json(name = "media_contact_firstname")
    val mediaContactFirstname: kotlin.String? = null,

    /* The media contact last name */
    @Json(name = "media_contact_lastname")
    val mediaContactLastname: kotlin.String? = null,

    /* The media contact email */
    @Json(name = "media_contact_email")
    val mediaContactEmail: kotlin.String? = null,

    /* URL link for agency */
    @Json(name = "agency_link")
    val agencyLink: kotlin.String? = null,

    /* The email of user submitting the insertion order */
    @Json(name = "user_email")
    val userEmail: kotlin.String? = null,

    /* LineId in the Oracle DB */
    @Json(name = "oracle_line_id")
    val oracleLineId: kotlin.String? = null,

    /* OrderId in SFDC */
    @Json(name = "salesforce_order_id")
    val salesforceOrderId: kotlin.String? = null,

    /* OrderLineId in SFDC */
    @Json(name = "salesforce_order_line_id")
    val salesforceOrderLineId: kotlin.String? = null,

    /* Ads manager OrderLineId */
    @Json(name = "ads_manager_order_line_id")
    val adsManagerOrderLineId: kotlin.String? = null

)

