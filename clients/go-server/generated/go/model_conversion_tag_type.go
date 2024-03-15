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


// ConversionTagType : conversion tag type
type ConversionTagType string

// List of ConversionTagType
const (
	PAGE_LOAD ConversionTagType = "PAGE_LOAD"
	UNKNOWN ConversionTagType = "UNKNOWN"
	INITIALIZED ConversionTagType = "INITIALIZED"
	PAGE_VISIT ConversionTagType = "PAGE_VISIT"
	SIGNUP ConversionTagType = "SIGNUP"
	CHECKOUT ConversionTagType = "CHECKOUT"
	CUSTOM ConversionTagType = "CUSTOM"
	VIEW_CATEGORY ConversionTagType = "VIEW_CATEGORY"
	SEARCH ConversionTagType = "SEARCH"
	ADD_TO_CART ConversionTagType = "ADD_TO_CART"
	WATCH_VIDEO ConversionTagType = "WATCH_VIDEO"
	LEAD ConversionTagType = "LEAD"
	APP_INSTALL ConversionTagType = "APP_INSTALL"
	WEB_SESSION ConversionTagType = "WEB_SESSION"
	EXTERNAL_MEASUREMENT ConversionTagType = "EXTERNAL_MEASUREMENT"
)

// AllowedConversionTagTypeEnumValues is all the allowed values of ConversionTagType enum
var AllowedConversionTagTypeEnumValues = []ConversionTagType{
	"PAGE_LOAD",
	"UNKNOWN",
	"INITIALIZED",
	"PAGE_VISIT",
	"SIGNUP",
	"CHECKOUT",
	"CUSTOM",
	"VIEW_CATEGORY",
	"SEARCH",
	"ADD_TO_CART",
	"WATCH_VIDEO",
	"LEAD",
	"APP_INSTALL",
	"WEB_SESSION",
	"EXTERNAL_MEASUREMENT",
}

// validConversionTagTypeEnumValue provides a map of ConversionTagTypes for fast verification of use input
var validConversionTagTypeEnumValues = map[ConversionTagType]struct{}{
	"PAGE_LOAD": {},
	"UNKNOWN": {},
	"INITIALIZED": {},
	"PAGE_VISIT": {},
	"SIGNUP": {},
	"CHECKOUT": {},
	"CUSTOM": {},
	"VIEW_CATEGORY": {},
	"SEARCH": {},
	"ADD_TO_CART": {},
	"WATCH_VIDEO": {},
	"LEAD": {},
	"APP_INSTALL": {},
	"WEB_SESSION": {},
	"EXTERNAL_MEASUREMENT": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ConversionTagType) IsValid() bool {
	_, ok := validConversionTagTypeEnumValues[v]
	return ok
}

// NewConversionTagTypeFromValue returns a pointer to a valid ConversionTagType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewConversionTagTypeFromValue(v string) (ConversionTagType, error) {
	ev := ConversionTagType(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for ConversionTagType: valid values are %v", v, AllowedConversionTagTypeEnumValues)
	}
}



// AssertConversionTagTypeRequired checks if the required fields are not zero-ed
func AssertConversionTagTypeRequired(obj ConversionTagType) error {
	return nil
}

// AssertConversionTagTypeConstraints checks if the values respects the defined constraints
func AssertConversionTagTypeConstraints(obj ConversionTagType) error {
	return nil
}
