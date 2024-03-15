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




type TopPinsAnalyticsResponse struct {

	DateAvailability TopPinsAnalyticsResponseDateAvailability `json:"date_availability,omitempty"`

	Pins []TopPinsAnalyticsResponsePinsInner `json:"pins,omitempty"`

	SortBy string `json:"sort_by,omitempty"`
}

// AssertTopPinsAnalyticsResponseRequired checks if the required fields are not zero-ed
func AssertTopPinsAnalyticsResponseRequired(obj TopPinsAnalyticsResponse) error {
	if err := AssertTopPinsAnalyticsResponseDateAvailabilityRequired(obj.DateAvailability); err != nil {
		return err
	}
	for _, el := range obj.Pins {
		if err := AssertTopPinsAnalyticsResponsePinsInnerRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertTopPinsAnalyticsResponseConstraints checks if the values respects the defined constraints
func AssertTopPinsAnalyticsResponseConstraints(obj TopPinsAnalyticsResponse) error {
	return nil
}
