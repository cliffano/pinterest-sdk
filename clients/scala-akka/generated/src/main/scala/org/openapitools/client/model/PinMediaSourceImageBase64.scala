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

case class PinMediaSourceImageBase64 (
  sourceType: PinMediaSourceImageBase64Enums.SourceType,
  contentType: PinMediaSourceImageBase64Enums.ContentType,
  data: String,
  /* Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users. */
  isStandard: Option[Boolean] = None
) extends ApiModel

object PinMediaSourceImageBase64Enums {

  type SourceType = SourceType.Value
  type ContentType = ContentType.Value
  object SourceType extends Enumeration {
    val ImageBase64 = Value("image_base64")
  }

  object ContentType extends Enumeration {
    val ImageJpeg = Value("image/jpeg")
    val ImagePng = Value("image/png")
  }

}