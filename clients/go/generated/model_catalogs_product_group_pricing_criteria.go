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

// CatalogsProductGroupPricingCriteria struct for CatalogsProductGroupPricingCriteria
type CatalogsProductGroupPricingCriteria struct {
	Inclusion bool `json:"inclusion"`
	Values float32 `json:"values"`
	Negated bool `json:"negated"`
}

// NewCatalogsProductGroupPricingCriteria instantiates a new CatalogsProductGroupPricingCriteria object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsProductGroupPricingCriteria(inclusion bool, values float32, negated bool) *CatalogsProductGroupPricingCriteria {
	this := CatalogsProductGroupPricingCriteria{}
	this.Inclusion = inclusion
	this.Values = values
	this.Negated = negated
	return &this
}

// NewCatalogsProductGroupPricingCriteriaWithDefaults instantiates a new CatalogsProductGroupPricingCriteria object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsProductGroupPricingCriteriaWithDefaults() *CatalogsProductGroupPricingCriteria {
	this := CatalogsProductGroupPricingCriteria{}
	return &this
}

// GetInclusion returns the Inclusion field value
func (o *CatalogsProductGroupPricingCriteria) GetInclusion() bool {
	if o == nil {
		var ret bool
		return ret
	}

	return o.Inclusion
}

// GetInclusionOk returns a tuple with the Inclusion field value
// and a boolean to check if the value has been set.
func (o *CatalogsProductGroupPricingCriteria) GetInclusionOk() (*bool, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Inclusion, true
}

// SetInclusion sets field value
func (o *CatalogsProductGroupPricingCriteria) SetInclusion(v bool) {
	o.Inclusion = v
}

// GetValues returns the Values field value
func (o *CatalogsProductGroupPricingCriteria) GetValues() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.Values
}

// GetValuesOk returns a tuple with the Values field value
// and a boolean to check if the value has been set.
func (o *CatalogsProductGroupPricingCriteria) GetValuesOk() (*float32, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Values, true
}

// SetValues sets field value
func (o *CatalogsProductGroupPricingCriteria) SetValues(v float32) {
	o.Values = v
}

// GetNegated returns the Negated field value
func (o *CatalogsProductGroupPricingCriteria) GetNegated() bool {
	if o == nil {
		var ret bool
		return ret
	}

	return o.Negated
}

// GetNegatedOk returns a tuple with the Negated field value
// and a boolean to check if the value has been set.
func (o *CatalogsProductGroupPricingCriteria) GetNegatedOk() (*bool, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Negated, true
}

// SetNegated sets field value
func (o *CatalogsProductGroupPricingCriteria) SetNegated(v bool) {
	o.Negated = v
}

func (o CatalogsProductGroupPricingCriteria) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["inclusion"] = o.Inclusion
	}
	if true {
		toSerialize["values"] = o.Values
	}
	if true {
		toSerialize["negated"] = o.Negated
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsProductGroupPricingCriteria struct {
	value *CatalogsProductGroupPricingCriteria
	isSet bool
}

func (v NullableCatalogsProductGroupPricingCriteria) Get() *CatalogsProductGroupPricingCriteria {
	return v.value
}

func (v *NullableCatalogsProductGroupPricingCriteria) Set(val *CatalogsProductGroupPricingCriteria) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsProductGroupPricingCriteria) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsProductGroupPricingCriteria) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsProductGroupPricingCriteria(val *CatalogsProductGroupPricingCriteria) *NullableCatalogsProductGroupPricingCriteria {
	return &NullableCatalogsProductGroupPricingCriteria{value: val, isSet: true}
}

func (v NullableCatalogsProductGroupPricingCriteria) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsProductGroupPricingCriteria) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


