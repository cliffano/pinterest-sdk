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
 * @param display Address display
 * @param purpose Purpose for which the address is used, usually Billing or Businness
 * @param addressId Salesforce id for address
 * @param orderLegalEntity Legal entity for this insertion order
 */


data class SSIOAccountAddress (

    /* Address display */
    @Json(name = "display")
    val display: kotlin.String? = null,

    /* Purpose for which the address is used, usually Billing or Businness */
    @Json(name = "purpose")
    val purpose: kotlin.String? = null,

    /* Salesforce id for address */
    @Json(name = "address_id")
    val addressId: kotlin.String? = null,

    /* Legal entity for this insertion order */
    @Json(name = "order_legal_entity")
    val orderLegalEntity: kotlin.String? = null

)

