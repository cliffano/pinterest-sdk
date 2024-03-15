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

// checks if the OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows{}

// OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows struct for OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows
type OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows struct {
	ClickWindowDays *int32 `json:"click_window_days,omitempty"`
	EngagementWindowDays *int32 `json:"engagement_window_days,omitempty"`
	ViewWindowDays *int32 `json:"view_window_days,omitempty"`
}

// NewOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows instantiates a new OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows() *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows {
	this := OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows{}
	return &this
}

// NewOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowsWithDefaults instantiates a new OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowsWithDefaults() *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows {
	this := OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows{}
	return &this
}

// GetClickWindowDays returns the ClickWindowDays field value if set, zero value otherwise.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) GetClickWindowDays() int32 {
	if o == nil || IsNil(o.ClickWindowDays) {
		var ret int32
		return ret
	}
	return *o.ClickWindowDays
}

// GetClickWindowDaysOk returns a tuple with the ClickWindowDays field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) GetClickWindowDaysOk() (*int32, bool) {
	if o == nil || IsNil(o.ClickWindowDays) {
		return nil, false
	}
	return o.ClickWindowDays, true
}

// HasClickWindowDays returns a boolean if a field has been set.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) HasClickWindowDays() bool {
	if o != nil && !IsNil(o.ClickWindowDays) {
		return true
	}

	return false
}

// SetClickWindowDays gets a reference to the given int32 and assigns it to the ClickWindowDays field.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) SetClickWindowDays(v int32) {
	o.ClickWindowDays = &v
}

// GetEngagementWindowDays returns the EngagementWindowDays field value if set, zero value otherwise.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) GetEngagementWindowDays() int32 {
	if o == nil || IsNil(o.EngagementWindowDays) {
		var ret int32
		return ret
	}
	return *o.EngagementWindowDays
}

// GetEngagementWindowDaysOk returns a tuple with the EngagementWindowDays field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) GetEngagementWindowDaysOk() (*int32, bool) {
	if o == nil || IsNil(o.EngagementWindowDays) {
		return nil, false
	}
	return o.EngagementWindowDays, true
}

// HasEngagementWindowDays returns a boolean if a field has been set.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) HasEngagementWindowDays() bool {
	if o != nil && !IsNil(o.EngagementWindowDays) {
		return true
	}

	return false
}

// SetEngagementWindowDays gets a reference to the given int32 and assigns it to the EngagementWindowDays field.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) SetEngagementWindowDays(v int32) {
	o.EngagementWindowDays = &v
}

// GetViewWindowDays returns the ViewWindowDays field value if set, zero value otherwise.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) GetViewWindowDays() int32 {
	if o == nil || IsNil(o.ViewWindowDays) {
		var ret int32
		return ret
	}
	return *o.ViewWindowDays
}

// GetViewWindowDaysOk returns a tuple with the ViewWindowDays field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) GetViewWindowDaysOk() (*int32, bool) {
	if o == nil || IsNil(o.ViewWindowDays) {
		return nil, false
	}
	return o.ViewWindowDays, true
}

// HasViewWindowDays returns a boolean if a field has been set.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) HasViewWindowDays() bool {
	if o != nil && !IsNil(o.ViewWindowDays) {
		return true
	}

	return false
}

// SetViewWindowDays gets a reference to the given int32 and assigns it to the ViewWindowDays field.
func (o *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) SetViewWindowDays(v int32) {
	o.ViewWindowDays = &v
}

func (o OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.ClickWindowDays) {
		toSerialize["click_window_days"] = o.ClickWindowDays
	}
	if !IsNil(o.EngagementWindowDays) {
		toSerialize["engagement_window_days"] = o.EngagementWindowDays
	}
	if !IsNil(o.ViewWindowDays) {
		toSerialize["view_window_days"] = o.ViewWindowDays
	}
	return toSerialize, nil
}

type NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows struct {
	value *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows
	isSet bool
}

func (v NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) Get() *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows {
	return v.value
}

func (v *NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) Set(val *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) {
	v.value = val
	v.isSet = true
}

func (v NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) IsSet() bool {
	return v.isSet
}

func (v *NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows(val *OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) *NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows {
	return &NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows{value: val, isSet: true}
}

func (v NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


