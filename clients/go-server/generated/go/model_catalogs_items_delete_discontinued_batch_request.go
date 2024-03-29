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




// CatalogsItemsDeleteDiscontinuedBatchRequest - Request object to discontinue catalogs items
type CatalogsItemsDeleteDiscontinuedBatchRequest struct {

	Country Country `json:"country"`

	Language Language `json:"language"`

	Operation BatchOperation `json:"operation"`

	// Array with catalogs items
	Items []ItemDeleteDiscontinuedBatchRecord `json:"items"`
}

// AssertCatalogsItemsDeleteDiscontinuedBatchRequestRequired checks if the required fields are not zero-ed
func AssertCatalogsItemsDeleteDiscontinuedBatchRequestRequired(obj CatalogsItemsDeleteDiscontinuedBatchRequest) error {
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
		if err := AssertItemDeleteDiscontinuedBatchRecordRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertCatalogsItemsDeleteDiscontinuedBatchRequestConstraints checks if the values respects the defined constraints
func AssertCatalogsItemsDeleteDiscontinuedBatchRequestConstraints(obj CatalogsItemsDeleteDiscontinuedBatchRequest) error {
	return nil
}
