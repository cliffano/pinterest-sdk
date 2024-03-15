package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.time.OffsetDateTime

import Pin._

case class Pin (
  id: Option[String],
createdAt: Option[OffsetDateTime],
link: Option[String],
title: Option[String],
description: Option[String],
/* Dominant pin color. Hex number, e.g. \\\"#6E7874\\\". */
  dominantColor: Option[String],
altText: Option[String],
creativeType: Option[CreativeType],
/* The board to which this Pin belongs. */
  boardId: Option[String],
/* The board section to which this Pin belongs. */
  boardSectionId: Option[String],
boardOwner: Option[BoardOwner],
/* Whether the \"operation user_account\" is the Pin owner. */
  isOwner: Option[Boolean],
media: Option[SummaryPinMedia],
mediaSource: Option[PinMediaSource],
/* The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>. */
  parentPinId: Option[String],
/* Whether the Pin is standard or not. See documentation on <a href=\"https://developers.pinterest.com/docs/content/update/\">Changes to Pin creation</a> for more information. */
  isStandard: Option[Boolean],
/* Whether the Pin has been promoted or not. */
  hasBeenPromoted: Option[Boolean],
/* Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>. */
  note: Option[String],
/* Pin metrics with associated time intervals if any. */
  pinMetrics: Option[Any])

object Pin {
  import DateTimeCodecs._

  implicit val PinCodecJson: CodecJson[Pin] = CodecJson.derive[Pin]
  implicit val PinDecoder: EntityDecoder[Pin] = jsonOf[Pin]
  implicit val PinEncoder: EntityEncoder[Pin] = jsonEncoderOf[Pin]
}
