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

// CatalogsProductGroupCreateRequest - Request object for creating a product group.
type CatalogsProductGroupCreateRequest struct {

	// Catalog Feed id pertaining to the catalog product group.
	FeedId string `json:"feed_id"`

	Name string `json:"name"`

	Description *string `json:"description,omitempty"`

	Filters CatalogsProductGroupFilters `json:"filters"`
}

// AssertCatalogsProductGroupCreateRequestRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupCreateRequestRequired(obj CatalogsProductGroupCreateRequest) error {
	elements := map[string]interface{}{
		"feed_id": obj.FeedId,
		"name": obj.Name,
		"filters": obj.Filters,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertCatalogsProductGroupFiltersRequired(obj.Filters); err != nil {
		return err
	}
	return nil
}

// AssertRecurseCatalogsProductGroupCreateRequestRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsProductGroupCreateRequest (e.g. [][]CatalogsProductGroupCreateRequest), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsProductGroupCreateRequestRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsProductGroupCreateRequest, ok := obj.(CatalogsProductGroupCreateRequest)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsProductGroupCreateRequestRequired(aCatalogsProductGroupCreateRequest)
	})
}
