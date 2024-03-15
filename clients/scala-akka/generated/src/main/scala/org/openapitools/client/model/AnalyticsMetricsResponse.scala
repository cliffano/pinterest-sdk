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

import java.math.BigDecimal
import org.openapitools.client.core.ApiModel

case class AnalyticsMetricsResponse (
  /* The metric name and value over the requested period for each requested metric */
  summaryMetrics: Option[Map[String, BigDecimal]] = None,
  /* Array with the requested daily metric records */
  dailyMetrics: Option[Seq[AnalyticsDailyMetrics]] = None
) extends ApiModel
