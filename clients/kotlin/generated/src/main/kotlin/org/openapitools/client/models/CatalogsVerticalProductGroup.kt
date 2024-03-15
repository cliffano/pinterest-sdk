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

import org.openapitools.client.models.CatalogsHotelProductGroup
import org.openapitools.client.models.CatalogsProductGroupFilters
import org.openapitools.client.models.CatalogsProductGroupStatus
import org.openapitools.client.models.CatalogsProductGroupType
import org.openapitools.client.models.CatalogsRetailProductGroup

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param catalogType 
 * @param id ID of the catalog product group.
 * @param filters 
 * @param catalogId 
 * @param feedId 
 * @param name Name of catalog product group
 * @param description 
 * @param createdAt Unix timestamp in seconds of when catalog product group was created.
 * @param updatedAt Unix timestamp in seconds of last time catalog product group was updated.
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 * @param type 
 * @param status 
 */


interface CatalogsVerticalProductGroup {

    @Json(name = "catalog_type")
    val catalogType: CatalogsVerticalProductGroup.CatalogType
    /* ID of the catalog product group. */
    @Json(name = "id")
    val id: kotlin.String
    @Json(name = "filters")
    val filters: CatalogsProductGroupFilters
    @Json(name = "catalog_id")
    val catalogId: kotlin.String
    @Json(name = "feed_id")
    val feedId: CatalogsVerticalProductGroup.FeedId?
    /* Name of catalog product group */
    @Json(name = "name")
    val name: kotlin.String?
    @Json(name = "description")
    val description: kotlin.String?
    /* Unix timestamp in seconds of when catalog product group was created. */
    @Json(name = "created_at")
    val createdAt: kotlin.Int?
    /* Unix timestamp in seconds of last time catalog product group was updated. */
    @Json(name = "updated_at")
    val updatedAt: kotlin.Int?
    /* boolean indicator of whether the product group is being featured or not */
    @Json(name = "is_featured")
    val isFeatured: kotlin.Boolean?
    @Json(name = "type")
    val type: CatalogsProductGroupType?
    @Json(name = "status")
    val status: CatalogsProductGroupStatus?
    /**
     * 
     *
     * Values: RETAIL
     */
    @JsonClass(generateAdapter = false)
    enum class CatalogType(val value: kotlin.String) {
        @Json(name = "RETAIL") RETAIL("RETAIL");
    }
    /**
     * 
     *
     * Values: `null`
     */
    @JsonClass(generateAdapter = false)
    enum class FeedId(val value: kotlin.String) {
        @Json(name = "null") `null`("null");
    }
}

