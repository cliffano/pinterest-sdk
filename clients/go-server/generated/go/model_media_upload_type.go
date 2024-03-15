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



type MediaUploadType string

// List of MediaUploadType
const (
	VIDEO MediaUploadType = "video"
)

// AllowedMediaUploadTypeEnumValues is all the allowed values of MediaUploadType enum
var AllowedMediaUploadTypeEnumValues = []MediaUploadType{
	"video",
}

// validMediaUploadTypeEnumValue provides a map of MediaUploadTypes for fast verification of use input
var validMediaUploadTypeEnumValues = map[MediaUploadType]struct{}{
	"video": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v MediaUploadType) IsValid() bool {
	_, ok := validMediaUploadTypeEnumValues[v]
	return ok
}

// NewMediaUploadTypeFromValue returns a pointer to a valid MediaUploadType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewMediaUploadTypeFromValue(v string) (MediaUploadType, error) {
	ev := MediaUploadType(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for MediaUploadType: valid values are %v", v, AllowedMediaUploadTypeEnumValues)
	}
}



// AssertMediaUploadTypeRequired checks if the required fields are not zero-ed
func AssertMediaUploadTypeRequired(obj MediaUploadType) error {
	return nil
}

// AssertMediaUploadTypeConstraints checks if the values respects the defined constraints
func AssertMediaUploadTypeConstraints(obj MediaUploadType) error {
	return nil
}