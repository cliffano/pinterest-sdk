/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type ConversionAttributionWindowDays int32

// List of ConversionAttributionWindowDays
const (
	_1 ConversionAttributionWindowDays = 1
	_7 ConversionAttributionWindowDays = 7
	_30 ConversionAttributionWindowDays = 30
	_60 ConversionAttributionWindowDays = 60
)

// AssertConversionAttributionWindowDaysRequired checks if the required fields are not zero-ed
func AssertConversionAttributionWindowDaysRequired(obj ConversionAttributionWindowDays) error {
	return nil
}

// AssertRecurseConversionAttributionWindowDaysRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ConversionAttributionWindowDays (e.g. [][]ConversionAttributionWindowDays), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseConversionAttributionWindowDaysRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aConversionAttributionWindowDays, ok := obj.(ConversionAttributionWindowDays)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertConversionAttributionWindowDaysRequired(aConversionAttributionWindowDays)
	})
}