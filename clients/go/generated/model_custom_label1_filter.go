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
)

// CustomLabel1Filter struct for CustomLabel1Filter
type CustomLabel1Filter struct {
	CUSTOMLABEL1 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_1"`
}

// NewCustomLabel1Filter instantiates a new CustomLabel1Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCustomLabel1Filter(cUSTOMLABEL1 CatalogsProductGroupMultipleStringCriteria) *CustomLabel1Filter {
	this := CustomLabel1Filter{}
	this.CUSTOMLABEL1 = cUSTOMLABEL1
	return &this
}

// NewCustomLabel1FilterWithDefaults instantiates a new CustomLabel1Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCustomLabel1FilterWithDefaults() *CustomLabel1Filter {
	this := CustomLabel1Filter{}
	return &this
}

// GetCUSTOMLABEL1 returns the CUSTOMLABEL1 field value
func (o *CustomLabel1Filter) GetCUSTOMLABEL1() CatalogsProductGroupMultipleStringCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringCriteria
		return ret
	}

	return o.CUSTOMLABEL1
}

// GetCUSTOMLABEL1Ok returns a tuple with the CUSTOMLABEL1 field value
// and a boolean to check if the value has been set.
func (o *CustomLabel1Filter) GetCUSTOMLABEL1Ok() (CatalogsProductGroupMultipleStringCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.CUSTOMLABEL1, true
}

// SetCUSTOMLABEL1 sets field value
func (o *CustomLabel1Filter) SetCUSTOMLABEL1(v CatalogsProductGroupMultipleStringCriteria) {
	o.CUSTOMLABEL1 = v
}

func (o CustomLabel1Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["CUSTOM_LABEL_1"] = o.CUSTOMLABEL1
	}
	return json.Marshal(toSerialize)
}

type NullableCustomLabel1Filter struct {
	value *CustomLabel1Filter
	isSet bool
}

func (v NullableCustomLabel1Filter) Get() *CustomLabel1Filter {
	return v.value
}

func (v *NullableCustomLabel1Filter) Set(val *CustomLabel1Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableCustomLabel1Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableCustomLabel1Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCustomLabel1Filter(val *CustomLabel1Filter) *NullableCustomLabel1Filter {
	return &NullableCustomLabel1Filter{value: val, isSet: true}
}

func (v NullableCustomLabel1Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCustomLabel1Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


