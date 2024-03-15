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

import org.openapitools.client.models.CatalogsProductGroupFilters
import org.openapitools.client.models.CatalogsProductGroupStatus
import org.openapitools.client.models.CatalogsProductGroupType

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * catalog product group entity
 *
 * @param id ID of the catalog product group.
 * @param filters 
 * @param feedId id of the catalogs feed belonging to this catalog product group
 * @param name Name of catalog product group
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 * @param type 
 * @param status 
 * @param createdAt Unix timestamp in seconds of when catalog product group was created.
 * @param updatedAt Unix timestamp in seconds of last time catalog product group was updated.
 * @param catalogType 
 */


data class CatalogsProductGroup (

    /* ID of the catalog product group. */
    @Json(name = "id")
    val id: kotlin.String,

    @Json(name = "filters")
    val filters: CatalogsProductGroupFilters,

    /* id of the catalogs feed belonging to this catalog product group */
    @Json(name = "feed_id")
    val feedId: kotlin.String,

    /* Name of catalog product group */
    @Json(name = "name")
    val name: kotlin.String? = null,

    @Json(name = "description")
    val description: kotlin.String? = null,

    /* boolean indicator of whether the product group is being featured or not */
    @Json(name = "is_featured")
    val isFeatured: kotlin.Boolean? = null,

    @Json(name = "type")
    val type: CatalogsProductGroupType? = null,

    @Json(name = "status")
    val status: CatalogsProductGroupStatus? = null,

    /* Unix timestamp in seconds of when catalog product group was created. */
    @Json(name = "created_at")
    val createdAt: kotlin.Int? = null,

    /* Unix timestamp in seconds of last time catalog product group was updated. */
    @Json(name = "updated_at")
    val updatedAt: kotlin.Int? = null,

    @Json(name = "catalog_type")
    val catalogType: CatalogsProductGroup.CatalogType? = null

) {

    /**
     * 
     *
     * Values: RETAIL
     */
    @JsonClass(generateAdapter = false)
    enum class CatalogType(val value: kotlin.String) {
        @Json(name = "RETAIL") RETAIL("RETAIL");
    }
}

