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




// CatalogsCreateRetailItem - An item to be created
type CatalogsCreateRetailItem struct {

	// The catalog item id in the merchant namespace
	ItemId string `json:"item_id"`

	Operation string `json:"operation"`

	Attributes ItemAttributes `json:"attributes"`
}

// AssertCatalogsCreateRetailItemRequired checks if the required fields are not zero-ed
func AssertCatalogsCreateRetailItemRequired(obj CatalogsCreateRetailItem) error {
	elements := map[string]interface{}{
		"item_id": obj.ItemId,
		"operation": obj.Operation,
		"attributes": obj.Attributes,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertItemAttributesRequired(obj.Attributes); err != nil {
		return err
	}
	return nil
}

// AssertCatalogsCreateRetailItemConstraints checks if the values respects the defined constraints
func AssertCatalogsCreateRetailItemConstraints(obj CatalogsCreateRetailItem) error {
	return nil
}
