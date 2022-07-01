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
 * Base64-encoded image media source
 * @param sourceType 
 * @param contentType 
 * @param &#x60;data&#x60; 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class PinMediaSourceImageBase64 (
    @SerializedName("sourceType") private val _sourceType: PinMediaSourceImageBase64.SourceType?,
    @SerializedName("contentType") private val _contentType: PinMediaSourceImageBase64.ContentType?,
    @SerializedName("`data`") private val _`data`: kotlin.String?
) {

    /**
    * 
    * Values: imageBase64
    */
    enum class SourceType(val value: kotlin.String){
    
        imageBase64("image_base64");
    
    }

    /**
    * 
    * Values: jpeg,png
    */
    enum class ContentType(val value: kotlin.String){
    
        jpeg("image/jpeg"),
    
        png("image/png");
    
    }

        val sourceType get() = _sourceType ?: throw IllegalArgumentException("sourceType is required")
                    
        val contentType get() = _contentType ?: throw IllegalArgumentException("contentType is required")
                    
        val `data` get() = _`data` ?: throw IllegalArgumentException("`data` is required")
                    
}

