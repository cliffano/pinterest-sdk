/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models

import org.openapitools.server.models.CatalogsProductGroupFilters
import org.openapitools.server.models.CatalogsProductGroupStatus
import org.openapitools.server.models.CatalogsProductGroupType

/**
 * 
 * @param catalogType 
 * @param id ID of the catalog product group.
 * @param filters 
 * @param feedId 
 * @param name Name of catalog product group
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 * @param type 
 * @param status 
 * @param createdAt Unix timestamp in seconds of when catalog product group was created.
 * @param updatedAt Unix timestamp in seconds of last time catalog product group was updated.
 */
data class CatalogsRetailProductGroup(
    val catalogType: CatalogsRetailProductGroup.CatalogType,
    /* ID of the catalog product group. */
    val id: kotlin.String,
    val filters: CatalogsProductGroupFilters,
    val feedId: CatalogsRetailProductGroup.FeedId,
    /* Name of catalog product group */
    val name: kotlin.String? = null,
    val description: kotlin.String? = null,
    /* boolean indicator of whether the product group is being featured or not */
    val isFeatured: kotlin.Boolean? = null,
    val type: CatalogsProductGroupType? = null,
    val status: CatalogsProductGroupStatus? = null,
    /* Unix timestamp in seconds of when catalog product group was created. */
    val createdAt: kotlin.Int? = null,
    /* Unix timestamp in seconds of last time catalog product group was updated. */
    val updatedAt: kotlin.Int? = null
) 
{
    /**
    * 
    * Values: RETAIL
    */
    enum class CatalogType(val value: kotlin.String){
        RETAIL("RETAIL");
    }
    /**
    * 
    * Values: `null`
    */
    enum class FeedId(val value: kotlin.String){
        `null`("null");
    }
}

