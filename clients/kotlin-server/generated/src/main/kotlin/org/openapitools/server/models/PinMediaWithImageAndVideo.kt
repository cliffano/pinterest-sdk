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

import org.openapitools.server.models.PinMedia
import org.openapitools.server.models.PinMediaMetadata

/**
 * Pin with a mix of images and videos.
 * @param items 
 */
data class PinMediaWithImageAndVideo(
    val items: kotlin.collections.List<PinMediaMetadata>? = null,
    val mediaType: kotlin.String? = null
) 

