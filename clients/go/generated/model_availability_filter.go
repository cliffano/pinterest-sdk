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

// AvailabilityFilter struct for AvailabilityFilter
type AvailabilityFilter struct {
	AVAILABILITY CatalogsProductGroupMultipleStringCriteria `json:"AVAILABILITY"`
}

// NewAvailabilityFilter instantiates a new AvailabilityFilter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAvailabilityFilter(aVAILABILITY CatalogsProductGroupMultipleStringCriteria) *AvailabilityFilter {
	this := AvailabilityFilter{}
	this.AVAILABILITY = aVAILABILITY
	return &this
}

// NewAvailabilityFilterWithDefaults instantiates a new AvailabilityFilter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAvailabilityFilterWithDefaults() *AvailabilityFilter {
	this := AvailabilityFilter{}
	return &this
}

// GetAVAILABILITY returns the AVAILABILITY field value
func (o *AvailabilityFilter) GetAVAILABILITY() CatalogsProductGroupMultipleStringCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringCriteria
		return ret
	}

	return o.AVAILABILITY
}

// GetAVAILABILITYOk returns a tuple with the AVAILABILITY field value
// and a boolean to check if the value has been set.
func (o *AvailabilityFilter) GetAVAILABILITYOk() (CatalogsProductGroupMultipleStringCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.AVAILABILITY, true
}

// SetAVAILABILITY sets field value
func (o *AvailabilityFilter) SetAVAILABILITY(v CatalogsProductGroupMultipleStringCriteria) {
	o.AVAILABILITY = v
}

func (o AvailabilityFilter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["AVAILABILITY"] = o.AVAILABILITY
	}
	return json.Marshal(toSerialize)
}

type NullableAvailabilityFilter struct {
	value *AvailabilityFilter
	isSet bool
}

func (v NullableAvailabilityFilter) Get() *AvailabilityFilter {
	return v.value
}

func (v *NullableAvailabilityFilter) Set(val *AvailabilityFilter) {
	v.value = val
	v.isSet = true
}

func (v NullableAvailabilityFilter) IsSet() bool {
	return v.isSet
}

func (v *NullableAvailabilityFilter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAvailabilityFilter(val *AvailabilityFilter) *NullableAvailabilityFilter {
	return &NullableAvailabilityFilter{value: val, isSet: true}
}

func (v NullableAvailabilityFilter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAvailabilityFilter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


