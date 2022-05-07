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


/**
 * Video ID-based media source
 * @param sourceType 
 * @param coverImageUrl 
 * @param mediaId 
 */
data class PinMediaSourceVideoID(
    val sourceType: PinMediaSourceVideoID.SourceType,
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
}

