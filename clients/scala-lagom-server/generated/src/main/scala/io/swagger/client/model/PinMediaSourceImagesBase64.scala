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

package io.swagger.client.model
import play.api.libs.json._

case class PinMediaSourceImagesBase64 (
                  sourceType:  Option[PinMediaSourceImagesBase64SourceTypeEnum.PinMediaSourceImagesBase64SourceTypeEnum],
            /* Array with image objects. */
                  items: Seq[PinMediaSourceImagesBase64ItemsInner],
                  index: Option[Int]
)

object PinMediaSourceImagesBase64 {
implicit val format: Format[PinMediaSourceImagesBase64] = Json.format
}

object PinMediaSourceImagesBase64SourceTypeEnum extends Enumeration {
  val   multiple_image_base64 = Value
  type PinMediaSourceImagesBase64SourceTypeEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[PinMediaSourceImagesBase64SourceTypeEnum.type])
}
