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
import org.openapitools.client.models.CatalogsHotelItemResponse
import org.openapitools.client.models.CatalogsRetailItemResponse
import org.openapitools.client.models.CatalogsType
import org.openapitools.client.models.Pin

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param catalogType 
 * @param itemId The catalog retail item id in the merchant namespace
 * @param pins The pins mapped to the item
 * @param attributes 
 * @param hotelId The catalog hotel id in the merchant namespace
 */


interface ItemResponseAnyOf {

    @Json(name = "catalog_type")
    val catalogType: CatalogsType
    /* The catalog retail item id in the merchant namespace */
    @Json(name = "item_id")
    val itemId: kotlin.String?
    /* The pins mapped to the item */
    @Json(name = "pins")
    val pins: kotlin.collections.List<Pin>?
    @Json(name = "attributes")
    val attributes: CatalogsHotelAttributes?
    /* The catalog hotel id in the merchant namespace */
    @Json(name = "hotel_id")
    val hotelId: kotlin.String?
}
