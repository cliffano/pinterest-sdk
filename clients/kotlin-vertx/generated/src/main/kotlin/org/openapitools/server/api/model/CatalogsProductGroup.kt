/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.api.model

import org.openapitools.server.api.model.CatalogsProductGroupFilters
import org.openapitools.server.api.model.CatalogsProductGroupStatus
import org.openapitools.server.api.model.CatalogsProductGroupType

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * catalog product group entity
 * @param id ID of the catalog product group.
 * @param filters 
 * @param name Name of catalog product group
 * @param description 
 * @param type 
 * @param status 
 * @param feedId id of the catalogs feed belonging to this catalog product group
 * @param createdAt Unix timestamp in seconds of when catalog product group was created.
 * @param updatedAt Unix timestamp in seconds of last time catalog product group was updated.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsProductGroup (
    /* ID of the catalog product group. */
    @SerializedName("id") private val _id: kotlin.String?,
    @SerializedName("filters") private val _filters: CatalogsProductGroupFilters?,
    /* Name of catalog product group */
    val name: kotlin.String? = null,
    val description: kotlin.String? = null,
    val type: CatalogsProductGroupType? = null,
    val status: CatalogsProductGroupStatus? = null,
    /* id of the catalogs feed belonging to this catalog product group */
    val feedId: kotlin.String? = null,
    /* Unix timestamp in seconds of when catalog product group was created. */
    val createdAt: kotlin.Int? = null,
    /* Unix timestamp in seconds of last time catalog product group was updated. */
    val updatedAt: kotlin.Int? = null
) {

        val id get() = _id ?: throw IllegalArgumentException("id is required")
                    
        val filters get() = _filters ?: throw IllegalArgumentException("filters is required")
                    
}

