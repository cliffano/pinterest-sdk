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




type SsioInsertionOrdersStatusGetByAdAccount200Response struct {

	// Insertion orders status by ad acount id
	Items []SsioInsertionOrderStatus `json:"items"`

	Bookmark *string `json:"bookmark,omitempty"`
}

// AssertSsioInsertionOrdersStatusGetByAdAccount200ResponseRequired checks if the required fields are not zero-ed
func AssertSsioInsertionOrdersStatusGetByAdAccount200ResponseRequired(obj SsioInsertionOrdersStatusGetByAdAccount200Response) error {
	elements := map[string]interface{}{
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Items {
		if err := AssertSsioInsertionOrderStatusRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertSsioInsertionOrdersStatusGetByAdAccount200ResponseConstraints checks if the values respects the defined constraints
func AssertSsioInsertionOrdersStatusGetByAdAccount200ResponseConstraints(obj SsioInsertionOrdersStatusGetByAdAccount200Response) error {
	return nil
}
