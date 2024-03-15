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




type ConversionApiResponseEventsInner struct {

	// Whether the event was processed successfully.
	Status string `json:"status"`

	// Error message containing more information about why the event failed to be processed.
	ErrorMessage *string `json:"error_message,omitempty"`

	// Warning messages about any fields in the event which are not standard. These are not critical to event processing.
	WarningMessage *string `json:"warning_message,omitempty"`
}

// AssertConversionApiResponseEventsInnerRequired checks if the required fields are not zero-ed
func AssertConversionApiResponseEventsInnerRequired(obj ConversionApiResponseEventsInner) error {
	elements := map[string]interface{}{
		"status": obj.Status,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertConversionApiResponseEventsInnerConstraints checks if the values respects the defined constraints
func AssertConversionApiResponseEventsInnerConstraints(obj ConversionApiResponseEventsInner) error {
	return nil
}