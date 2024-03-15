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

import org.openapitools.server.api.model.CatalogsHotelProductGroupFilterKeys

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param anyOf 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsHotelProductGroupFiltersAnyOf (
    @SerializedName("anyOf") private val _anyOf: kotlin.Array<CatalogsHotelProductGroupFilterKeys>?
) {

        val anyOf get() = _anyOf ?: throw IllegalArgumentException("anyOf is required")
                    
}

