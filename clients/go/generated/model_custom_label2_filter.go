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
)

// CustomLabel2Filter struct for CustomLabel2Filter
type CustomLabel2Filter struct {
	CUSTOMLABEL2 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_2"`
}

// NewCustomLabel2Filter instantiates a new CustomLabel2Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCustomLabel2Filter(cUSTOMLABEL2 CatalogsProductGroupMultipleStringCriteria) *CustomLabel2Filter {
	this := CustomLabel2Filter{}
	this.CUSTOMLABEL2 = cUSTOMLABEL2
	return &this
}

// NewCustomLabel2FilterWithDefaults instantiates a new CustomLabel2Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCustomLabel2FilterWithDefaults() *CustomLabel2Filter {
	this := CustomLabel2Filter{}
	return &this
}

// GetCUSTOMLABEL2 returns the CUSTOMLABEL2 field value
func (o *CustomLabel2Filter) GetCUSTOMLABEL2() CatalogsProductGroupMultipleStringCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringCriteria
		return ret
	}

	return o.CUSTOMLABEL2
}

// GetCUSTOMLABEL2Ok returns a tuple with the CUSTOMLABEL2 field value
// and a boolean to check if the value has been set.
func (o *CustomLabel2Filter) GetCUSTOMLABEL2Ok() (CatalogsProductGroupMultipleStringCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.CUSTOMLABEL2, true
}

// SetCUSTOMLABEL2 sets field value
func (o *CustomLabel2Filter) SetCUSTOMLABEL2(v CatalogsProductGroupMultipleStringCriteria) {
	o.CUSTOMLABEL2 = v
}

func (o CustomLabel2Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["CUSTOM_LABEL_2"] = o.CUSTOMLABEL2
	}
	return json.Marshal(toSerialize)
}

type NullableCustomLabel2Filter struct {
	value *CustomLabel2Filter
	isSet bool
}

func (v NullableCustomLabel2Filter) Get() *CustomLabel2Filter {
	return v.value
}

func (v *NullableCustomLabel2Filter) Set(val *CustomLabel2Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableCustomLabel2Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableCustomLabel2Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCustomLabel2Filter(val *CustomLabel2Filter) *NullableCustomLabel2Filter {
	return &NullableCustomLabel2Filter{value: val, isSet: true}
}

func (v NullableCustomLabel2Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCustomLabel2Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


