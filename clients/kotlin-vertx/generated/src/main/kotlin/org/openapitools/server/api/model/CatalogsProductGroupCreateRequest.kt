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
package org.openapitools.server.api.model

import org.openapitools.server.api.model.CatalogsProductGroupFiltersRequest

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Request object for creating a product group.
 * @param name 
 * @param filters 
 * @param feedId Catalog Feed id pertaining to the catalog product group.
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsProductGroupCreateRequest (
    @SerializedName("name") private val _name: kotlin.String?,
    @SerializedName("filters") private val _filters: CatalogsProductGroupFiltersRequest?,
    /* Catalog Feed id pertaining to the catalog product group. */
    @SerializedName("feedId") private val _feedId: kotlin.String?,
    val description: kotlin.String? = null,
    /* boolean indicator of whether the product group is being featured or not */
    val isFeatured: kotlin.Boolean? = false
) {

        val name get() = _name ?: throw IllegalArgumentException("name is required")
                    
        val filters get() = _filters ?: throw IllegalArgumentException("filters is required")
                    
        val feedId get() = _feedId ?: throw IllegalArgumentException("feedId is required")
                    
}
