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

// checks if the OptimizationGoalMetadataScrollupGoalMetadata type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &OptimizationGoalMetadataScrollupGoalMetadata{}

// OptimizationGoalMetadataScrollupGoalMetadata struct for OptimizationGoalMetadataScrollupGoalMetadata
type OptimizationGoalMetadataScrollupGoalMetadata struct {
	ScrollupGoalValueInMicroCurrency NullableString `json:"scrollup_goal_value_in_micro_currency,omitempty"`
}

// NewOptimizationGoalMetadataScrollupGoalMetadata instantiates a new OptimizationGoalMetadataScrollupGoalMetadata object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOptimizationGoalMetadataScrollupGoalMetadata() *OptimizationGoalMetadataScrollupGoalMetadata {
	this := OptimizationGoalMetadataScrollupGoalMetadata{}
	return &this
}

// NewOptimizationGoalMetadataScrollupGoalMetadataWithDefaults instantiates a new OptimizationGoalMetadataScrollupGoalMetadata object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOptimizationGoalMetadataScrollupGoalMetadataWithDefaults() *OptimizationGoalMetadataScrollupGoalMetadata {
	this := OptimizationGoalMetadataScrollupGoalMetadata{}
	return &this
}

// GetScrollupGoalValueInMicroCurrency returns the ScrollupGoalValueInMicroCurrency field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *OptimizationGoalMetadataScrollupGoalMetadata) GetScrollupGoalValueInMicroCurrency() string {
	if o == nil || IsNil(o.ScrollupGoalValueInMicroCurrency.Get()) {
		var ret string
		return ret
	}
	return *o.ScrollupGoalValueInMicroCurrency.Get()
}

// GetScrollupGoalValueInMicroCurrencyOk returns a tuple with the ScrollupGoalValueInMicroCurrency field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *OptimizationGoalMetadataScrollupGoalMetadata) GetScrollupGoalValueInMicroCurrencyOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.ScrollupGoalValueInMicroCurrency.Get(), o.ScrollupGoalValueInMicroCurrency.IsSet()
}

// HasScrollupGoalValueInMicroCurrency returns a boolean if a field has been set.
func (o *OptimizationGoalMetadataScrollupGoalMetadata) HasScrollupGoalValueInMicroCurrency() bool {
	if o != nil && o.ScrollupGoalValueInMicroCurrency.IsSet() {
		return true
	}

	return false
}

// SetScrollupGoalValueInMicroCurrency gets a reference to the given NullableString and assigns it to the ScrollupGoalValueInMicroCurrency field.
func (o *OptimizationGoalMetadataScrollupGoalMetadata) SetScrollupGoalValueInMicroCurrency(v string) {
	o.ScrollupGoalValueInMicroCurrency.Set(&v)
}
// SetScrollupGoalValueInMicroCurrencyNil sets the value for ScrollupGoalValueInMicroCurrency to be an explicit nil
func (o *OptimizationGoalMetadataScrollupGoalMetadata) SetScrollupGoalValueInMicroCurrencyNil() {
	o.ScrollupGoalValueInMicroCurrency.Set(nil)
}

// UnsetScrollupGoalValueInMicroCurrency ensures that no value is present for ScrollupGoalValueInMicroCurrency, not even an explicit nil
func (o *OptimizationGoalMetadataScrollupGoalMetadata) UnsetScrollupGoalValueInMicroCurrency() {
	o.ScrollupGoalValueInMicroCurrency.Unset()
}

func (o OptimizationGoalMetadataScrollupGoalMetadata) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o OptimizationGoalMetadataScrollupGoalMetadata) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if o.ScrollupGoalValueInMicroCurrency.IsSet() {
		toSerialize["scrollup_goal_value_in_micro_currency"] = o.ScrollupGoalValueInMicroCurrency.Get()
	}
	return toSerialize, nil
}

type NullableOptimizationGoalMetadataScrollupGoalMetadata struct {
	value *OptimizationGoalMetadataScrollupGoalMetadata
	isSet bool
}

func (v NullableOptimizationGoalMetadataScrollupGoalMetadata) Get() *OptimizationGoalMetadataScrollupGoalMetadata {
	return v.value
}

func (v *NullableOptimizationGoalMetadataScrollupGoalMetadata) Set(val *OptimizationGoalMetadataScrollupGoalMetadata) {
	v.value = val
	v.isSet = true
}

func (v NullableOptimizationGoalMetadataScrollupGoalMetadata) IsSet() bool {
	return v.isSet
}

func (v *NullableOptimizationGoalMetadataScrollupGoalMetadata) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOptimizationGoalMetadataScrollupGoalMetadata(val *OptimizationGoalMetadataScrollupGoalMetadata) *NullableOptimizationGoalMetadataScrollupGoalMetadata {
	return &NullableOptimizationGoalMetadataScrollupGoalMetadata{value: val, isSet: true}
}

func (v NullableOptimizationGoalMetadataScrollupGoalMetadata) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOptimizationGoalMetadataScrollupGoalMetadata) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

