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

case class AnalyticsDailyMetrics (
                  dataStatus: Option[DataStatus],
            /* Metrics date (UTC): YYYY-MM-DD. */
                  date: Option[String],
            /* The metric name and daily value for each requested metric */
                  metrics: Option[Map[String, Number]]
)

object AnalyticsDailyMetrics {
implicit val format: Format[AnalyticsDailyMetrics] = Json.format
}

