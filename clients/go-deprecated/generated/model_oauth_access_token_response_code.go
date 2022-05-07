/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// OauthAccessTokenResponseCode A successful OAuth access token response for the authorization code flow.
type OauthAccessTokenResponseCode struct {
	ResponseType string `json:"response_type,omitempty"`
	AccessToken string `json:"access_token"`
	TokenType string `json:"token_type"`
	ExpiresIn int32 `json:"expires_in"`
	Scope string `json:"scope"`
	RefreshToken string `json:"refresh_token"`
	RefreshTokenExpiresIn int32 `json:"refresh_token_expires_in"`
}
