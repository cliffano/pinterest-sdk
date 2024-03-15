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




type AdAccountsCatalogsProductGroupsList200Response struct {

	Items []CatalogProductGroup `json:"items"`

	Bookmark *string `json:"bookmark,omitempty"`
}

// AssertAdAccountsCatalogsProductGroupsList200ResponseRequired checks if the required fields are not zero-ed
func AssertAdAccountsCatalogsProductGroupsList200ResponseRequired(obj AdAccountsCatalogsProductGroupsList200Response) error {
	elements := map[string]interface{}{
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Items {
		if err := AssertCatalogProductGroupRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertAdAccountsCatalogsProductGroupsList200ResponseConstraints checks if the values respects the defined constraints
func AssertAdAccountsCatalogsProductGroupsList200ResponseConstraints(obj AdAccountsCatalogsProductGroupsList200Response) error {
	return nil
}