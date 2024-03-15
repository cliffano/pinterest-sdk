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
import java.time.OffsetDateTime

case class Board (
                  id: Option[String],
            /* Date and time of board creation. */
                  createdAt: Option[OffsetDateTime],
            /* Date and time of last board pins modified. */
                  boardPinsModifiedAt: Option[OffsetDateTime],
                  name: String,
                  description: Option[String],
            /* Count of collaborators on the board. */
                  collaboratorCount: Option[Int],
            /* Count of pins on the board. */
                  pinCount: Option[Int],
            /* Board follower count. */
                  followerCount: Option[Int],
                  media: Option[BoardMedia],
                  owner: Option[BoardOwner],
                  privacy:  Option[BoardPrivacyEnum.BoardPrivacyEnum]
)

object Board {
implicit val format: Format[Board] = Json.format
}

object BoardPrivacyEnum extends Enumeration {
  val   PUBLIC, PROTECTED, SECRET = Value
  type BoardPrivacyEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[BoardPrivacyEnum.type])
}