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
// AdAccount struct for AdAccount
type AdAccount struct {
	Id string `json:"id,omitempty"`
	Name string `json:"name,omitempty"`
	Owner AdAccountOwner `json:"owner,omitempty"`
	Country Country `json:"country,omitempty"`
	Currency Currency `json:"currency,omitempty"`
}
