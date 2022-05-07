package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AdsAnalyticsCreateAsyncRequest._

case class AdsAnalyticsCreateAsyncRequest (
  /* Metric report start date (UTC). Format: YYYY-MM-DD */
  startDate: String,
/* Metric report end date (UTC). Format: YYYY-MM-DD */
  endDate: String,
/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
  granularity: Granularity,
/* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
  clickWindowDays: Option[ConversionAttributionWindowDays],
/* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
  engagementWindowDays: Option[ConversionAttributionWindowDays],
/* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. */
  viewWindowDays: Option[ConversionAttributionWindowDays],
/* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. */
  conversionReportTime: Option[ConversionReportTimeType],
/* List of types of attribution for the conversion report */
  attributionTypes: Option[List[ConversionReportAttributionType]],
/* Metric and entity columns */
  columns: List[ReportingColumnAsync],
/* Level of the report */
  level: MetricsReportingLevel,
/* Specification for formatting report data */
  reportFormat: Option[DataOutputFormat],
/* List of campaign ids */
  campaignIds: Option[List[String]],
/* List of status values for filtering */
  campaignStatuses: Option[List[CampaignSummaryStatus]],
/* List of values for filtering */
  campaignObjectiveTypes: Option[List[ObjectiveType]],
/* List of ad group ids */
  adGroupIds: Option[List[String]],
/* List of values for filtering */
  adGroupStatuses: Option[List[AdGroupSummaryStatus]],
/* List of ad ids */
  adIds: Option[List[String]],
/* List of values for filtering */
  adStatuses: Option[List[PinPromotionSummaryStatus]],
/* List of product group ids */
  productGroupIds: Option[List[String]],
/* List of values for filtering */
  productGroupStatuses: Option[List[ProductGroupSummaryStatus]],
/* List of product item ids */
  productItemIds: Option[List[String]],
/* List of targeting types */
  targetingTypes: Option[List[AdsAnalyticsTargetingType]],
/* List of metrics filters */
  metricsFilters: Option[List[AdsAnalyticsMetricsFilter]])

object AdsAnalyticsCreateAsyncRequest {
  import DateTimeCodecs._

  implicit val AdsAnalyticsCreateAsyncRequestCodecJson: CodecJson[AdsAnalyticsCreateAsyncRequest] = CodecJson.derive[AdsAnalyticsCreateAsyncRequest]
  implicit val AdsAnalyticsCreateAsyncRequestDecoder: EntityDecoder[AdsAnalyticsCreateAsyncRequest] = jsonOf[AdsAnalyticsCreateAsyncRequest]
  implicit val AdsAnalyticsCreateAsyncRequestEncoder: EntityEncoder[AdsAnalyticsCreateAsyncRequest] = jsonEncoderOf[AdsAnalyticsCreateAsyncRequest]
}
