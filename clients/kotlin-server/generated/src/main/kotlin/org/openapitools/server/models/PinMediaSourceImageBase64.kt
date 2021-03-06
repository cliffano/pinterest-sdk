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
package org.openapitools.server.models


/**
 * Base64-encoded image media source
 * @param sourceType 
 * @param contentType 
 * @param &#x60;data&#x60; 
 */
data class PinMediaSourceImageBase64(
    val sourceType: PinMediaSourceImageBase64.SourceType,
    val contentType: PinMediaSourceImageBase64.ContentType,
    val `data`: kotlin.String
) 
{
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
}

