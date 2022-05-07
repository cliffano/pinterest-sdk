/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model

import org.openapitools.client.model.DataOutputFormat._
import org.openapitools.client.model.MetricsReportingLevel._
import org.openapitools.client.model.ReportingColumnAsync._

case class AdsAnalyticsCreateAsyncRequestAllOf1(
  /* Metric and entity columns */
  columns: Seq[ReportingColumnAsync],
  /* Level of the report */
  level: MetricsReportingLevel,
  /* Specification for formatting report data */
  reportFormat: Option[DataOutputFormat] = None
)

