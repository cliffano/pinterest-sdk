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



type TrendsSupportedRegion string

// List of TrendsSupportedRegion
const (
	US TrendsSupportedRegion = "US"
	CA TrendsSupportedRegion = "CA"
	DE TrendsSupportedRegion = "DE"
	FR TrendsSupportedRegion = "FR"
	ES TrendsSupportedRegion = "ES"
	IT TrendsSupportedRegion = "IT"
	DEATCH TrendsSupportedRegion = "DE+AT+CH"
	GBIE TrendsSupportedRegion = "GB+IE"
	ITESPTGRMT TrendsSupportedRegion = "IT+ES+PT+GR+MT"
	PLROHUSKCZ TrendsSupportedRegion = "PL+RO+HU+SK+CZ"
	SEDKFINO TrendsSupportedRegion = "SE+DK+FI+NO"
	NLBELU TrendsSupportedRegion = "NL+BE+LU"
	AR TrendsSupportedRegion = "AR"
	BR TrendsSupportedRegion = "BR"
	CO TrendsSupportedRegion = "CO"
	MX TrendsSupportedRegion = "MX"
	MXARCOCL TrendsSupportedRegion = "MX+AR+CO+CL"
	AUNZ TrendsSupportedRegion = "AU+NZ"
)

// AllowedTrendsSupportedRegionEnumValues is all the allowed values of TrendsSupportedRegion enum
var AllowedTrendsSupportedRegionEnumValues = []TrendsSupportedRegion{
	"US",
	"CA",
	"DE",
	"FR",
	"ES",
	"IT",
	"DE+AT+CH",
	"GB+IE",
	"IT+ES+PT+GR+MT",
	"PL+RO+HU+SK+CZ",
	"SE+DK+FI+NO",
	"NL+BE+LU",
	"AR",
	"BR",
	"CO",
	"MX",
	"MX+AR+CO+CL",
	"AU+NZ",
}

// validTrendsSupportedRegionEnumValue provides a map of TrendsSupportedRegions for fast verification of use input
var validTrendsSupportedRegionEnumValues = map[TrendsSupportedRegion]struct{}{
	"US": {},
	"CA": {},
	"DE": {},
	"FR": {},
	"ES": {},
	"IT": {},
	"DE+AT+CH": {},
	"GB+IE": {},
	"IT+ES+PT+GR+MT": {},
	"PL+RO+HU+SK+CZ": {},
	"SE+DK+FI+NO": {},
	"NL+BE+LU": {},
	"AR": {},
	"BR": {},
	"CO": {},
	"MX": {},
	"MX+AR+CO+CL": {},
	"AU+NZ": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v TrendsSupportedRegion) IsValid() bool {
	_, ok := validTrendsSupportedRegionEnumValues[v]
	return ok
}

// NewTrendsSupportedRegionFromValue returns a pointer to a valid TrendsSupportedRegion
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewTrendsSupportedRegionFromValue(v string) (TrendsSupportedRegion, error) {
	ev := TrendsSupportedRegion(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for TrendsSupportedRegion: valid values are %v", v, AllowedTrendsSupportedRegionEnumValues)
	}
}



// AssertTrendsSupportedRegionRequired checks if the required fields are not zero-ed
func AssertTrendsSupportedRegionRequired(obj TrendsSupportedRegion) error {
	return nil
}

// AssertTrendsSupportedRegionConstraints checks if the values respects the defined constraints
func AssertTrendsSupportedRegionConstraints(obj TrendsSupportedRegion) error {
	return nil
}