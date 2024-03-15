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




type BoardsListPins200Response struct {

	// Pins
	Items []Pin `json:"items"`

	Bookmark *string `json:"bookmark,omitempty"`
}

// AssertBoardsListPins200ResponseRequired checks if the required fields are not zero-ed
func AssertBoardsListPins200ResponseRequired(obj BoardsListPins200Response) error {
	elements := map[string]interface{}{
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Items {
		if err := AssertPinRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertBoardsListPins200ResponseConstraints checks if the values respects the defined constraints
func AssertBoardsListPins200ResponseConstraints(obj BoardsListPins200Response) error {
	return nil
}
