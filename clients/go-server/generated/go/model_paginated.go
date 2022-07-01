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

type Paginated struct {

	Items []map[string]interface{} `json:"items"`

	Bookmark *string `json:"bookmark,omitempty"`
}

// AssertPaginatedRequired checks if the required fields are not zero-ed
func AssertPaginatedRequired(obj Paginated) error {
	elements := map[string]interface{}{
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecursePaginatedRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of Paginated (e.g. [][]Paginated), otherwise ErrTypeAssertionError is thrown.
func AssertRecursePaginatedRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPaginated, ok := obj.(Paginated)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertPaginatedRequired(aPaginated)
	})
}
