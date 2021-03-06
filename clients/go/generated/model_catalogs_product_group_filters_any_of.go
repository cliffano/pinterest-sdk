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

// CatalogsProductGroupFiltersAnyOf struct for CatalogsProductGroupFiltersAnyOf
type CatalogsProductGroupFiltersAnyOf struct {
	AnyOf []CatalogsProductGroupFilterKeys `json:"any_of,omitempty"`
}

// NewCatalogsProductGroupFiltersAnyOf instantiates a new CatalogsProductGroupFiltersAnyOf object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsProductGroupFiltersAnyOf() *CatalogsProductGroupFiltersAnyOf {
	this := CatalogsProductGroupFiltersAnyOf{}
	return &this
}

// NewCatalogsProductGroupFiltersAnyOfWithDefaults instantiates a new CatalogsProductGroupFiltersAnyOf object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsProductGroupFiltersAnyOfWithDefaults() *CatalogsProductGroupFiltersAnyOf {
	this := CatalogsProductGroupFiltersAnyOf{}
	return &this
}

// GetAnyOf returns the AnyOf field value if set, zero value otherwise.
func (o *CatalogsProductGroupFiltersAnyOf) GetAnyOf() []CatalogsProductGroupFilterKeys {
	if o == nil || o.AnyOf == nil {
		var ret []CatalogsProductGroupFilterKeys
		return ret
	}
	return o.AnyOf
}

// GetAnyOfOk returns a tuple with the AnyOf field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsProductGroupFiltersAnyOf) GetAnyOfOk() ([]CatalogsProductGroupFilterKeys, bool) {
	if o == nil || o.AnyOf == nil {
		return nil, false
	}
	return o.AnyOf, true
}

// HasAnyOf returns a boolean if a field has been set.
func (o *CatalogsProductGroupFiltersAnyOf) HasAnyOf() bool {
	if o != nil && o.AnyOf != nil {
		return true
	}

	return false
}

// SetAnyOf gets a reference to the given []CatalogsProductGroupFilterKeys and assigns it to the AnyOf field.
func (o *CatalogsProductGroupFiltersAnyOf) SetAnyOf(v []CatalogsProductGroupFilterKeys) {
	o.AnyOf = v
}

func (o CatalogsProductGroupFiltersAnyOf) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.AnyOf != nil {
		toSerialize["any_of"] = o.AnyOf
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsProductGroupFiltersAnyOf struct {
	value *CatalogsProductGroupFiltersAnyOf
	isSet bool
}

func (v NullableCatalogsProductGroupFiltersAnyOf) Get() *CatalogsProductGroupFiltersAnyOf {
	return v.value
}

func (v *NullableCatalogsProductGroupFiltersAnyOf) Set(val *CatalogsProductGroupFiltersAnyOf) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsProductGroupFiltersAnyOf) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsProductGroupFiltersAnyOf) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsProductGroupFiltersAnyOf(val *CatalogsProductGroupFiltersAnyOf) *NullableCatalogsProductGroupFiltersAnyOf {
	return &NullableCatalogsProductGroupFiltersAnyOf{value: val, isSet: true}
}

func (v NullableCatalogsProductGroupFiltersAnyOf) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsProductGroupFiltersAnyOf) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


