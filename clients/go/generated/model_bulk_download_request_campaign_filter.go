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

// checks if the BulkDownloadRequestCampaignFilter type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &BulkDownloadRequestCampaignFilter{}

// BulkDownloadRequestCampaignFilter struct for BulkDownloadRequestCampaignFilter
type BulkDownloadRequestCampaignFilter struct {
	// Unix UTC timestamp.
	StartTime *string `json:"start_time,omitempty"`
	// Unix UTC timestamp.
	EndTime *string `json:"end_time,omitempty"`
	// Campaign name
	Name *string `json:"name,omitempty"`
	CampaignStatus []CampaignSummaryStatus `json:"campaign_status,omitempty"`
	ObjectiveType []ObjectiveType `json:"objective_type,omitempty"`
}

// NewBulkDownloadRequestCampaignFilter instantiates a new BulkDownloadRequestCampaignFilter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewBulkDownloadRequestCampaignFilter() *BulkDownloadRequestCampaignFilter {
	this := BulkDownloadRequestCampaignFilter{}
	return &this
}

// NewBulkDownloadRequestCampaignFilterWithDefaults instantiates a new BulkDownloadRequestCampaignFilter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewBulkDownloadRequestCampaignFilterWithDefaults() *BulkDownloadRequestCampaignFilter {
	this := BulkDownloadRequestCampaignFilter{}
	return &this
}

// GetStartTime returns the StartTime field value if set, zero value otherwise.
func (o *BulkDownloadRequestCampaignFilter) GetStartTime() string {
	if o == nil || IsNil(o.StartTime) {
		var ret string
		return ret
	}
	return *o.StartTime
}

// GetStartTimeOk returns a tuple with the StartTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BulkDownloadRequestCampaignFilter) GetStartTimeOk() (*string, bool) {
	if o == nil || IsNil(o.StartTime) {
		return nil, false
	}
	return o.StartTime, true
}

// HasStartTime returns a boolean if a field has been set.
func (o *BulkDownloadRequestCampaignFilter) HasStartTime() bool {
	if o != nil && !IsNil(o.StartTime) {
		return true
	}

	return false
}

// SetStartTime gets a reference to the given string and assigns it to the StartTime field.
func (o *BulkDownloadRequestCampaignFilter) SetStartTime(v string) {
	o.StartTime = &v
}

// GetEndTime returns the EndTime field value if set, zero value otherwise.
func (o *BulkDownloadRequestCampaignFilter) GetEndTime() string {
	if o == nil || IsNil(o.EndTime) {
		var ret string
		return ret
	}
	return *o.EndTime
}

// GetEndTimeOk returns a tuple with the EndTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BulkDownloadRequestCampaignFilter) GetEndTimeOk() (*string, bool) {
	if o == nil || IsNil(o.EndTime) {
		return nil, false
	}
	return o.EndTime, true
}

// HasEndTime returns a boolean if a field has been set.
func (o *BulkDownloadRequestCampaignFilter) HasEndTime() bool {
	if o != nil && !IsNil(o.EndTime) {
		return true
	}

	return false
}

// SetEndTime gets a reference to the given string and assigns it to the EndTime field.
func (o *BulkDownloadRequestCampaignFilter) SetEndTime(v string) {
	o.EndTime = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *BulkDownloadRequestCampaignFilter) GetName() string {
	if o == nil || IsNil(o.Name) {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BulkDownloadRequestCampaignFilter) GetNameOk() (*string, bool) {
	if o == nil || IsNil(o.Name) {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *BulkDownloadRequestCampaignFilter) HasName() bool {
	if o != nil && !IsNil(o.Name) {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *BulkDownloadRequestCampaignFilter) SetName(v string) {
	o.Name = &v
}

// GetCampaignStatus returns the CampaignStatus field value if set, zero value otherwise.
func (o *BulkDownloadRequestCampaignFilter) GetCampaignStatus() []CampaignSummaryStatus {
	if o == nil || IsNil(o.CampaignStatus) {
		var ret []CampaignSummaryStatus
		return ret
	}
	return o.CampaignStatus
}

// GetCampaignStatusOk returns a tuple with the CampaignStatus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BulkDownloadRequestCampaignFilter) GetCampaignStatusOk() ([]CampaignSummaryStatus, bool) {
	if o == nil || IsNil(o.CampaignStatus) {
		return nil, false
	}
	return o.CampaignStatus, true
}

// HasCampaignStatus returns a boolean if a field has been set.
func (o *BulkDownloadRequestCampaignFilter) HasCampaignStatus() bool {
	if o != nil && !IsNil(o.CampaignStatus) {
		return true
	}

	return false
}

// SetCampaignStatus gets a reference to the given []CampaignSummaryStatus and assigns it to the CampaignStatus field.
func (o *BulkDownloadRequestCampaignFilter) SetCampaignStatus(v []CampaignSummaryStatus) {
	o.CampaignStatus = v
}

// GetObjectiveType returns the ObjectiveType field value if set, zero value otherwise.
func (o *BulkDownloadRequestCampaignFilter) GetObjectiveType() []ObjectiveType {
	if o == nil || IsNil(o.ObjectiveType) {
		var ret []ObjectiveType
		return ret
	}
	return o.ObjectiveType
}

// GetObjectiveTypeOk returns a tuple with the ObjectiveType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BulkDownloadRequestCampaignFilter) GetObjectiveTypeOk() ([]ObjectiveType, bool) {
	if o == nil || IsNil(o.ObjectiveType) {
		return nil, false
	}
	return o.ObjectiveType, true
}

// HasObjectiveType returns a boolean if a field has been set.
func (o *BulkDownloadRequestCampaignFilter) HasObjectiveType() bool {
	if o != nil && !IsNil(o.ObjectiveType) {
		return true
	}

	return false
}

// SetObjectiveType gets a reference to the given []ObjectiveType and assigns it to the ObjectiveType field.
func (o *BulkDownloadRequestCampaignFilter) SetObjectiveType(v []ObjectiveType) {
	o.ObjectiveType = v
}

func (o BulkDownloadRequestCampaignFilter) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o BulkDownloadRequestCampaignFilter) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.StartTime) {
		toSerialize["start_time"] = o.StartTime
	}
	if !IsNil(o.EndTime) {
		toSerialize["end_time"] = o.EndTime
	}
	if !IsNil(o.Name) {
		toSerialize["name"] = o.Name
	}
	if !IsNil(o.CampaignStatus) {
		toSerialize["campaign_status"] = o.CampaignStatus
	}
	if !IsNil(o.ObjectiveType) {
		toSerialize["objective_type"] = o.ObjectiveType
	}
	return toSerialize, nil
}

type NullableBulkDownloadRequestCampaignFilter struct {
	value *BulkDownloadRequestCampaignFilter
	isSet bool
}

func (v NullableBulkDownloadRequestCampaignFilter) Get() *BulkDownloadRequestCampaignFilter {
	return v.value
}

func (v *NullableBulkDownloadRequestCampaignFilter) Set(val *BulkDownloadRequestCampaignFilter) {
	v.value = val
	v.isSet = true
}

func (v NullableBulkDownloadRequestCampaignFilter) IsSet() bool {
	return v.isSet
}

func (v *NullableBulkDownloadRequestCampaignFilter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableBulkDownloadRequestCampaignFilter(val *BulkDownloadRequestCampaignFilter) *NullableBulkDownloadRequestCampaignFilter {
	return &NullableBulkDownloadRequestCampaignFilter{value: val, isSet: true}
}

func (v NullableBulkDownloadRequestCampaignFilter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableBulkDownloadRequestCampaignFilter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

