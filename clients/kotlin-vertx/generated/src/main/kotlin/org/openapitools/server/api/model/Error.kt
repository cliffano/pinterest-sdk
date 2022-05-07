/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.api.model


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param code 
 * @param message 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class Error (
    @SerializedName("code") private val _code: kotlin.Int?,
    @SerializedName("message") private val _message: kotlin.String?
) {

        val code get() = _code ?: throw IllegalArgumentException("code is required")
                    
        val message get() = _message ?: throw IllegalArgumentException("message is required")
                    
}

