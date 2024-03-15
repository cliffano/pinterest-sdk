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

import org.openapitools.client.models.CatalogsProductGroupCreateRequest
import org.openapitools.client.models.CatalogsProductGroupFiltersRequest
import org.openapitools.client.models.CatalogsVerticalProductGroupCreateRequest

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param name 
 * @param filters 
 * @param feedId Catalog Feed id pertaining to the catalog product group.
 * @param catalogType 
 * @param catalogId Catalog id pertaining to the hotel product group.
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 */


data class CatalogsProductGroupsCreateRequest (

    @Json(name = "name")
    val name: kotlin.String,

    @Json(name = "filters")
    val filters: CatalogsProductGroupFiltersRequest,

    /* Catalog Feed id pertaining to the catalog product group. */
    @Json(name = "feed_id")
    val feedId: kotlin.String,

    @Json(name = "catalog_type")
    override val catalogType: CatalogsProductGroupsCreateRequest.CatalogType,

    /* Catalog id pertaining to the hotel product group. */
    @Json(name = "catalog_id")
    override val catalogId: kotlin.String,

    @Json(name = "description")
    val description: kotlin.String? = null,

    /* boolean indicator of whether the product group is being featured or not */
    @Json(name = "is_featured")
    val isFeatured: kotlin.Boolean? = false

)

