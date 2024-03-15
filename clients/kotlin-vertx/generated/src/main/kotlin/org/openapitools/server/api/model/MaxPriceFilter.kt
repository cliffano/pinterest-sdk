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

import org.openapitools.server.api.model.CatalogsProductGroupPricingCriteria

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param MAX_PRICE 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class MaxPriceFilter (
    @SerializedName("MAX_PRICE") private val _MAX_PRICE: CatalogsProductGroupPricingCriteria?
) {

        val MAX_PRICE get() = _MAX_PRICE ?: throw IllegalArgumentException("MAX_PRICE is required")
                    
}

