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

case class KeywordsCommon (
            /* Keyword custom bid in microcurrency - null if inherited from parent ad group. */
                  bid: Option[Int],
                  matchType: MatchTypeResponse,
            /* Keyword value (120 chars max). */
                  value: String
)

object KeywordsCommon {
implicit val format: Format[KeywordsCommon] = Json.format
}

