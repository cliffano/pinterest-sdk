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

case class KeywordMetrics (
            /* Average cost per click */
                  avgCpcInMicroCurrency: Option[Number],
            /* Keyword's search frequency. This value is based on keyword frequency in pepsi client response */
                  keywordQueryVolume: Option[String]
)

object KeywordMetrics {
implicit val format: Format[KeywordMetrics] = Json.format
}

