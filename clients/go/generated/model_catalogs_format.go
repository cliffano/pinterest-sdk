/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: pinterest-api@pinterest.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"fmt"
)

// CatalogsFormat The file format of a feed.
type CatalogsFormat string

// List of CatalogsFormat
const (
	TSV CatalogsFormat = "TSV"
	CSV CatalogsFormat = "CSV"
	XML CatalogsFormat = "XML"
)

// All allowed values of CatalogsFormat enum
var AllowedCatalogsFormatEnumValues = []CatalogsFormat{
	"TSV",
	"CSV",
	"XML",
}

func (v *CatalogsFormat) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := CatalogsFormat(value)
	for _, existing := range AllowedCatalogsFormatEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid CatalogsFormat", value)
}

// NewCatalogsFormatFromValue returns a pointer to a valid CatalogsFormat
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewCatalogsFormatFromValue(v string) (*CatalogsFormat, error) {
	ev := CatalogsFormat(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for CatalogsFormat: valid values are %v", v, AllowedCatalogsFormatEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v CatalogsFormat) IsValid() bool {
	for _, existing := range AllowedCatalogsFormatEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to CatalogsFormat value
func (v CatalogsFormat) Ptr() *CatalogsFormat {
	return &v
}

type NullableCatalogsFormat struct {
	value *CatalogsFormat
	isSet bool
}

func (v NullableCatalogsFormat) Get() *CatalogsFormat {
	return v.value
}

func (v *NullableCatalogsFormat) Set(val *CatalogsFormat) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFormat) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFormat) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFormat(val *CatalogsFormat) *NullableCatalogsFormat {
	return &NullableCatalogsFormat{value: val, isSet: true}
}

func (v NullableCatalogsFormat) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFormat) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

