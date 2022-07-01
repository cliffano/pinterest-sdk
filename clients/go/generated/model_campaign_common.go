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

// CampaignCommon Campaign Data
type CampaignCommon struct {
	// Campaign's Advertiser ID.
	AdAccountId string `json:"ad_account_id"`
	// Campaign name.
	Name *string `json:"name,omitempty"`
	Status *EntityStatus `json:"status,omitempty"`
	// Campaign total spending cap.
	LifetimeSpendCap NullableInt32 `json:"lifetime_spend_cap,omitempty"`
	// Campaign daily spending cap.
	DailySpendCap NullableInt32 `json:"daily_spend_cap,omitempty"`
	// Order line ID that appears on the invoice.
	OrderLineId NullableString `json:"order_line_id,omitempty"`
	TrackingUrls TrackingUrls `json:"tracking_urls,omitempty"`
	// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	StartTime NullableInt32 `json:"start_time,omitempty"`
	// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	EndTime NullableInt32 `json:"end_time,omitempty"`
}

// NewCampaignCommon instantiates a new CampaignCommon object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCampaignCommon(adAccountId string) *CampaignCommon {
	this := CampaignCommon{}
	this.AdAccountId = adAccountId
	var status EntityStatus = "ACTIVE"
	this.Status = &status
	return &this
}

// NewCampaignCommonWithDefaults instantiates a new CampaignCommon object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCampaignCommonWithDefaults() *CampaignCommon {
	this := CampaignCommon{}
	var status EntityStatus = "ACTIVE"
	this.Status = &status
	return &this
}

// GetAdAccountId returns the AdAccountId field value
func (o *CampaignCommon) GetAdAccountId() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.AdAccountId
}

// GetAdAccountIdOk returns a tuple with the AdAccountId field value
// and a boolean to check if the value has been set.
func (o *CampaignCommon) GetAdAccountIdOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.AdAccountId, true
}

// SetAdAccountId sets field value
func (o *CampaignCommon) SetAdAccountId(v string) {
	o.AdAccountId = v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *CampaignCommon) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CampaignCommon) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *CampaignCommon) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *CampaignCommon) SetName(v string) {
	o.Name = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *CampaignCommon) GetStatus() EntityStatus {
	if o == nil || o.Status == nil {
		var ret EntityStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CampaignCommon) GetStatusOk() (*EntityStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *CampaignCommon) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given EntityStatus and assigns it to the Status field.
func (o *CampaignCommon) SetStatus(v EntityStatus) {
	o.Status = &v
}

// GetLifetimeSpendCap returns the LifetimeSpendCap field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CampaignCommon) GetLifetimeSpendCap() int32 {
	if o == nil || o.LifetimeSpendCap.Get() == nil {
		var ret int32
		return ret
	}
	return *o.LifetimeSpendCap.Get()
}

// GetLifetimeSpendCapOk returns a tuple with the LifetimeSpendCap field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CampaignCommon) GetLifetimeSpendCapOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.LifetimeSpendCap.Get(), o.LifetimeSpendCap.IsSet()
}

// HasLifetimeSpendCap returns a boolean if a field has been set.
func (o *CampaignCommon) HasLifetimeSpendCap() bool {
	if o != nil && o.LifetimeSpendCap.IsSet() {
		return true
	}

	return false
}

// SetLifetimeSpendCap gets a reference to the given NullableInt32 and assigns it to the LifetimeSpendCap field.
func (o *CampaignCommon) SetLifetimeSpendCap(v int32) {
	o.LifetimeSpendCap.Set(&v)
}
// SetLifetimeSpendCapNil sets the value for LifetimeSpendCap to be an explicit nil
func (o *CampaignCommon) SetLifetimeSpendCapNil() {
	o.LifetimeSpendCap.Set(nil)
}

// UnsetLifetimeSpendCap ensures that no value is present for LifetimeSpendCap, not even an explicit nil
func (o *CampaignCommon) UnsetLifetimeSpendCap() {
	o.LifetimeSpendCap.Unset()
}

// GetDailySpendCap returns the DailySpendCap field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CampaignCommon) GetDailySpendCap() int32 {
	if o == nil || o.DailySpendCap.Get() == nil {
		var ret int32
		return ret
	}
	return *o.DailySpendCap.Get()
}

// GetDailySpendCapOk returns a tuple with the DailySpendCap field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CampaignCommon) GetDailySpendCapOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.DailySpendCap.Get(), o.DailySpendCap.IsSet()
}

// HasDailySpendCap returns a boolean if a field has been set.
func (o *CampaignCommon) HasDailySpendCap() bool {
	if o != nil && o.DailySpendCap.IsSet() {
		return true
	}

	return false
}

// SetDailySpendCap gets a reference to the given NullableInt32 and assigns it to the DailySpendCap field.
func (o *CampaignCommon) SetDailySpendCap(v int32) {
	o.DailySpendCap.Set(&v)
}
// SetDailySpendCapNil sets the value for DailySpendCap to be an explicit nil
func (o *CampaignCommon) SetDailySpendCapNil() {
	o.DailySpendCap.Set(nil)
}

// UnsetDailySpendCap ensures that no value is present for DailySpendCap, not even an explicit nil
func (o *CampaignCommon) UnsetDailySpendCap() {
	o.DailySpendCap.Unset()
}

// GetOrderLineId returns the OrderLineId field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CampaignCommon) GetOrderLineId() string {
	if o == nil || o.OrderLineId.Get() == nil {
		var ret string
		return ret
	}
	return *o.OrderLineId.Get()
}

// GetOrderLineIdOk returns a tuple with the OrderLineId field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CampaignCommon) GetOrderLineIdOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.OrderLineId.Get(), o.OrderLineId.IsSet()
}

// HasOrderLineId returns a boolean if a field has been set.
func (o *CampaignCommon) HasOrderLineId() bool {
	if o != nil && o.OrderLineId.IsSet() {
		return true
	}

	return false
}

// SetOrderLineId gets a reference to the given NullableString and assigns it to the OrderLineId field.
func (o *CampaignCommon) SetOrderLineId(v string) {
	o.OrderLineId.Set(&v)
}
// SetOrderLineIdNil sets the value for OrderLineId to be an explicit nil
func (o *CampaignCommon) SetOrderLineIdNil() {
	o.OrderLineId.Set(nil)
}

// UnsetOrderLineId ensures that no value is present for OrderLineId, not even an explicit nil
func (o *CampaignCommon) UnsetOrderLineId() {
	o.OrderLineId.Unset()
}

// GetTrackingUrls returns the TrackingUrls field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CampaignCommon) GetTrackingUrls() TrackingUrls {
	if o == nil || o.TrackingUrls.Get() == nil {
		var ret TrackingUrls
		return ret
	}
	return *o.TrackingUrls.Get()
}

// GetTrackingUrlsOk returns a tuple with the TrackingUrls field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CampaignCommon) GetTrackingUrlsOk() (*TrackingUrls, bool) {
	if o == nil  {
		return nil, false
	}
	return o.TrackingUrls.Get(), o.TrackingUrls.IsSet()
}

// HasTrackingUrls returns a boolean if a field has been set.
func (o *CampaignCommon) HasTrackingUrls() bool {
	if o != nil && o.TrackingUrls.IsSet() {
		return true
	}

	return false
}

// SetTrackingUrls gets a reference to the given TrackingUrls and assigns it to the TrackingUrls field.
func (o *CampaignCommon) SetTrackingUrls(v TrackingUrls) {
	o.TrackingUrls.Set(&v)
}
// SetTrackingUrlsNil sets the value for TrackingUrls to be an explicit nil
func (o *CampaignCommon) SetTrackingUrlsNil() {
	o.TrackingUrls.Set(nil)
}

// UnsetTrackingUrls ensures that no value is present for TrackingUrls, not even an explicit nil
func (o *CampaignCommon) UnsetTrackingUrls() {
	o.TrackingUrls.Unset()
}

// GetStartTime returns the StartTime field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CampaignCommon) GetStartTime() int32 {
	if o == nil || o.StartTime.Get() == nil {
		var ret int32
		return ret
	}
	return *o.StartTime.Get()
}

// GetStartTimeOk returns a tuple with the StartTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CampaignCommon) GetStartTimeOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.StartTime.Get(), o.StartTime.IsSet()
}

// HasStartTime returns a boolean if a field has been set.
func (o *CampaignCommon) HasStartTime() bool {
	if o != nil && o.StartTime.IsSet() {
		return true
	}

	return false
}

// SetStartTime gets a reference to the given NullableInt32 and assigns it to the StartTime field.
func (o *CampaignCommon) SetStartTime(v int32) {
	o.StartTime.Set(&v)
}
// SetStartTimeNil sets the value for StartTime to be an explicit nil
func (o *CampaignCommon) SetStartTimeNil() {
	o.StartTime.Set(nil)
}

// UnsetStartTime ensures that no value is present for StartTime, not even an explicit nil
func (o *CampaignCommon) UnsetStartTime() {
	o.StartTime.Unset()
}

// GetEndTime returns the EndTime field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CampaignCommon) GetEndTime() int32 {
	if o == nil || o.EndTime.Get() == nil {
		var ret int32
		return ret
	}
	return *o.EndTime.Get()
}

// GetEndTimeOk returns a tuple with the EndTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CampaignCommon) GetEndTimeOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return o.EndTime.Get(), o.EndTime.IsSet()
}

// HasEndTime returns a boolean if a field has been set.
func (o *CampaignCommon) HasEndTime() bool {
	if o != nil && o.EndTime.IsSet() {
		return true
	}

	return false
}

// SetEndTime gets a reference to the given NullableInt32 and assigns it to the EndTime field.
func (o *CampaignCommon) SetEndTime(v int32) {
	o.EndTime.Set(&v)
}
// SetEndTimeNil sets the value for EndTime to be an explicit nil
func (o *CampaignCommon) SetEndTimeNil() {
	o.EndTime.Set(nil)
}

// UnsetEndTime ensures that no value is present for EndTime, not even an explicit nil
func (o *CampaignCommon) UnsetEndTime() {
	o.EndTime.Unset()
}

func (o CampaignCommon) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["ad_account_id"] = o.AdAccountId
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.LifetimeSpendCap.IsSet() {
		toSerialize["lifetime_spend_cap"] = o.LifetimeSpendCap.Get()
	}
	if o.DailySpendCap.IsSet() {
		toSerialize["daily_spend_cap"] = o.DailySpendCap.Get()
	}
	if o.OrderLineId.IsSet() {
		toSerialize["order_line_id"] = o.OrderLineId.Get()
	}
	if o.TrackingUrls.IsSet() {
		toSerialize["tracking_urls"] = o.TrackingUrls.Get()
	}
	if o.StartTime.IsSet() {
		toSerialize["start_time"] = o.StartTime.Get()
	}
	if o.EndTime.IsSet() {
		toSerialize["end_time"] = o.EndTime.Get()
	}
	return json.Marshal(toSerialize)
}

type NullableCampaignCommon struct {
	value *CampaignCommon
	isSet bool
}

func (v NullableCampaignCommon) Get() *CampaignCommon {
	return v.value
}

func (v *NullableCampaignCommon) Set(val *CampaignCommon) {
	v.value = val
	v.isSet = true
}

func (v NullableCampaignCommon) IsSet() bool {
	return v.isSet
}

func (v *NullableCampaignCommon) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCampaignCommon(val *CampaignCommon) *NullableCampaignCommon {
	return &NullableCampaignCommon{value: val, isSet: true}
}

func (v NullableCampaignCommon) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCampaignCommon) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


