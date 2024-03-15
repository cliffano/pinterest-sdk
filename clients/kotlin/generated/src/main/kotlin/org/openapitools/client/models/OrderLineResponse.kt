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

import org.openapitools.client.models.OrderLine
import org.openapitools.client.models.OrderLineError

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param errors Error list if update(s) fail.
 * @param orderLine Order Line object array.
 */


data class OrderLineResponse (

    /* Error list if update(s) fail. */
    @Json(name = "errors")
    val errors: kotlin.collections.List<OrderLineError>? = null,

    /* Order Line object array. */
    @Json(name = "order_line")
    val orderLine: kotlin.collections.List<OrderLine>? = null

)

