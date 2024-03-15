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
 * 
 * @param contentType 
 * @param &#x60;data&#x60; Image to upload as base64 string.
 * @param title 
 * @param description 
 * @param link Destination link for the image.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class PinMediaSourceImagesBase64ItemsInner (
    @SerializedName("contentType") private val _contentType: PinMediaSourceImagesBase64ItemsInner.ContentType?,
    /* Image to upload as base64 string. */
    @SerializedName("`data`") private val _`data`: kotlin.String?,
    val title: kotlin.String? = null,
    val description: kotlin.String? = null,
    /* Destination link for the image. */
    val link: kotlin.String? = null
) {

    /**
    * 
    * Values: jpeg,png
    */
    enum class ContentType(val value: kotlin.String){
    
        jpeg("image/jpeg"),
    
        png("image/png");
    
    }

        val contentType get() = _contentType ?: throw IllegalArgumentException("contentType is required")
                    
        val `data` get() = _`data` ?: throw IllegalArgumentException("`data` is required")
                    
}

