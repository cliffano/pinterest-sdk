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

import org.openapitools.server.api.model.CatalogsCreateHotelItem
import org.openapitools.server.api.model.CatalogsDeleteHotelItem
import org.openapitools.server.api.model.CatalogsUpdatableHotelAttributes
import org.openapitools.server.api.model.CatalogsUpdateHotelItem
import org.openapitools.server.api.model.CatalogsUpsertHotelItem

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Hotel batch item
 * @param hotelId The catalog hotel id in the merchant namespace
 * @param operation 
 * @param attributes 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsHotelBatchItem (
    /* The catalog hotel id in the merchant namespace */
    @SerializedName("hotelId") private val _hotelId: kotlin.String?,
    @SerializedName("operation") private val _operation: CatalogsHotelBatchItem.Operation?,
    @SerializedName("attributes") private val _attributes: CatalogsUpdatableHotelAttributes?
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
                    
        val attributes get() = _attributes ?: throw IllegalArgumentException("attributes is required")
                    
}

