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

// GetAudiencesOrderBy the model 'GetAudiencesOrderBy'
type GetAudiencesOrderBy string

// List of GetAudiencesOrderBy
const (
	NONE GetAudiencesOrderBy = "NONE"
	ID GetAudiencesOrderBy = "ID"
	SIZE GetAudiencesOrderBy = "SIZE"
	CREATION_DATE GetAudiencesOrderBy = "CREATION_DATE"
	UPDATED_TIME GetAudiencesOrderBy = "UPDATED_TIME"
	NAME GetAudiencesOrderBy = "NAME"
	STATUS GetAudiencesOrderBy = "STATUS"
	TYPE GetAudiencesOrderBy = "TYPE"
)

// All allowed values of GetAudiencesOrderBy enum
var AllowedGetAudiencesOrderByEnumValues = []GetAudiencesOrderBy{
	"NONE",
	"ID",
	"SIZE",
	"CREATION_DATE",
	"UPDATED_TIME",
	"NAME",
	"STATUS",
	"TYPE",
}

func (v *GetAudiencesOrderBy) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := GetAudiencesOrderBy(value)
	for _, existing := range AllowedGetAudiencesOrderByEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid GetAudiencesOrderBy", value)
}

// NewGetAudiencesOrderByFromValue returns a pointer to a valid GetAudiencesOrderBy
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewGetAudiencesOrderByFromValue(v string) (*GetAudiencesOrderBy, error) {
	ev := GetAudiencesOrderBy(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for GetAudiencesOrderBy: valid values are %v", v, AllowedGetAudiencesOrderByEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v GetAudiencesOrderBy) IsValid() bool {
	for _, existing := range AllowedGetAudiencesOrderByEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to GetAudiencesOrderBy value
func (v GetAudiencesOrderBy) Ptr() *GetAudiencesOrderBy {
	return &v
}

type NullableGetAudiencesOrderBy struct {
	value *GetAudiencesOrderBy
	isSet bool
}

func (v NullableGetAudiencesOrderBy) Get() *GetAudiencesOrderBy {
	return v.value
}

func (v *NullableGetAudiencesOrderBy) Set(val *GetAudiencesOrderBy) {
	v.value = val
	v.isSet = true
}

func (v NullableGetAudiencesOrderBy) IsSet() bool {
	return v.isSet
}

func (v *NullableGetAudiencesOrderBy) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetAudiencesOrderBy(val *GetAudiencesOrderBy) *NullableGetAudiencesOrderBy {
	return &NullableGetAudiencesOrderBy{value: val, isSet: true}
}

func (v NullableGetAudiencesOrderBy) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetAudiencesOrderBy) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
