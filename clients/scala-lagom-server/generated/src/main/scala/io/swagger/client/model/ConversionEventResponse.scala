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

case class ConversionEventResponse (
                  conversionEvent: Option[ConversionTagType],
            /* Id of the tag. */
                  conversionTagId: Option[String],
            /* Id of the ad account. */
                  adAccountId: Option[String],
            /* Creation date in epoch format. */
                  createdTime: Option[Int]
)

object ConversionEventResponse {
implicit val format: Format[ConversionEventResponse] = Json.format
}

