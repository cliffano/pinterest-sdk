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

// PartnerType the model 'PartnerType'
type PartnerType string

// List of PartnerType
const (
	INTERNAL PartnerType = "INTERNAL"
	EXTERNAL PartnerType = "EXTERNAL"
)

// All allowed values of PartnerType enum
var AllowedPartnerTypeEnumValues = []PartnerType{
	"INTERNAL",
	"EXTERNAL",
}

func (v *PartnerType) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := PartnerType(value)
	for _, existing := range AllowedPartnerTypeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid PartnerType", value)
}

// NewPartnerTypeFromValue returns a pointer to a valid PartnerType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewPartnerTypeFromValue(v string) (*PartnerType, error) {
	ev := PartnerType(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for PartnerType: valid values are %v", v, AllowedPartnerTypeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v PartnerType) IsValid() bool {
	for _, existing := range AllowedPartnerTypeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to PartnerType value
func (v PartnerType) Ptr() *PartnerType {
	return &v
}

type NullablePartnerType struct {
	value *PartnerType
	isSet bool
}

func (v NullablePartnerType) Get() *PartnerType {
	return v.value
}

func (v *NullablePartnerType) Set(val *PartnerType) {
	v.value = val
	v.isSet = true
}

func (v NullablePartnerType) IsSet() bool {
	return v.isSet
}

func (v *NullablePartnerType) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePartnerType(val *PartnerType) *NullablePartnerType {
	return &NullablePartnerType{value: val, isSet: true}
}

func (v NullablePartnerType) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePartnerType) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
