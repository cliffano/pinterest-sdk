package org.openapitools.server.model


/**
 * = refresh_token =
 *
 * A request to exchange a refresh token for a new access token.
 *
 * @param grantType  for example: ''null''
 * @param refreshToken  for example: ''null''
 * @param scope  for example: ''null''
 * @param refreshOn Setting this field to <code>true</code> will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to \"everlasting_refresh\". for example: ''null''
*/
final case class OauthAccessTokenRequestRefresh (
  grantType: String,
  refreshToken: String,
  scope: Option[String] = None,
  refreshOn: Option[Boolean] = None
)

