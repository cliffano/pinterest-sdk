package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.time.LocalDate
import java.util.HashMap

import CampaignsAnalyticsResponseInner._

case class CampaignsAnalyticsResponseInner (
  /* The ID of the campaing that this metrics belongs to. */
  CAMPAIGN_ID: String,
/* Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) */
  DATE: Option[LocalDate])

object CampaignsAnalyticsResponseInner {
  import DateTimeCodecs._

  implicit val CampaignsAnalyticsResponseInnerCodecJson: CodecJson[CampaignsAnalyticsResponseInner] = CodecJson.derive[CampaignsAnalyticsResponseInner]
  implicit val CampaignsAnalyticsResponseInnerDecoder: EntityDecoder[CampaignsAnalyticsResponseInner] = jsonOf[CampaignsAnalyticsResponseInner]
  implicit val CampaignsAnalyticsResponseInnerEncoder: EntityEncoder[CampaignsAnalyticsResponseInner] = jsonEncoderOf[CampaignsAnalyticsResponseInner]
}
