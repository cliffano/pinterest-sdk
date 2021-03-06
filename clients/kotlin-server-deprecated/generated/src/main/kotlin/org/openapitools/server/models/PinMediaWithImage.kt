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

import org.openapitools.server.models.ImageDetails
import org.openapitools.server.models.PinMedia
import org.openapitools.server.models.PinMediaWithImageAllOf

/**
 * Pin with image.
 * @param images 
 */
data class PinMediaWithImage (
    val images: kotlin.collections.Map<kotlin.String, ImageDetails>? = null,
    val mediaType: kotlin.String? = null
) 

