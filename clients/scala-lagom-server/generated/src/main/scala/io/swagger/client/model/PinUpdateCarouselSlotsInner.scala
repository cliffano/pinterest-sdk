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

case class PinUpdateCarouselSlotsInner (
            /* Carousel Pin slot title. */
                  title: Option[String],
            /* Carousel Pin slot description. */
                  description: Option[String],
            /* Carousel Pin slot link. */
                  link: Option[String]
)

object PinUpdateCarouselSlotsInner {
implicit val format: Format[PinUpdateCarouselSlotsInner] = Json.format
}
