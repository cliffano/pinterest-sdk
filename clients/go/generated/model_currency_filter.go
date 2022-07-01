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

// CurrencyFilter struct for CurrencyFilter
type CurrencyFilter struct {
	CURRENCY CatalogsProductGroupCurrencyCriteria `json:"CURRENCY"`
}

// NewCurrencyFilter instantiates a new CurrencyFilter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCurrencyFilter(cURRENCY CatalogsProductGroupCurrencyCriteria) *CurrencyFilter {
	this := CurrencyFilter{}
	this.CURRENCY = cURRENCY
	return &this
}

// NewCurrencyFilterWithDefaults instantiates a new CurrencyFilter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCurrencyFilterWithDefaults() *CurrencyFilter {
	this := CurrencyFilter{}
	return &this
}

// GetCURRENCY returns the CURRENCY field value
func (o *CurrencyFilter) GetCURRENCY() CatalogsProductGroupCurrencyCriteria {
	if o == nil {
		var ret CatalogsProductGroupCurrencyCriteria
		return ret
	}

	return o.CURRENCY
}

// GetCURRENCYOk returns a tuple with the CURRENCY field value
// and a boolean to check if the value has been set.
func (o *CurrencyFilter) GetCURRENCYOk() (CatalogsProductGroupCurrencyCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.CURRENCY, true
}

// SetCURRENCY sets field value
func (o *CurrencyFilter) SetCURRENCY(v CatalogsProductGroupCurrencyCriteria) {
	o.CURRENCY = v
}

func (o CurrencyFilter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["CURRENCY"] = o.CURRENCY
	}
	return json.Marshal(toSerialize)
}

type NullableCurrencyFilter struct {
	value *CurrencyFilter
	isSet bool
}

func (v NullableCurrencyFilter) Get() *CurrencyFilter {
	return v.value
}

func (v *NullableCurrencyFilter) Set(val *CurrencyFilter) {
	v.value = val
	v.isSet = true
}

func (v NullableCurrencyFilter) IsSet() bool {
	return v.isSet
}

func (v *NullableCurrencyFilter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCurrencyFilter(val *CurrencyFilter) *NullableCurrencyFilter {
	return &NullableCurrencyFilter{value: val, isSet: true}
}

func (v NullableCurrencyFilter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCurrencyFilter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


