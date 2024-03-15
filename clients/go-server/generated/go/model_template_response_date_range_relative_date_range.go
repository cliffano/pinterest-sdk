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




// TemplateResponseDateRangeRelativeDateRange - The relative date range of the template
type TemplateResponseDateRangeRelativeDateRange struct {

	// The date range type
	Type string `json:"type,omitempty"`

	// The start date of the date range
	StartDaysInPast float32 `json:"start_days_in_past,omitempty"`

	// The end date of the date range
	EndDaysInPast float32 `json:"end_days_in_past,omitempty"`
}

// AssertTemplateResponseDateRangeRelativeDateRangeRequired checks if the required fields are not zero-ed
func AssertTemplateResponseDateRangeRelativeDateRangeRequired(obj TemplateResponseDateRangeRelativeDateRange) error {
	return nil
}

// AssertTemplateResponseDateRangeRelativeDateRangeConstraints checks if the values respects the defined constraints
func AssertTemplateResponseDateRangeRelativeDateRangeConstraints(obj TemplateResponseDateRangeRelativeDateRange) error {
	return nil
}
