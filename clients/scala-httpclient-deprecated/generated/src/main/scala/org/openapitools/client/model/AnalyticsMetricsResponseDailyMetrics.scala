/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model


case class AnalyticsMetricsResponseDailyMetrics (
  // Metrics availablity, e.g., \"READY\".
  dataStatus: Option[String] = None,
  // Metrics date (UTC): YYYY-MM-DD.
  date: Option[String] = None,
  // The metric name and daily value for each requested metric
  metrics: Option[Map[String, Number]] = None
)

