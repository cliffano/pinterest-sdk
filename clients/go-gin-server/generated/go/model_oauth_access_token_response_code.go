/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

// OauthAccessTokenResponseCode - A successful OAuth access token response for the authorization code flow.
type OauthAccessTokenResponseCode struct {

	RefreshToken string `json:"refresh_token"`

	RefreshTokenExpiresIn int32 `json:"refresh_token_expires_in"`
}
