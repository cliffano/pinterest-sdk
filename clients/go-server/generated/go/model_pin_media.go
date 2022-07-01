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

// PinMedia - Pin media objects.
type PinMedia struct {

	MediaType string `json:"media_type,omitempty"`
}

// AssertPinMediaRequired checks if the required fields are not zero-ed
func AssertPinMediaRequired(obj PinMedia) error {
	return nil
}

// AssertRecursePinMediaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PinMedia (e.g. [][]PinMedia), otherwise ErrTypeAssertionError is thrown.
func AssertRecursePinMediaRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPinMedia, ok := obj.(PinMedia)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertPinMediaRequired(aPinMedia)
	})
}
