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




// CatalogsUpsertRetailItem - An item to be upserted
type CatalogsUpsertRetailItem struct {

	// The catalog item id in the merchant namespace
	ItemId string `json:"item_id"`

	Operation string `json:"operation"`

	Attributes ItemAttributes `json:"attributes"`
}

// AssertCatalogsUpsertRetailItemRequired checks if the required fields are not zero-ed
func AssertCatalogsUpsertRetailItemRequired(obj CatalogsUpsertRetailItem) error {
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

// AssertCatalogsUpsertRetailItemConstraints checks if the values respects the defined constraints
func AssertCatalogsUpsertRetailItemConstraints(obj CatalogsUpsertRetailItem) error {
	return nil
}
