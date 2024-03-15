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

// checks if the AdsAnalyticsGetAsyncResponse type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &AdsAnalyticsGetAsyncResponse{}

// AdsAnalyticsGetAsyncResponse struct for AdsAnalyticsGetAsyncResponse
type AdsAnalyticsGetAsyncResponse struct {
	ReportStatus *BulkReportingJobStatus `json:"report_status,omitempty"`
	Url NullableString `json:"url,omitempty"`
	Size NullableFloat32 `json:"size,omitempty"`
}

// NewAdsAnalyticsGetAsyncResponse instantiates a new AdsAnalyticsGetAsyncResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdsAnalyticsGetAsyncResponse() *AdsAnalyticsGetAsyncResponse {
	this := AdsAnalyticsGetAsyncResponse{}
	return &this
}

// NewAdsAnalyticsGetAsyncResponseWithDefaults instantiates a new AdsAnalyticsGetAsyncResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdsAnalyticsGetAsyncResponseWithDefaults() *AdsAnalyticsGetAsyncResponse {
	this := AdsAnalyticsGetAsyncResponse{}
	return &this
}

// GetReportStatus returns the ReportStatus field value if set, zero value otherwise.
func (o *AdsAnalyticsGetAsyncResponse) GetReportStatus() BulkReportingJobStatus {
	if o == nil || IsNil(o.ReportStatus) {
		var ret BulkReportingJobStatus
		return ret
	}
	return *o.ReportStatus
}

// GetReportStatusOk returns a tuple with the ReportStatus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsGetAsyncResponse) GetReportStatusOk() (*BulkReportingJobStatus, bool) {
	if o == nil || IsNil(o.ReportStatus) {
		return nil, false
	}
	return o.ReportStatus, true
}

// HasReportStatus returns a boolean if a field has been set.
func (o *AdsAnalyticsGetAsyncResponse) HasReportStatus() bool {
	if o != nil && !IsNil(o.ReportStatus) {
		return true
	}

	return false
}

// SetReportStatus gets a reference to the given BulkReportingJobStatus and assigns it to the ReportStatus field.
func (o *AdsAnalyticsGetAsyncResponse) SetReportStatus(v BulkReportingJobStatus) {
	o.ReportStatus = &v
}

// GetUrl returns the Url field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdsAnalyticsGetAsyncResponse) GetUrl() string {
	if o == nil || IsNil(o.Url.Get()) {
		var ret string
		return ret
	}
	return *o.Url.Get()
}

// GetUrlOk returns a tuple with the Url field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdsAnalyticsGetAsyncResponse) GetUrlOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Url.Get(), o.Url.IsSet()
}

// HasUrl returns a boolean if a field has been set.
func (o *AdsAnalyticsGetAsyncResponse) HasUrl() bool {
	if o != nil && o.Url.IsSet() {
		return true
	}

	return false
}

// SetUrl gets a reference to the given NullableString and assigns it to the Url field.
func (o *AdsAnalyticsGetAsyncResponse) SetUrl(v string) {
	o.Url.Set(&v)
}
// SetUrlNil sets the value for Url to be an explicit nil
func (o *AdsAnalyticsGetAsyncResponse) SetUrlNil() {
	o.Url.Set(nil)
}

// UnsetUrl ensures that no value is present for Url, not even an explicit nil
func (o *AdsAnalyticsGetAsyncResponse) UnsetUrl() {
	o.Url.Unset()
}

// GetSize returns the Size field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdsAnalyticsGetAsyncResponse) GetSize() float32 {
	if o == nil || IsNil(o.Size.Get()) {
		var ret float32
		return ret
	}
	return *o.Size.Get()
}

// GetSizeOk returns a tuple with the Size field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdsAnalyticsGetAsyncResponse) GetSizeOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return o.Size.Get(), o.Size.IsSet()
}

// HasSize returns a boolean if a field has been set.
func (o *AdsAnalyticsGetAsyncResponse) HasSize() bool {
	if o != nil && o.Size.IsSet() {
		return true
	}

	return false
}

// SetSize gets a reference to the given NullableFloat32 and assigns it to the Size field.
func (o *AdsAnalyticsGetAsyncResponse) SetSize(v float32) {
	o.Size.Set(&v)
}
// SetSizeNil sets the value for Size to be an explicit nil
func (o *AdsAnalyticsGetAsyncResponse) SetSizeNil() {
	o.Size.Set(nil)
}

// UnsetSize ensures that no value is present for Size, not even an explicit nil
func (o *AdsAnalyticsGetAsyncResponse) UnsetSize() {
	o.Size.Unset()
}

func (o AdsAnalyticsGetAsyncResponse) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o AdsAnalyticsGetAsyncResponse) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.ReportStatus) {
		toSerialize["report_status"] = o.ReportStatus
	}
	if o.Url.IsSet() {
		toSerialize["url"] = o.Url.Get()
	}
	if o.Size.IsSet() {
		toSerialize["size"] = o.Size.Get()
	}
	return toSerialize, nil
}

type NullableAdsAnalyticsGetAsyncResponse struct {
	value *AdsAnalyticsGetAsyncResponse
	isSet bool
}

func (v NullableAdsAnalyticsGetAsyncResponse) Get() *AdsAnalyticsGetAsyncResponse {
	return v.value
}

func (v *NullableAdsAnalyticsGetAsyncResponse) Set(val *AdsAnalyticsGetAsyncResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableAdsAnalyticsGetAsyncResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableAdsAnalyticsGetAsyncResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdsAnalyticsGetAsyncResponse(val *AdsAnalyticsGetAsyncResponse) *NullableAdsAnalyticsGetAsyncResponse {
	return &NullableAdsAnalyticsGetAsyncResponse{value: val, isSet: true}
}

func (v NullableAdsAnalyticsGetAsyncResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdsAnalyticsGetAsyncResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

