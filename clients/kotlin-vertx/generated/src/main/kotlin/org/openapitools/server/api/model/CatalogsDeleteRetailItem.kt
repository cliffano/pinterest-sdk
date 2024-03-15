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
 * An item to be deleted
 * @param itemId The catalog item id in the merchant namespace
 * @param operation 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsDeleteRetailItem (
    /* The catalog item id in the merchant namespace */
    @SerializedName("itemId") private val _itemId: kotlin.String?,
    @SerializedName("operation") private val _operation: CatalogsDeleteRetailItem.Operation?
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
                    
}

