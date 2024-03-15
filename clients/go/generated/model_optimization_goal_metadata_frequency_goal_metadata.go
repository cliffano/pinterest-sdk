/*
Pinterest REST API

Pinterest's REST API

API version: 5.12.0
Contact: blah+oapicf@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// checks if the OptimizationGoalMetadataFrequencyGoalMetadata type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &OptimizationGoalMetadataFrequencyGoalMetadata{}

// OptimizationGoalMetadataFrequencyGoalMetadata struct for OptimizationGoalMetadataFrequencyGoalMetadata
type OptimizationGoalMetadataFrequencyGoalMetadata struct {
	Frequency *int32 `json:"frequency,omitempty"`
	// User entity counts time range
	Timerange *string `json:"timerange,omitempty"`
}

// NewOptimizationGoalMetadataFrequencyGoalMetadata instantiates a new OptimizationGoalMetadataFrequencyGoalMetadata object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOptimizationGoalMetadataFrequencyGoalMetadata() *OptimizationGoalMetadataFrequencyGoalMetadata {
	this := OptimizationGoalMetadataFrequencyGoalMetadata{}
	return &this
}

// NewOptimizationGoalMetadataFrequencyGoalMetadataWithDefaults instantiates a new OptimizationGoalMetadataFrequencyGoalMetadata object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOptimizationGoalMetadataFrequencyGoalMetadataWithDefaults() *OptimizationGoalMetadataFrequencyGoalMetadata {
	this := OptimizationGoalMetadataFrequencyGoalMetadata{}
	return &this
}

// GetFrequency returns the Frequency field value if set, zero value otherwise.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) GetFrequency() int32 {
	if o == nil || IsNil(o.Frequency) {
		var ret int32
		return ret
	}
	return *o.Frequency
}

// GetFrequencyOk returns a tuple with the Frequency field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) GetFrequencyOk() (*int32, bool) {
	if o == nil || IsNil(o.Frequency) {
		return nil, false
	}
	return o.Frequency, true
}

// HasFrequency returns a boolean if a field has been set.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) HasFrequency() bool {
	if o != nil && !IsNil(o.Frequency) {
		return true
	}

	return false
}

// SetFrequency gets a reference to the given int32 and assigns it to the Frequency field.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) SetFrequency(v int32) {
	o.Frequency = &v
}

// GetTimerange returns the Timerange field value if set, zero value otherwise.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) GetTimerange() string {
	if o == nil || IsNil(o.Timerange) {
		var ret string
		return ret
	}
	return *o.Timerange
}

// GetTimerangeOk returns a tuple with the Timerange field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) GetTimerangeOk() (*string, bool) {
	if o == nil || IsNil(o.Timerange) {
		return nil, false
	}
	return o.Timerange, true
}

// HasTimerange returns a boolean if a field has been set.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) HasTimerange() bool {
	if o != nil && !IsNil(o.Timerange) {
		return true
	}

	return false
}

// SetTimerange gets a reference to the given string and assigns it to the Timerange field.
func (o *OptimizationGoalMetadataFrequencyGoalMetadata) SetTimerange(v string) {
	o.Timerange = &v
}

func (o OptimizationGoalMetadataFrequencyGoalMetadata) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o OptimizationGoalMetadataFrequencyGoalMetadata) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Frequency) {
		toSerialize["frequency"] = o.Frequency
	}
	if !IsNil(o.Timerange) {
		toSerialize["timerange"] = o.Timerange
	}
	return toSerialize, nil
}

type NullableOptimizationGoalMetadataFrequencyGoalMetadata struct {
	value *OptimizationGoalMetadataFrequencyGoalMetadata
	isSet bool
}

func (v NullableOptimizationGoalMetadataFrequencyGoalMetadata) Get() *OptimizationGoalMetadataFrequencyGoalMetadata {
	return v.value
}

func (v *NullableOptimizationGoalMetadataFrequencyGoalMetadata) Set(val *OptimizationGoalMetadataFrequencyGoalMetadata) {
	v.value = val
	v.isSet = true
}

func (v NullableOptimizationGoalMetadataFrequencyGoalMetadata) IsSet() bool {
	return v.isSet
}

func (v *NullableOptimizationGoalMetadataFrequencyGoalMetadata) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOptimizationGoalMetadataFrequencyGoalMetadata(val *OptimizationGoalMetadataFrequencyGoalMetadata) *NullableOptimizationGoalMetadataFrequencyGoalMetadata {
	return &NullableOptimizationGoalMetadataFrequencyGoalMetadata{value: val, isSet: true}
}

func (v NullableOptimizationGoalMetadataFrequencyGoalMetadata) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOptimizationGoalMetadataFrequencyGoalMetadata) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


