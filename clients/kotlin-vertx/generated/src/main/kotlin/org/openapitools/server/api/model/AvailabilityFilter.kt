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

import org.openapitools.server.api.model.CatalogsProductGroupMultipleStringCriteria

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param AVAILABILITY 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class AvailabilityFilter (
    @SerializedName("AVAILABILITY") private val _AVAILABILITY: CatalogsProductGroupMultipleStringCriteria?
) {

        val AVAILABILITY get() = _AVAILABILITY ?: throw IllegalArgumentException("AVAILABILITY is required")
                    
}

