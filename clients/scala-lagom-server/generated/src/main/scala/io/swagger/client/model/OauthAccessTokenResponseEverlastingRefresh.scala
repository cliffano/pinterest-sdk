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

case class OauthAccessTokenResponseEverlastingRefresh (
                  responseType:  Option[OauthAccessTokenResponseEverlastingRefreshResponseTypeEnum.OauthAccessTokenResponseEverlastingRefreshResponseTypeEnum],
                  accessToken: String,
                  tokenType: String,
                  expiresIn: Int,
                  scope: String,
                  refreshToken: String,
                  refreshTokenExpiresIn: Int,
                  refreshTokenExpiresAt: Int
)

object OauthAccessTokenResponseEverlastingRefresh {
implicit val format: Format[OauthAccessTokenResponseEverlastingRefresh] = Json.format
}

object OauthAccessTokenResponseEverlastingRefreshResponseTypeEnum extends Enumeration {
  val   authorization_code, refresh_token = Value
  type OauthAccessTokenResponseEverlastingRefreshResponseTypeEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[OauthAccessTokenResponseEverlastingRefreshResponseTypeEnum.type])
}
