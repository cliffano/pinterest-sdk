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

case class IntegrationRequest (
            /* External business ID for the integration. */
                  externalBusinessId: Option[String],
                  connectedMerchantId: Option[String],
                  connectedAdvertiserId: Option[String],
                  connectedLbaId: Option[String],
                  connectedTagId: Option[String],
                  partnerAccessToken: Option[String],
                  partnerRefreshToken: Option[String],
                  partnerPrimaryEmail: Option[String],
                  partnerAccessTokenExpiry: Option[Int],
                  partnerRefreshTokenExpiry: Option[Int],
                  scopes: Option[String],
                  additionalId1: Option[String],
                  partnerMetadata: Option[String]
)

object IntegrationRequest {
implicit val format: Format[IntegrationRequest] = Json.format
}
