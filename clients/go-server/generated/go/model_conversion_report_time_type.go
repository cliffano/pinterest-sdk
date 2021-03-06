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
// ConversionReportTimeType : Conversion report time type
type ConversionReportTimeType string

// List of ConversionReportTimeType
const (
	AD_ACTION ConversionReportTimeType = "TIME_OF_AD_ACTION"
	CONVERSION ConversionReportTimeType = "TIME_OF_CONVERSION"
)

// AssertConversionReportTimeTypeRequired checks if the required fields are not zero-ed
func AssertConversionReportTimeTypeRequired(obj ConversionReportTimeType) error {
	return nil
}

// AssertRecurseConversionReportTimeTypeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ConversionReportTimeType (e.g. [][]ConversionReportTimeType), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseConversionReportTimeTypeRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aConversionReportTimeType, ok := obj.(ConversionReportTimeType)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertConversionReportTimeTypeRequired(aConversionReportTimeType)
	})
}
