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
// ProductAvailabilityType : Default availability for products in a feed.
type ProductAvailabilityType string

// List of ProductAvailabilityType
const (
	IN_STOCK ProductAvailabilityType = "IN_STOCK"
	OUT_OF_STOCK ProductAvailabilityType = "OUT_OF_STOCK"
	PREORDER ProductAvailabilityType = "PREORDER"
	NULL ProductAvailabilityType = "null"
)

// AssertProductAvailabilityTypeRequired checks if the required fields are not zero-ed
func AssertProductAvailabilityTypeRequired(obj ProductAvailabilityType) error {
	return nil
}

// AssertRecurseProductAvailabilityTypeRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ProductAvailabilityType (e.g. [][]ProductAvailabilityType), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseProductAvailabilityTypeRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aProductAvailabilityType, ok := obj.(ProductAvailabilityType)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertProductAvailabilityTypeRequired(aProductAvailabilityType)
	})
}
