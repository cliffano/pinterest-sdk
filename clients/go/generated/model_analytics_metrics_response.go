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

// AnalyticsMetricsResponse struct for AnalyticsMetricsResponse
type AnalyticsMetricsResponse struct {
	// Array with the requested daily metric records
	DailyMetrics []AnalyticsMetricsResponseDailyMetrics `json:"daily_metrics,omitempty"`
	// The metric name and value over the requested period for each requested metric
	SummaryMetrics *map[string]float32 `json:"summary_metrics,omitempty"`
}

// NewAnalyticsMetricsResponse instantiates a new AnalyticsMetricsResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAnalyticsMetricsResponse() *AnalyticsMetricsResponse {
	this := AnalyticsMetricsResponse{}
	return &this
}

// NewAnalyticsMetricsResponseWithDefaults instantiates a new AnalyticsMetricsResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAnalyticsMetricsResponseWithDefaults() *AnalyticsMetricsResponse {
	this := AnalyticsMetricsResponse{}
	return &this
}

// GetDailyMetrics returns the DailyMetrics field value if set, zero value otherwise.
func (o *AnalyticsMetricsResponse) GetDailyMetrics() []AnalyticsMetricsResponseDailyMetrics {
	if o == nil || o.DailyMetrics == nil {
		var ret []AnalyticsMetricsResponseDailyMetrics
		return ret
	}
	return o.DailyMetrics
}

// GetDailyMetricsOk returns a tuple with the DailyMetrics field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AnalyticsMetricsResponse) GetDailyMetricsOk() ([]AnalyticsMetricsResponseDailyMetrics, bool) {
	if o == nil || o.DailyMetrics == nil {
		return nil, false
	}
	return o.DailyMetrics, true
}

// HasDailyMetrics returns a boolean if a field has been set.
func (o *AnalyticsMetricsResponse) HasDailyMetrics() bool {
	if o != nil && o.DailyMetrics != nil {
		return true
	}

	return false
}

// SetDailyMetrics gets a reference to the given []AnalyticsMetricsResponseDailyMetrics and assigns it to the DailyMetrics field.
func (o *AnalyticsMetricsResponse) SetDailyMetrics(v []AnalyticsMetricsResponseDailyMetrics) {
	o.DailyMetrics = v
}

// GetSummaryMetrics returns the SummaryMetrics field value if set, zero value otherwise.
func (o *AnalyticsMetricsResponse) GetSummaryMetrics() map[string]float32 {
	if o == nil || o.SummaryMetrics == nil {
		var ret map[string]float32
		return ret
	}
	return *o.SummaryMetrics
}

// GetSummaryMetricsOk returns a tuple with the SummaryMetrics field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AnalyticsMetricsResponse) GetSummaryMetricsOk() (*map[string]float32, bool) {
	if o == nil || o.SummaryMetrics == nil {
		return nil, false
	}
	return o.SummaryMetrics, true
}

// HasSummaryMetrics returns a boolean if a field has been set.
func (o *AnalyticsMetricsResponse) HasSummaryMetrics() bool {
	if o != nil && o.SummaryMetrics != nil {
		return true
	}

	return false
}

// SetSummaryMetrics gets a reference to the given map[string]float32 and assigns it to the SummaryMetrics field.
func (o *AnalyticsMetricsResponse) SetSummaryMetrics(v map[string]float32) {
	o.SummaryMetrics = &v
}

func (o AnalyticsMetricsResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.DailyMetrics != nil {
		toSerialize["daily_metrics"] = o.DailyMetrics
	}
	if o.SummaryMetrics != nil {
		toSerialize["summary_metrics"] = o.SummaryMetrics
	}
	return json.Marshal(toSerialize)
}

type NullableAnalyticsMetricsResponse struct {
	value *AnalyticsMetricsResponse
	isSet bool
}

func (v NullableAnalyticsMetricsResponse) Get() *AnalyticsMetricsResponse {
	return v.value
}

func (v *NullableAnalyticsMetricsResponse) Set(val *AnalyticsMetricsResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableAnalyticsMetricsResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableAnalyticsMetricsResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAnalyticsMetricsResponse(val *AnalyticsMetricsResponse) *NullableAnalyticsMetricsResponse {
	return &NullableAnalyticsMetricsResponse{value: val, isSet: true}
}

func (v NullableAnalyticsMetricsResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAnalyticsMetricsResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


