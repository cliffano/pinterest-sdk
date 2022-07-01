/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// ConversionReportAttributionType : Attribution type. Refers to the Pinterest Tag endpoints
type ConversionReportAttributionType string

// List of ConversionReportAttributionType
const (
	INDIVIDUAL ConversionReportAttributionType = "INDIVIDUAL"
	HOUSEHOLD ConversionReportAttributionType = "HOUSEHOLD"
)

// AssertConversionReportAttributionTypeRequired checks if the required fields are not zero-ed
func AssertConversionReportAttributionTypeRequired(obj ConversionReportAttributionType) error {
	return nil
}

// AssertRecurseConversionReportAttributionTypeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ConversionReportAttributionType (e.g. [][]ConversionReportAttributionType), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseConversionReportAttributionTypeRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aConversionReportAttributionType, ok := obj.(ConversionReportAttributionType)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertConversionReportAttributionTypeRequired(aConversionReportAttributionType)
	})
}
