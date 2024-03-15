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
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class MediaUpload (
  /* Unique identifier for this media upload. Used to track status and for attaching during Pin creation. */
  mediaId: Option[String] = None,
  mediaType: Option[MediaUploadType] = None,
  /* The URL where you will POST your media file. */
  uploadUrl: Option[String] = None,
  uploadParameters: Option[MediaUploadAllOfUploadParameters] = None
) extends ApiModel

object MediaUploadEnums {

}
