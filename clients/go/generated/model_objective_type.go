/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: blah@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"fmt"
)

// ObjectiveType Campaign objective type.
type ObjectiveType string

// List of ObjectiveType
const (
	AWARENESS ObjectiveType = "AWARENESS"
	CONSIDERATION ObjectiveType = "CONSIDERATION"
	VIDEO_VIEW ObjectiveType = "VIDEO_VIEW"
	WEB_CONVERSION ObjectiveType = "WEB_CONVERSION"
	CATALOG_SALES ObjectiveType = "CATALOG_SALES"
	WEB_SESSIONS ObjectiveType = "WEB_SESSIONS"
	AWARENESS_RESERVED ObjectiveType = "AWARENESS_RESERVED"
	ENGAGEMENT ObjectiveType = "ENGAGEMENT"
)

// All allowed values of ObjectiveType enum
var AllowedObjectiveTypeEnumValues = []ObjectiveType{
	"AWARENESS",
	"CONSIDERATION",
	"VIDEO_VIEW",
	"WEB_CONVERSION",
	"CATALOG_SALES",
	"WEB_SESSIONS",
	"AWARENESS_RESERVED",
	"ENGAGEMENT",
}

func (v *ObjectiveType) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ObjectiveType(value)
	for _, existing := range AllowedObjectiveTypeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ObjectiveType", value)
}

// NewObjectiveTypeFromValue returns a pointer to a valid ObjectiveType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewObjectiveTypeFromValue(v string) (*ObjectiveType, error) {
	ev := ObjectiveType(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ObjectiveType: valid values are %v", v, AllowedObjectiveTypeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ObjectiveType) IsValid() bool {
	for _, existing := range AllowedObjectiveTypeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ObjectiveType value
func (v ObjectiveType) Ptr() *ObjectiveType {
	return &v
}

type NullableObjectiveType struct {
	value *ObjectiveType
	isSet bool
}

func (v NullableObjectiveType) Get() *ObjectiveType {
	return v.value
}

func (v *NullableObjectiveType) Set(val *ObjectiveType) {
	v.value = val
	v.isSet = true
}

func (v NullableObjectiveType) IsSet() bool {
	return v.isSet
}

func (v *NullableObjectiveType) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableObjectiveType(val *ObjectiveType) *NullableObjectiveType {
	return &NullableObjectiveType{value: val, isSet: true}
}

func (v NullableObjectiveType) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableObjectiveType) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

