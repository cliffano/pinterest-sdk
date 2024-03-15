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

import org.openapitools.server.api.model.NonNullableCatalogsCurrency

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * A currency filter. This filter cannot be negated
 * @param propertyValues 
 * @param negated 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsProductGroupCurrencyCriteria (
    @SerializedName("propertyValues") private val _propertyValues: NonNullableCatalogsCurrency?,
    val negated: kotlin.Boolean? = false
) {

        val propertyValues get() = _propertyValues ?: throw IllegalArgumentException("propertyValues is required")
                    
}

