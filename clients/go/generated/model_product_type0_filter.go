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

// ProductType0Filter struct for ProductType0Filter
type ProductType0Filter struct {
	PRODUCTTYPE0 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_0"`
}

// NewProductType0Filter instantiates a new ProductType0Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewProductType0Filter(pRODUCTTYPE0 CatalogsProductGroupMultipleStringListCriteria) *ProductType0Filter {
	this := ProductType0Filter{}
	this.PRODUCTTYPE0 = pRODUCTTYPE0
	return &this
}

// NewProductType0FilterWithDefaults instantiates a new ProductType0Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewProductType0FilterWithDefaults() *ProductType0Filter {
	this := ProductType0Filter{}
	return &this
}

// GetPRODUCTTYPE0 returns the PRODUCTTYPE0 field value
func (o *ProductType0Filter) GetPRODUCTTYPE0() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.PRODUCTTYPE0
}

// GetPRODUCTTYPE0Ok returns a tuple with the PRODUCTTYPE0 field value
// and a boolean to check if the value has been set.
func (o *ProductType0Filter) GetPRODUCTTYPE0Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.PRODUCTTYPE0, true
}

// SetPRODUCTTYPE0 sets field value
func (o *ProductType0Filter) SetPRODUCTTYPE0(v CatalogsProductGroupMultipleStringListCriteria) {
	o.PRODUCTTYPE0 = v
}

func (o ProductType0Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["PRODUCT_TYPE_0"] = o.PRODUCTTYPE0
	}
	return json.Marshal(toSerialize)
}

type NullableProductType0Filter struct {
	value *ProductType0Filter
	isSet bool
}

func (v NullableProductType0Filter) Get() *ProductType0Filter {
	return v.value
}

func (v *NullableProductType0Filter) Set(val *ProductType0Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableProductType0Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableProductType0Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableProductType0Filter(val *ProductType0Filter) *NullableProductType0Filter {
	return &NullableProductType0Filter{value: val, isSet: true}
}

func (v NullableProductType0Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableProductType0Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


