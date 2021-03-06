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


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Board fields for updates
 * @param name 
 * @param description 
 * @param privacy 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class BoardUpdate (
    val name: kotlin.String? = null,
    val description: kotlin.String? = null,
    val privacy: BoardUpdate.Privacy? = null
) {

    /**
    * 
    * Values: pUBLIC,sECRET
    */
    enum class Privacy(val value: kotlin.String){
    
        pUBLIC("PUBLIC"),
    
        sECRET("SECRET");
    
    }

}

