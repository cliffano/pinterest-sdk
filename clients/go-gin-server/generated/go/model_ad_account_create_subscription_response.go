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

type AdAccountCreateSubscriptionResponse struct {

	// Subscription ID.
	Id string `json:"id,omitempty"`

	// Base64 encoded key for client to decrypt lead data.
	CryptographicKey string `json:"cryptographic_key,omitempty"`

	// Lead data encryption algorithm.
	CryptographicAlgorithm string `json:"cryptographic_algorithm,omitempty"`

	// Subscription creation time. Unix timestamp in milliseconds.
	CreatedTime int32 `json:"created_time,omitempty"`
}
