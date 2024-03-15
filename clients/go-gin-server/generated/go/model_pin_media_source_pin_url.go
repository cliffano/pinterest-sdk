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

// PinMediaSourcePinUrl - Pin URL-based media source for product pin creation. Currently the field is only available to a list of beta users.
type PinMediaSourcePinUrl struct {

	SourceType string `json:"source_type"`

	// This is an affiliate link or sponsored product. The FTC requires disclosure for paid partnerships and affiliate products.
	IsAffiliateLink bool `json:"is_affiliate_link,omitempty"`
}
