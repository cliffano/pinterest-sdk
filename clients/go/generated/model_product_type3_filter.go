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

// ProductType3Filter struct for ProductType3Filter
type ProductType3Filter struct {
	PRODUCTTYPE3 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_3"`
}

// NewProductType3Filter instantiates a new ProductType3Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewProductType3Filter(pRODUCTTYPE3 CatalogsProductGroupMultipleStringListCriteria) *ProductType3Filter {
	this := ProductType3Filter{}
	this.PRODUCTTYPE3 = pRODUCTTYPE3
	return &this
}

// NewProductType3FilterWithDefaults instantiates a new ProductType3Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewProductType3FilterWithDefaults() *ProductType3Filter {
	this := ProductType3Filter{}
	return &this
}

// GetPRODUCTTYPE3 returns the PRODUCTTYPE3 field value
func (o *ProductType3Filter) GetPRODUCTTYPE3() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.PRODUCTTYPE3
}

// GetPRODUCTTYPE3Ok returns a tuple with the PRODUCTTYPE3 field value
// and a boolean to check if the value has been set.
func (o *ProductType3Filter) GetPRODUCTTYPE3Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.PRODUCTTYPE3, true
}

// SetPRODUCTTYPE3 sets field value
func (o *ProductType3Filter) SetPRODUCTTYPE3(v CatalogsProductGroupMultipleStringListCriteria) {
	o.PRODUCTTYPE3 = v
}

func (o ProductType3Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["PRODUCT_TYPE_3"] = o.PRODUCTTYPE3
	}
	return json.Marshal(toSerialize)
}

type NullableProductType3Filter struct {
	value *ProductType3Filter
	isSet bool
}

func (v NullableProductType3Filter) Get() *ProductType3Filter {
	return v.value
}

func (v *NullableProductType3Filter) Set(val *ProductType3Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableProductType3Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableProductType3Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableProductType3Filter(val *ProductType3Filter) *NullableProductType3Filter {
	return &NullableProductType3Filter{value: val, isSet: true}
}

func (v NullableProductType3Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableProductType3Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


