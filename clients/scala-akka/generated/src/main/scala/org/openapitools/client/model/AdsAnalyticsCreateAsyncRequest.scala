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

case class AdsAnalyticsCreateAsyncRequest (
  /* Metric report start date (UTC). Format: YYYY-MM-DD */
  startDate: String,
  /* Metric report end date (UTC). Format: YYYY-MM-DD */
  endDate: String,
  /* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
  granularity: Granularity,
  /* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
  clickWindowDays: Option[ConversionAttributionWindowDays] = None,
  /* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
  engagementWindowDays: Option[ConversionAttributionWindowDays] = None,
  /* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. */
  viewWindowDays: Option[ConversionAttributionWindowDays] = None,
  /* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. */
  conversionReportTime: Option[ConversionReportTimeType] = None,
  /* List of types of attribution for the conversion report */
  attributionTypes: Option[Seq[ConversionReportAttributionType]] = None,
  /* List of campaign ids */
  campaignIds: Option[Seq[String]] = None,
  /* List of status values for filtering */
  campaignStatuses: Option[Seq[CampaignSummaryStatus]] = None,
  /* List of values for filtering. [\"WEB_SESSIONS\"] in BETA. */
  campaignObjectiveTypes: Option[Seq[ObjectiveType]] = None,
  /* List of ad group ids */
  adGroupIds: Option[Seq[String]] = None,
  /* List of values for filtering */
  adGroupStatuses: Option[Seq[AdGroupSummaryStatus]] = None,
  /* List of ad ids [This parameter is no supported for Product Item Level Reports] */
  adIds: Option[Seq[String]] = None,
  /* List of values for filtering [This parameter is not supported for Product Item Level Reports] */
  adStatuses: Option[Seq[PinPromotionSummaryStatus]] = None,
  /* List of product group ids */
  productGroupIds: Option[Seq[String]] = None,
  /* List of values for filtering */
  productGroupStatuses: Option[Seq[ProductGroupSummaryStatus]] = None,
  /* List of product item ids */
  productItemIds: Option[Seq[String]] = None,
  /* List of targeting types. Requires `level` to be a value ending in `_TARGETING`. */
  targetingTypes: Option[Seq[AdsAnalyticsTargetingType]] = None,
  /* List of metrics filters */
  metricsFilters: Option[Seq[AdsAnalyticsMetricsFilter]] = None,
  /* Metric and entity columns. Pin promotion and ad related columns are not supported for the Product Item level reports. */
  columns: Seq[ReportingColumnAsync],
  /* Level of the report */
  level: MetricsReportingLevel,
  /* Specification for formatting the report data. Reports in JSON will not zero-fill metrics, whereas reports in CSV will. Both report formats will omit rows where all the columns are equal to 0. */
  reportFormat: Option[DataOutputFormat] = None
) extends ApiModel

object AdsAnalyticsCreateAsyncRequestEnums {

}
