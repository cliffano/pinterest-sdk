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

import org.openapitools.client.models.CatalogsHotelAttributes

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * A hotel item to be created.
 *
 * @param hotelId The catalog hotel id in the merchant namespace
 * @param operation 
 * @param attributes 
 */


data class CatalogsCreateHotelItem (

    /* The catalog hotel id in the merchant namespace */
    @Json(name = "hotel_id")
    val hotelId: kotlin.String,

    @Json(name = "operation")
    val operation: CatalogsCreateHotelItem.Operation,

    @Json(name = "attributes")
    val attributes: CatalogsHotelAttributes

) {

    /**
     * 
     *
     * Values: CREATE
     */
    @JsonClass(generateAdapter = false)
    enum class Operation(val value: kotlin.String) {
        @Json(name = "CREATE") CREATE("CREATE");
    }
}

