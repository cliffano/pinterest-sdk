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
package org.openapitools.server.models

import org.openapitools.server.models.PinMediaSourceImageBase64
import org.openapitools.server.models.PinMediaSourceImageURL
import org.openapitools.server.models.PinMediaSourceVideoID

/**
 * Pin media source.
 * @param sourceType 
 * @param contentType 
 * @param &#x60;data&#x60; 
 * @param url 
 * @param coverImageUrl 
 * @param mediaId 
 */
data class PinMediaSource (
    val sourceType: PinMediaSource.SourceType,
    val contentType: PinMediaSource.ContentType,
    val `data`: kotlin.String,
    val url: kotlin.String,
    val coverImageUrl: kotlin.String,
    val mediaId: kotlin.String
) 
{
    /**
    * 
    * Values: videoId
    */
    enum class SourceType(val value: kotlin.String){
        videoId("video_id");
    }
    /**
    * 
    * Values: jpeg,png
    */
    enum class ContentType(val value: kotlin.String){
        jpeg("image/jpeg"),
        png("image/png");
    }
}

