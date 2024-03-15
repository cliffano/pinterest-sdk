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

type TermsOfService struct {

	// The ID of the terms of service
	Id string `json:"id,omitempty"`

	// The terms of service content
	Html *string `json:"html,omitempty"`

	// Whether the ad account has accepted terms of service.
	HasAccepted bool `json:"has_accepted,omitempty"`

	// The ID of the ad account.
	AdAccountId string `json:"ad_account_id,omitempty"`
}