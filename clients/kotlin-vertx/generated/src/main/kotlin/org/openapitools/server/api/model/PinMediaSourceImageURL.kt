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
 * Image URL-based media source
 * @param sourceType 
 * @param url 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class PinMediaSourceImageURL (
    @SerializedName("sourceType") private val _sourceType: PinMediaSourceImageURL.SourceType?,
    @SerializedName("url") private val _url: kotlin.String?
) {

    /**
    * 
    * Values: imageUrl
    */
    enum class SourceType(val value: kotlin.String){
    
        imageUrl("image_url");
    
    }

        val sourceType get() = _sourceType ?: throw IllegalArgumentException("sourceType is required")
                    
        val url get() = _url ?: throw IllegalArgumentException("url is required")
                    
}

