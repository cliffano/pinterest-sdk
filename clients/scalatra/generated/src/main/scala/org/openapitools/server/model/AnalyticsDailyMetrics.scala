/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class AnalyticsDailyMetrics(
  dataStatus: Option[DataStatus],

  /* Metrics date (UTC): YYYY-MM-DD. */
  date: Option[String],

  /* The metric name and daily value for each requested metric */
  metrics: Option[Map[String, Double]]

 )
