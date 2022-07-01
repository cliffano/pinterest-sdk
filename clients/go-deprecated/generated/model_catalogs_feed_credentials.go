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
// CatalogsFeedCredentials Use this if your feed file requires username and password.
type CatalogsFeedCredentials struct {
	// The required password for downloading a feed.
	Password string `json:"password"`
	// The required username for downloading a feed.
	Username string `json:"username"`
}
