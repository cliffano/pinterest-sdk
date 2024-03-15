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


import (
	"fmt"
)


// AdsAnalyticsFilterColumn : Reporting columns for sync reporting data filter
type AdsAnalyticsFilterColumn string

// List of AdsAnalyticsFilterColumn
const (
	SPEND_IN_DOLLAR AdsAnalyticsFilterColumn = "SPEND_IN_DOLLAR"
	TOTAL_IMPRESSION AdsAnalyticsFilterColumn = "TOTAL_IMPRESSION"
)

// AllowedAdsAnalyticsFilterColumnEnumValues is all the allowed values of AdsAnalyticsFilterColumn enum
var AllowedAdsAnalyticsFilterColumnEnumValues = []AdsAnalyticsFilterColumn{
	"SPEND_IN_DOLLAR",
	"TOTAL_IMPRESSION",
}

// validAdsAnalyticsFilterColumnEnumValue provides a map of AdsAnalyticsFilterColumns for fast verification of use input
var validAdsAnalyticsFilterColumnEnumValues = map[AdsAnalyticsFilterColumn]struct{}{
	"SPEND_IN_DOLLAR": {},
	"TOTAL_IMPRESSION": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v AdsAnalyticsFilterColumn) IsValid() bool {
	_, ok := validAdsAnalyticsFilterColumnEnumValues[v]
	return ok
}

// NewAdsAnalyticsFilterColumnFromValue returns a pointer to a valid AdsAnalyticsFilterColumn
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewAdsAnalyticsFilterColumnFromValue(v string) (AdsAnalyticsFilterColumn, error) {
	ev := AdsAnalyticsFilterColumn(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for AdsAnalyticsFilterColumn: valid values are %v", v, AllowedAdsAnalyticsFilterColumnEnumValues)
	}
}



// AssertAdsAnalyticsFilterColumnRequired checks if the required fields are not zero-ed
func AssertAdsAnalyticsFilterColumnRequired(obj AdsAnalyticsFilterColumn) error {
	return nil
}

// AssertAdsAnalyticsFilterColumnConstraints checks if the values respects the defined constraints
func AssertAdsAnalyticsFilterColumnConstraints(obj AdsAnalyticsFilterColumn) error {
	return nil
}
