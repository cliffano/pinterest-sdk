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




// CatalogsItems - Response object of catalogs items
type CatalogsItems struct {

	// Array with catalogs items
	Items []ItemResponse `json:"items,omitempty"`
}

// AssertCatalogsItemsRequired checks if the required fields are not zero-ed
func AssertCatalogsItemsRequired(obj CatalogsItems) error {
	for _, el := range obj.Items {
		if err := AssertItemResponseRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertCatalogsItemsConstraints checks if the values respects the defined constraints
func AssertCatalogsItemsConstraints(obj CatalogsItems) error {
	return nil
}