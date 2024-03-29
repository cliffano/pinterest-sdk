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




// CatalogsItemsDeleteBatchRequest - Request object to delete catalogs items
type CatalogsItemsDeleteBatchRequest struct {

	Country Country `json:"country"`

	Language Language `json:"language"`

	Operation BatchOperation `json:"operation"`

	// Array with catalogs items
	Items []ItemDeleteBatchRecord `json:"items"`
}

// AssertCatalogsItemsDeleteBatchRequestRequired checks if the required fields are not zero-ed
func AssertCatalogsItemsDeleteBatchRequestRequired(obj CatalogsItemsDeleteBatchRequest) error {
	elements := map[string]interface{}{
		"country": obj.Country,
		"language": obj.Language,
		"operation": obj.Operation,
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Items {
		if err := AssertItemDeleteBatchRecordRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertCatalogsItemsDeleteBatchRequestConstraints checks if the values respects the defined constraints
func AssertCatalogsItemsDeleteBatchRequestConstraints(obj CatalogsItemsDeleteBatchRequest) error {
	return nil
}
