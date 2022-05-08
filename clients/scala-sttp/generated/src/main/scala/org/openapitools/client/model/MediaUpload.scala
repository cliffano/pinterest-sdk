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
package org.openapitools.client.model

import org.openapitools.client.model.MediaUploadType._

  /**
   * Media upload
   * Media upload that has been registered but not uploaded/processed yet.
   */
case class MediaUpload(
  /* Unique identifier for this media upload. Used to track status and for attaching during Pin creation. */
  mediaId: Option[String] = None,
  mediaType: Option[MediaUploadType] = None,
  /* The URL where you will POST your media file. */
  uploadUrl: Option[String] = None,
  uploadParameters: Option[MediaUploadAllOfUploadParameters] = None
)
