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

// BrandFilter struct for BrandFilter
type BrandFilter struct {
	BRAND CatalogsProductGroupMultipleStringCriteria `json:"BRAND"`
}

// NewBrandFilter instantiates a new BrandFilter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewBrandFilter(bRAND CatalogsProductGroupMultipleStringCriteria) *BrandFilter {
	this := BrandFilter{}
	this.BRAND = bRAND
	return &this
}

// NewBrandFilterWithDefaults instantiates a new BrandFilter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewBrandFilterWithDefaults() *BrandFilter {
	this := BrandFilter{}
	return &this
}

// GetBRAND returns the BRAND field value
func (o *BrandFilter) GetBRAND() CatalogsProductGroupMultipleStringCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringCriteria
		return ret
	}

	return o.BRAND
}

// GetBRANDOk returns a tuple with the BRAND field value
// and a boolean to check if the value has been set.
func (o *BrandFilter) GetBRANDOk() (CatalogsProductGroupMultipleStringCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.BRAND, true
}

// SetBRAND sets field value
func (o *BrandFilter) SetBRAND(v CatalogsProductGroupMultipleStringCriteria) {
	o.BRAND = v
}

func (o BrandFilter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["BRAND"] = o.BRAND
	}
	return json.Marshal(toSerialize)
}

type NullableBrandFilter struct {
	value *BrandFilter
	isSet bool
}

func (v NullableBrandFilter) Get() *BrandFilter {
	return v.value
}

func (v *NullableBrandFilter) Set(val *BrandFilter) {
	v.value = val
	v.isSet = true
}

func (v NullableBrandFilter) IsSet() bool {
	return v.isSet
}

func (v *NullableBrandFilter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableBrandFilter(val *BrandFilter) *NullableBrandFilter {
	return &NullableBrandFilter{value: val, isSet: true}
}

func (v NullableBrandFilter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableBrandFilter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


