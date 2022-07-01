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

// BoardUpdate - Board fields for updates
type BoardUpdate struct {

	Name string `json:"name,omitempty"`

	Description *string `json:"description,omitempty"`

	Privacy string `json:"privacy,omitempty"`
}

// AssertBoardUpdateRequired checks if the required fields are not zero-ed
func AssertBoardUpdateRequired(obj BoardUpdate) error {
	return nil
}

// AssertRecurseBoardUpdateRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of BoardUpdate (e.g. [][]BoardUpdate), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseBoardUpdateRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aBoardUpdate, ok := obj.(BoardUpdate)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertBoardUpdateRequired(aBoardUpdate)
	})
}
