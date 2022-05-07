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

// AdsAnalyticsCreateAsyncResponse struct for AdsAnalyticsCreateAsyncResponse
type AdsAnalyticsCreateAsyncResponse struct {
	ReportStatus *string `json:"report_status,omitempty"`
	Token *string `json:"token,omitempty"`
	Message NullableString `json:"message,omitempty"`
}

// NewAdsAnalyticsCreateAsyncResponse instantiates a new AdsAnalyticsCreateAsyncResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdsAnalyticsCreateAsyncResponse() *AdsAnalyticsCreateAsyncResponse {
	this := AdsAnalyticsCreateAsyncResponse{}
	return &this
}

// NewAdsAnalyticsCreateAsyncResponseWithDefaults instantiates a new AdsAnalyticsCreateAsyncResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdsAnalyticsCreateAsyncResponseWithDefaults() *AdsAnalyticsCreateAsyncResponse {
	this := AdsAnalyticsCreateAsyncResponse{}
	return &this
}

// GetReportStatus returns the ReportStatus field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncResponse) GetReportStatus() string {
	if o == nil || o.ReportStatus == nil {
		var ret string
		return ret
	}
	return *o.ReportStatus
}

// GetReportStatusOk returns a tuple with the ReportStatus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncResponse) GetReportStatusOk() (*string, bool) {
	if o == nil || o.ReportStatus == nil {
		return nil, false
	}
	return o.ReportStatus, true
}

// HasReportStatus returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncResponse) HasReportStatus() bool {
	if o != nil && o.ReportStatus != nil {
		return true
	}

	return false
}

// SetReportStatus gets a reference to the given string and assigns it to the ReportStatus field.
func (o *AdsAnalyticsCreateAsyncResponse) SetReportStatus(v string) {
	o.ReportStatus = &v
}

// GetToken returns the Token field value if set, zero value otherwise.
func (o *AdsAnalyticsCreateAsyncResponse) GetToken() string {
	if o == nil || o.Token == nil {
		var ret string
		return ret
	}
	return *o.Token
}

// GetTokenOk returns a tuple with the Token field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsCreateAsyncResponse) GetTokenOk() (*string, bool) {
	if o == nil || o.Token == nil {
		return nil, false
	}
	return o.Token, true
}

// HasToken returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncResponse) HasToken() bool {
	if o != nil && o.Token != nil {
		return true
	}

	return false
}

// SetToken gets a reference to the given string and assigns it to the Token field.
func (o *AdsAnalyticsCreateAsyncResponse) SetToken(v string) {
	o.Token = &v
}

// GetMessage returns the Message field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdsAnalyticsCreateAsyncResponse) GetMessage() string {
	if o == nil || o.Message.Get() == nil {
		var ret string
		return ret
	}
	return *o.Message.Get()
}

// GetMessageOk returns a tuple with the Message field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdsAnalyticsCreateAsyncResponse) GetMessageOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Message.Get(), o.Message.IsSet()
}

// HasMessage returns a boolean if a field has been set.
func (o *AdsAnalyticsCreateAsyncResponse) HasMessage() bool {
	if o != nil && o.Message.IsSet() {
		return true
	}

	return false
}

// SetMessage gets a reference to the given NullableString and assigns it to the Message field.
func (o *AdsAnalyticsCreateAsyncResponse) SetMessage(v string) {
	o.Message.Set(&v)
}
// SetMessageNil sets the value for Message to be an explicit nil
func (o *AdsAnalyticsCreateAsyncResponse) SetMessageNil() {
	o.Message.Set(nil)
}

// UnsetMessage ensures that no value is present for Message, not even an explicit nil
func (o *AdsAnalyticsCreateAsyncResponse) UnsetMessage() {
	o.Message.Unset()
}

func (o AdsAnalyticsCreateAsyncResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ReportStatus != nil {
		toSerialize["report_status"] = o.ReportStatus
	}
	if o.Token != nil {
		toSerialize["token"] = o.Token
	}
	if o.Message.IsSet() {
		toSerialize["message"] = o.Message.Get()
	}
	return json.Marshal(toSerialize)
}

type NullableAdsAnalyticsCreateAsyncResponse struct {
	value *AdsAnalyticsCreateAsyncResponse
	isSet bool
}

func (v NullableAdsAnalyticsCreateAsyncResponse) Get() *AdsAnalyticsCreateAsyncResponse {
	return v.value
}

func (v *NullableAdsAnalyticsCreateAsyncResponse) Set(val *AdsAnalyticsCreateAsyncResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableAdsAnalyticsCreateAsyncResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableAdsAnalyticsCreateAsyncResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdsAnalyticsCreateAsyncResponse(val *AdsAnalyticsCreateAsyncResponse) *NullableAdsAnalyticsCreateAsyncResponse {
	return &NullableAdsAnalyticsCreateAsyncResponse{value: val, isSet: true}
}

func (v NullableAdsAnalyticsCreateAsyncResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdsAnalyticsCreateAsyncResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


