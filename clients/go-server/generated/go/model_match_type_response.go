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


// MatchTypeResponse : Keyword match type
type MatchTypeResponse string

// List of MatchTypeResponse
const (
	BROAD MatchTypeResponse = "BROAD"
	PHRASE MatchTypeResponse = "PHRASE"
	EXACT MatchTypeResponse = "EXACT"
	EXACT_NEGATIVE MatchTypeResponse = "EXACT_NEGATIVE"
	PHRASE_NEGATIVE MatchTypeResponse = "PHRASE_NEGATIVE"
	NULL MatchTypeResponse = "null"
)

// AllowedMatchTypeResponseEnumValues is all the allowed values of MatchTypeResponse enum
var AllowedMatchTypeResponseEnumValues = []MatchTypeResponse{
	"BROAD",
	"PHRASE",
	"EXACT",
	"EXACT_NEGATIVE",
	"PHRASE_NEGATIVE",
	"null",
}

// validMatchTypeResponseEnumValue provides a map of MatchTypeResponses for fast verification of use input
var validMatchTypeResponseEnumValues = map[MatchTypeResponse]struct{}{
	"BROAD": {},
	"PHRASE": {},
	"EXACT": {},
	"EXACT_NEGATIVE": {},
	"PHRASE_NEGATIVE": {},
	"null": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v MatchTypeResponse) IsValid() bool {
	_, ok := validMatchTypeResponseEnumValues[v]
	return ok
}

// NewMatchTypeResponseFromValue returns a pointer to a valid MatchTypeResponse
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewMatchTypeResponseFromValue(v string) (MatchTypeResponse, error) {
	ev := MatchTypeResponse(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for MatchTypeResponse: valid values are %v", v, AllowedMatchTypeResponseEnumValues)
	}
}



// AssertMatchTypeResponseRequired checks if the required fields are not zero-ed
func AssertMatchTypeResponseRequired(obj MatchTypeResponse) error {
	return nil
}

// AssertMatchTypeResponseConstraints checks if the values respects the defined constraints
func AssertMatchTypeResponseConstraints(obj MatchTypeResponse) error {
	return nil
}
