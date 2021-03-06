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

type BoardOwner struct {

	Username string `json:"username,omitempty"`
}

// AssertBoardOwnerRequired checks if the required fields are not zero-ed
func AssertBoardOwnerRequired(obj BoardOwner) error {
	return nil
}

// AssertRecurseBoardOwnerRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of BoardOwner (e.g. [][]BoardOwner), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseBoardOwnerRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aBoardOwner, ok := obj.(BoardOwner)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertBoardOwnerRequired(aBoardOwner)
	})
}
