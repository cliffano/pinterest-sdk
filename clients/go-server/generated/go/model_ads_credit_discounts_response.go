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




type AdsCreditDiscountsResponse struct {

	// True if the offer code is currently active.
	Active bool `json:"active,omitempty"`

	// Advertiser ID the offer was applied to.
	AdvertiserId string `json:"advertiser_id,omitempty"`

	// The type of discount of this credit
	DiscountType *string `json:"discountType,omitempty"`

	// The discount applied in the offer’s currency value.
	DiscountInMicroCurrency *float32 `json:"discountInMicroCurrency,omitempty"`

	// Currency value for the discount.
	DiscountCurrency *string `json:"discountCurrency,omitempty"`

	// Human readable title of the offer code.
	Title *string `json:"title,omitempty"`

	// The credits left to spend.
	RemainingDiscountInMicroCurrency *float32 `json:"remainingDiscountInMicroCurrency,omitempty"`
}

// AssertAdsCreditDiscountsResponseRequired checks if the required fields are not zero-ed
func AssertAdsCreditDiscountsResponseRequired(obj AdsCreditDiscountsResponse) error {
	return nil
}

// AssertAdsCreditDiscountsResponseConstraints checks if the values respects the defined constraints
func AssertAdsCreditDiscountsResponseConstraints(obj AdsCreditDiscountsResponse) error {
	return nil
}