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


case class OauthAccessTokenResponseRefresh (
  responseType: Option[String] = None,
  accessToken: String,
  tokenType: String,
  expiresIn: Integer,
  scope: String
)
