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




// ItemProcessingRecord - Object describing an item processing record
type ItemProcessingRecord struct {

	// The catalog item id in the merchant namespace
	ItemId string `json:"item_id,omitempty"`

	// Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
	Errors []ItemValidationEvent `json:"errors,omitempty"`

	// Array with the validation warnings for the item processing record
	Warnings []ItemValidationEvent `json:"warnings,omitempty"`

	Status ItemProcessingStatus `json:"status,omitempty"`
}

// AssertItemProcessingRecordRequired checks if the required fields are not zero-ed
func AssertItemProcessingRecordRequired(obj ItemProcessingRecord) error {
	for _, el := range obj.Errors {
		if err := AssertItemValidationEventRequired(el); err != nil {
			return err
		}
	}
	for _, el := range obj.Warnings {
		if err := AssertItemValidationEventRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertItemProcessingRecordConstraints checks if the values respects the defined constraints
func AssertItemProcessingRecordConstraints(obj ItemProcessingRecord) error {
	return nil
}
