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

// ItemValidationEvent - Object describing an item validation event
type ItemValidationEvent struct {

	// The attribute that the item validation event references
	Attribute string `json:"attribute,omitempty"`

	// The event code that the item validation event references
	Code int32 `json:"code,omitempty"`

	// Title message describing the item validation event
	Message string `json:"message,omitempty"`
}
