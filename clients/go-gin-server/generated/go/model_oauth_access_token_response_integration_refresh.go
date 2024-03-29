/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

// OauthAccessTokenResponseIntegrationRefresh - A successful OAuth access token response for the refresh token flow, with an added refresh token.
type OauthAccessTokenResponseIntegrationRefresh struct {

	RefreshToken string `json:"refresh_token"`

	RefreshTokenExpiresIn int32 `json:"refresh_token_expires_in"`
}
