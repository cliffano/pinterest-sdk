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

import org.openapitools.server.api.model.ImageDetails

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param &#x60;150x150&#x60; 
 * @param &#x60;400x300&#x60; 
 * @param &#x60;600x&#x60; 
 * @param &#x60;1200x&#x60; 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ImageMetadataImages (
    val `150x150`: ImageDetails? = null,
    val `400x300`: ImageDetails? = null,
    val `600x`: ImageDetails? = null,
    val `1200x`: ImageDetails? = null
) {

}

