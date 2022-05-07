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

// DataOutputFormat Format of generated report
type DataOutputFormat string

// List of DataOutputFormat
const (
	JSON DataOutputFormat = "JSON"
	CSV DataOutputFormat = "CSV"
)

// All allowed values of DataOutputFormat enum
var AllowedDataOutputFormatEnumValues = []DataOutputFormat{
	"JSON",
	"CSV",
}

func (v *DataOutputFormat) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := DataOutputFormat(value)
	for _, existing := range AllowedDataOutputFormatEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid DataOutputFormat", value)
}

// NewDataOutputFormatFromValue returns a pointer to a valid DataOutputFormat
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewDataOutputFormatFromValue(v string) (*DataOutputFormat, error) {
	ev := DataOutputFormat(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for DataOutputFormat: valid values are %v", v, AllowedDataOutputFormatEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v DataOutputFormat) IsValid() bool {
	for _, existing := range AllowedDataOutputFormatEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to DataOutputFormat value
func (v DataOutputFormat) Ptr() *DataOutputFormat {
	return &v
}

type NullableDataOutputFormat struct {
	value *DataOutputFormat
	isSet bool
}

func (v NullableDataOutputFormat) Get() *DataOutputFormat {
	return v.value
}

func (v *NullableDataOutputFormat) Set(val *DataOutputFormat) {
	v.value = val
	v.isSet = true
}

func (v NullableDataOutputFormat) IsSet() bool {
	return v.isSet
}

func (v *NullableDataOutputFormat) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableDataOutputFormat(val *DataOutputFormat) *NullableDataOutputFormat {
	return &NullableDataOutputFormat{value: val, isSet: true}
}

func (v NullableDataOutputFormat) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableDataOutputFormat) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

