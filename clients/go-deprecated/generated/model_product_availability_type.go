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
// ProductAvailabilityType Default availability for products in a feed.
type ProductAvailabilityType string

// List of ProductAvailabilityType
const (
	IN_STOCK ProductAvailabilityType = "IN_STOCK"
	OUT_OF_STOCK ProductAvailabilityType = "OUT_OF_STOCK"
	PREORDER ProductAvailabilityType = "PREORDER"
	NULL ProductAvailabilityType = "null"
)
