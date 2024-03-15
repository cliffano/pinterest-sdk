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


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * A hotel item to be deleted
 * @param hotelId The catalog hotel id in the merchant namespace
 * @param operation 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsDeleteHotelItem (
    /* The catalog hotel id in the merchant namespace */
    @SerializedName("hotelId") private val _hotelId: kotlin.String?,
    @SerializedName("operation") private val _operation: CatalogsDeleteHotelItem.Operation?
) {

    /**
    * 
    * Values: DELETE
    */
    enum class Operation(val value: kotlin.String){
    
        DELETE("DELETE");
    
    }

        val hotelId get() = _hotelId ?: throw IllegalArgumentException("hotelId is required")
                    
        val operation get() = _operation ?: throw IllegalArgumentException("operation is required")
                    
}

