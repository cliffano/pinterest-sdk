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
import java.time.LocalDate
import java.util.HashMap

case class CampaignsAnalyticsResponseInner (
            /* The ID of the campaing that this metrics belongs to. */
                  CAMPAIGN_ID: String,
            /* Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) */
                  DATE: Option[LocalDate]
)

object CampaignsAnalyticsResponseInner {
implicit val format: Format[CampaignsAnalyticsResponseInner] = Json.format
}

