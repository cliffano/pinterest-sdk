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

type ItemGroupIdFilter struct {

	ITEM_GROUP_ID CatalogsProductGroupMultipleStringCriteria `json:"ITEM_GROUP_ID"`
}

// AssertItemGroupIdFilterRequired checks if the required fields are not zero-ed
func AssertItemGroupIdFilterRequired(obj ItemGroupIdFilter) error {
	elements := map[string]interface{}{
		"ITEM_GROUP_ID": obj.ITEM_GROUP_ID,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseItemGroupIdFilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ItemGroupIdFilter (e.g. [][]ItemGroupIdFilter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseItemGroupIdFilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aItemGroupIdFilter, ok := obj.(ItemGroupIdFilter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertItemGroupIdFilterRequired(aItemGroupIdFilter)
	})
}
