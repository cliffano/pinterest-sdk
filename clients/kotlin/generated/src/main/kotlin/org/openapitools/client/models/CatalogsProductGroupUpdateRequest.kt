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

import org.openapitools.client.models.CatalogsProductGroupFiltersRequest

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Request object for updating a product group.
 *
 * @param name 
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 * @param filters 
 */


data class CatalogsProductGroupUpdateRequest (

    @Json(name = "name")
    val name: kotlin.String? = null,

    @Json(name = "description")
    val description: kotlin.String? = null,

    /* boolean indicator of whether the product group is being featured or not */
    @Json(name = "is_featured")
    val isFeatured: kotlin.Boolean? = null,

    @Json(name = "filters")
    val filters: CatalogsProductGroupFiltersRequest? = null

)
