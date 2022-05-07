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

// ItemValidationEvent - Object describing an item validation event
type ItemValidationEvent struct {

	// The attribute that the item validation event references
	Attribute string `json:"attribute,omitempty"`

	// The event code that the item validation event references
	Code int32 `json:"code,omitempty"`

	// Title message describing the item validation event
	Message string `json:"message,omitempty"`
}

// AssertItemValidationEventRequired checks if the required fields are not zero-ed
func AssertItemValidationEventRequired(obj ItemValidationEvent) error {
	return nil
}

// AssertRecurseItemValidationEventRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ItemValidationEvent (e.g. [][]ItemValidationEvent), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseItemValidationEventRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aItemValidationEvent, ok := obj.(ItemValidationEvent)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertItemValidationEventRequired(aItemValidationEvent)
	})
}
