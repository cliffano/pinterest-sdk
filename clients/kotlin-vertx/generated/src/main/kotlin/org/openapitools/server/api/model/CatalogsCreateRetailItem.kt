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

import org.openapitools.server.api.model.ItemAttributes

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * An item to be created
 * @param itemId The catalog item id in the merchant namespace
 * @param operation 
 * @param attributes 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsCreateRetailItem (
    /* The catalog item id in the merchant namespace */
    @SerializedName("itemId") private val _itemId: kotlin.String?,
    @SerializedName("operation") private val _operation: CatalogsCreateRetailItem.Operation?,
    @SerializedName("attributes") private val _attributes: ItemAttributes?
) {

    /**
    * 
    * Values: CREATE,UPDATE,UPSERT,DELETE
    */
    enum class Operation(val value: kotlin.String){
    
        CREATE("CREATE"),
    
        UPDATE("UPDATE"),
    
        UPSERT("UPSERT"),
    
        DELETE("DELETE");
    
    }

        val itemId get() = _itemId ?: throw IllegalArgumentException("itemId is required")
                    
        val operation get() = _operation ?: throw IllegalArgumentException("operation is required")
                    
        val attributes get() = _attributes ?: throw IllegalArgumentException("attributes is required")
                    
}
