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

import org.openapitools.client.models.ItemProcessingStatus
import org.openapitools.client.models.ItemValidationEvent

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Object describing an item processing record
 *
 * @param itemId The catalog item id in the merchant namespace
 * @param errors Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
 * @param warnings Array with the validation warnings for the item processing record
 * @param status 
 */


data class ItemProcessingRecord (

    /* The catalog item id in the merchant namespace */
    @Json(name = "item_id")
    val itemId: kotlin.String? = null,

    /* Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail. */
    @Json(name = "errors")
    val errors: kotlin.collections.List<ItemValidationEvent>? = null,

    /* Array with the validation warnings for the item processing record */
    @Json(name = "warnings")
    val warnings: kotlin.collections.List<ItemValidationEvent>? = null,

    @Json(name = "status")
    val status: ItemProcessingStatus? = null

)

