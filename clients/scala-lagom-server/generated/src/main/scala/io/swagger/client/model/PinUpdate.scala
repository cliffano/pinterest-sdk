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

case class PinUpdate (
            /* Pin's alternative text. */
                  altText: Option[String],
            /* The id of the board to move the Pin onto. */
                  boardId: Option[String],
            /* <a href=\"https://help.pinterest.com/en/article/create-a-board-section\">Board section</a> ID. */
                  boardSectionId: Option[String],
            /* Pin description - 800 characters maximum. */
                  description: Option[String],
            /* URL viewer is taken to when they click pin. */
                  link: Option[String],
            /* The native pin title that creators explicitly prefer to display. */
                  title: Option[String],
            /* Carousel Pin slots data. */
                  carouselSlots: Option[Seq[PinUpdateCarouselSlotsInner]],
            /* Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>. */
                  note: Option[String]
)

object PinUpdate {
implicit val format: Format[PinUpdate] = Json.format
}

