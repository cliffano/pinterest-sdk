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

type PinMediaWithImageAllOf struct {

	Images map[string]ImageDetails `json:"images,omitempty"`
}

// AssertPinMediaWithImageAllOfRequired checks if the required fields are not zero-ed
func AssertPinMediaWithImageAllOfRequired(obj PinMediaWithImageAllOf) error {
	return nil
}

// AssertRecursePinMediaWithImageAllOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PinMediaWithImageAllOf (e.g. [][]PinMediaWithImageAllOf), otherwise ErrTypeAssertionError is thrown.
func AssertRecursePinMediaWithImageAllOfRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPinMediaWithImageAllOf, ok := obj.(PinMediaWithImageAllOf)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertPinMediaWithImageAllOfRequired(aPinMediaWithImageAllOf)
	})
}
