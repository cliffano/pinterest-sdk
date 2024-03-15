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

// CatalogsDeleteHotelItem - A hotel item to be deleted
type CatalogsDeleteHotelItem struct {

	// The catalog hotel id in the merchant namespace
	HotelId string `json:"hotel_id"`

	Operation string `json:"operation"`
}
