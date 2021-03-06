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

// ProductType4Filter struct for ProductType4Filter
type ProductType4Filter struct {
	PRODUCTTYPE4 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_4"`
}

// NewProductType4Filter instantiates a new ProductType4Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewProductType4Filter(pRODUCTTYPE4 CatalogsProductGroupMultipleStringListCriteria) *ProductType4Filter {
	this := ProductType4Filter{}
	this.PRODUCTTYPE4 = pRODUCTTYPE4
	return &this
}

// NewProductType4FilterWithDefaults instantiates a new ProductType4Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewProductType4FilterWithDefaults() *ProductType4Filter {
	this := ProductType4Filter{}
	return &this
}

// GetPRODUCTTYPE4 returns the PRODUCTTYPE4 field value
func (o *ProductType4Filter) GetPRODUCTTYPE4() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.PRODUCTTYPE4
}

// GetPRODUCTTYPE4Ok returns a tuple with the PRODUCTTYPE4 field value
// and a boolean to check if the value has been set.
func (o *ProductType4Filter) GetPRODUCTTYPE4Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.PRODUCTTYPE4, true
}

// SetPRODUCTTYPE4 sets field value
func (o *ProductType4Filter) SetPRODUCTTYPE4(v CatalogsProductGroupMultipleStringListCriteria) {
	o.PRODUCTTYPE4 = v
}

func (o ProductType4Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["PRODUCT_TYPE_4"] = o.PRODUCTTYPE4
	}
	return json.Marshal(toSerialize)
}

type NullableProductType4Filter struct {
	value *ProductType4Filter
	isSet bool
}

func (v NullableProductType4Filter) Get() *ProductType4Filter {
	return v.value
}

func (v *NullableProductType4Filter) Set(val *ProductType4Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableProductType4Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableProductType4Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableProductType4Filter(val *ProductType4Filter) *NullableProductType4Filter {
	return &NullableProductType4Filter{value: val, isSet: true}
}

func (v NullableProductType4Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableProductType4Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


