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
package org.openapitools.server.models

import org.openapitools.server.models.PinMediaSourceImagesURLItemsInner

/**
 * Multiple images urls-based media source
 * @param items Array with image objects.
 * @param sourceType 
 * @param index 
 */
data class PinMediaSourceImagesURL(
    /* Array with image objects. */
    val items: kotlin.collections.List<PinMediaSourceImagesURLItemsInner>,
    val sourceType: PinMediaSourceImagesURL.SourceType? = null,
    val index: kotlin.Int? = null
) 
{
    /**
    * 
    * Values: multiple_image_urls
    */
    enum class SourceType(val value: kotlin.String){
        multiple_image_urls("multiple_image_urls");
    }
}
