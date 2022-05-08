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

package io.swagger.client.model
import play.api.libs.json._

case class AdAccount (
                  id: Option[String],
                  name: Option[String],
                  owner: Option[AdAccountOwner],
                  country: Option[Country],
                  currency: Option[Currency]
)

object AdAccount {
implicit val format: Format[AdAccount] = Json.format
}
