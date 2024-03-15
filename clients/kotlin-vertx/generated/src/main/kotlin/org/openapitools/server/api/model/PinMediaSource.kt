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

import org.openapitools.server.api.model.PinMediaSourceImageBase64
import org.openapitools.server.api.model.PinMediaSourceImageURL
import org.openapitools.server.api.model.PinMediaSourceImagesBase64
import org.openapitools.server.api.model.PinMediaSourceImagesURL
import org.openapitools.server.api.model.PinMediaSourceImagesURLItemsInner
import org.openapitools.server.api.model.PinMediaSourcePinURL
import org.openapitools.server.api.model.PinMediaSourceVideoID

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Pin media source.
 * @param sourceType 
 * @param contentType 
 * @param &#x60;data&#x60; 
 * @param url 
 * @param mediaId 
 * @param items Array with image objects.
 * @param isStandard Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
 * @param coverImageUrl Cover image url.
 * @param coverImageContentType Content type for cover image Base64.
 * @param coverImageData Cover image Base64.
 * @param index 
 * @param isAffiliateLink This is an affiliate link or sponsored product. The FTC requires disclosure for paid partnerships and affiliate products.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class PinMediaSource (
    @SerializedName("sourceType") private val _sourceType: PinMediaSource.SourceType?,
    @SerializedName("contentType") private val _contentType: PinMediaSource.ContentType?,
    @SerializedName("`data`") private val _`data`: kotlin.String?,
    @SerializedName("url") private val _url: kotlin.String?,
    @SerializedName("mediaId") private val _mediaId: kotlin.String?,
    /* Array with image objects. */
    @SerializedName("items") private val _items: kotlin.Array<PinMediaSourceImagesURLItemsInner>?,
    /* Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users. */
    val isStandard: kotlin.Boolean? = true,
    /* Cover image url. */
    val coverImageUrl: kotlin.String? = null,
    /* Content type for cover image Base64. */
    val coverImageContentType: PinMediaSource.CoverImageContentType? = null,
    /* Cover image Base64. */
    val coverImageData: kotlin.String? = null,
    val index: kotlin.Int? = null,
    /* This is an affiliate link or sponsored product. The FTC requires disclosure for paid partnerships and affiliate products. */
    val isAffiliateLink: kotlin.Boolean? = false
) {

    /**
    * 
    * Values: pin_url
    */
    enum class SourceType(val value: kotlin.String){
    
        pin_url("pin_url");
    
    }

    /**
    * 
    * Values: jpeg,png
    */
    enum class ContentType(val value: kotlin.String){
    
        jpeg("image/jpeg"),
    
        png("image/png");
    
    }

    /**
    * Content type for cover image Base64.
    * Values: jpeg,png
    */
    enum class CoverImageContentType(val value: kotlin.String){
    
        jpeg("image/jpeg"),
    
        png("image/png");
    
    }

        val sourceType get() = _sourceType ?: throw IllegalArgumentException("sourceType is required")
                    
        val contentType get() = _contentType ?: throw IllegalArgumentException("contentType is required")
                    
        val `data` get() = _`data` ?: throw IllegalArgumentException("`data` is required")
                    
        val url get() = _url ?: throw IllegalArgumentException("url is required")
                    
        val mediaId get() = _mediaId ?: throw IllegalArgumentException("mediaId is required")
                    
        val items get() = _items ?: throw IllegalArgumentException("items is required")
                    
}

