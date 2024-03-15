/*
Pinterest REST API

Pinterest's REST API

API version: 5.12.0
Contact: blah+oapicf@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"fmt"
)

// GridClickType Where a user is taken after clicking on an ad in grid.
type GridClickType string

// List of GridClickType
const (
	CLOSEUP GridClickType = "CLOSEUP"
	DIRECT_TO_DESTINATION GridClickType = "DIRECT_TO_DESTINATION"
)

// All allowed values of GridClickType enum
var AllowedGridClickTypeEnumValues = []GridClickType{
	"CLOSEUP",
	"DIRECT_TO_DESTINATION",
}

func (v *GridClickType) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := GridClickType(value)
	for _, existing := range AllowedGridClickTypeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid GridClickType", value)
}

// NewGridClickTypeFromValue returns a pointer to a valid GridClickType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewGridClickTypeFromValue(v string) (*GridClickType, error) {
	ev := GridClickType(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for GridClickType: valid values are %v", v, AllowedGridClickTypeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v GridClickType) IsValid() bool {
	for _, existing := range AllowedGridClickTypeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to GridClickType value
func (v GridClickType) Ptr() *GridClickType {
	return &v
}

type NullableGridClickType struct {
	value *GridClickType
	isSet bool
}

func (v NullableGridClickType) Get() *GridClickType {
	return v.value
}

func (v *NullableGridClickType) Set(val *GridClickType) {
	v.value = val
	v.isSet = true
}

func (v NullableGridClickType) IsSet() bool {
	return v.isSet
}

func (v *NullableGridClickType) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGridClickType(val *GridClickType) *NullableGridClickType {
	return &NullableGridClickType{value: val, isSet: true}
}

func (v NullableGridClickType) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGridClickType) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

