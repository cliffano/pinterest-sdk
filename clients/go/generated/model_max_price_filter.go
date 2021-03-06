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

// MaxPriceFilter struct for MaxPriceFilter
type MaxPriceFilter struct {
	MAX_PRICE CatalogsProductGroupPricingCriteria `json:"MAX_PRICE"`
}

// NewMaxPriceFilter instantiates a new MaxPriceFilter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMaxPriceFilter(mAXPRICE CatalogsProductGroupPricingCriteria) *MaxPriceFilter {
	this := MaxPriceFilter{}
	this.MAX_PRICE = mAXPRICE
	return &this
}

// NewMaxPriceFilterWithDefaults instantiates a new MaxPriceFilter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMaxPriceFilterWithDefaults() *MaxPriceFilter {
	this := MaxPriceFilter{}
	return &this
}

// GetMAX_PRICE returns the MAX_PRICE field value
func (o *MaxPriceFilter) GetMAX_PRICE() CatalogsProductGroupPricingCriteria {
	if o == nil {
		var ret CatalogsProductGroupPricingCriteria
		return ret
	}

	return o.MAX_PRICE
}

// GetMAX_PRICEOk returns a tuple with the MAX_PRICE field value
// and a boolean to check if the value has been set.
func (o *MaxPriceFilter) GetMAX_PRICEOk() (CatalogsProductGroupPricingCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.MAX_PRICE, true
}

// SetMAX_PRICE sets field value
func (o *MaxPriceFilter) SetMAX_PRICE(v CatalogsProductGroupPricingCriteria) {
	o.MAX_PRICE = v
}

func (o MaxPriceFilter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["MAX_PRICE"] = o.MAX_PRICE
	}
	return json.Marshal(toSerialize)
}

type NullableMaxPriceFilter struct {
	value *MaxPriceFilter
	isSet bool
}

func (v NullableMaxPriceFilter) Get() *MaxPriceFilter {
	return v.value
}

func (v *NullableMaxPriceFilter) Set(val *MaxPriceFilter) {
	v.value = val
	v.isSet = true
}

func (v NullableMaxPriceFilter) IsSet() bool {
	return v.isSet
}

func (v *NullableMaxPriceFilter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMaxPriceFilter(val *MaxPriceFilter) *NullableMaxPriceFilter {
	return &NullableMaxPriceFilter{value: val, isSet: true}
}

func (v NullableMaxPriceFilter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMaxPriceFilter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


