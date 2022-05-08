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

import org.openapitools.client.core.ApiModel

case class PinMediaSourceVideoID (
  sourceType: PinMediaSourceVideoIDEnums.SourceType,
  coverImageUrl: String,
  mediaId: String
) extends ApiModel

object PinMediaSourceVideoIDEnums {

  type SourceType = SourceType.Value
  object SourceType extends Enumeration {
    val VideoId = Value("video_id")
  }

}