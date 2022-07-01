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

import org.openapitools.server.api.model.MediaUploadAllOfUploadParameters
import org.openapitools.server.api.model.MediaUploadType

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param mediaId Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
 * @param mediaType 
 * @param uploadUrl The URL where you will POST your media file.
 * @param uploadParameters 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class MediaUploadAllOf (
    /* Unique identifier for this media upload. Used to track status and for attaching during Pin creation. */
    val mediaId: kotlin.String? = null,
    val mediaType: MediaUploadType? = null,
    /* The URL where you will POST your media file. */
    val uploadUrl: kotlin.String? = null,
    val uploadParameters: MediaUploadAllOfUploadParameters? = null
) {

}

