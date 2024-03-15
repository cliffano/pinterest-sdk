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

// Gender the model 'Gender'
type Gender string

// List of Gender
const (
	FEMALE Gender = "FEMALE"
	MALE Gender = "MALE"
	UNISEX Gender = "UNISEX"
)

// All allowed values of Gender enum
var AllowedGenderEnumValues = []Gender{
	"FEMALE",
	"MALE",
	"UNISEX",
}

func (v *Gender) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := Gender(value)
	for _, existing := range AllowedGenderEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid Gender", value)
}

// NewGenderFromValue returns a pointer to a valid Gender
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewGenderFromValue(v string) (*Gender, error) {
	ev := Gender(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for Gender: valid values are %v", v, AllowedGenderEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v Gender) IsValid() bool {
	for _, existing := range AllowedGenderEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to Gender value
func (v Gender) Ptr() *Gender {
	return &v
}

type NullableGender struct {
	value *Gender
	isSet bool
}

func (v NullableGender) Get() *Gender {
	return v.value
}

func (v *NullableGender) Set(val *Gender) {
	v.value = val
	v.isSet = true
}

func (v NullableGender) IsSet() bool {
	return v.isSet
}

func (v *NullableGender) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGender(val *Gender) *NullableGender {
	return &NullableGender{value: val, isSet: true}
}

func (v NullableGender) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGender) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

