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

// CampaignResponseAllOf1 struct for CampaignResponseAllOf1
type CampaignResponseAllOf1 struct {
	ObjectiveType *ObjectiveType `json:"objective_type,omitempty"`
	// Campaign creation time. Unix timestamp in seconds.
	CreatedTime *int32 `json:"created_time,omitempty"`
	// UTC timestamp. Last update time.
	UpdatedTime *int32 `json:"updated_time,omitempty"`
	// Always \"campaign\".
	Type *string `json:"type,omitempty"`
}

// NewCampaignResponseAllOf1 instantiates a new CampaignResponseAllOf1 object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCampaignResponseAllOf1() *CampaignResponseAllOf1 {
	this := CampaignResponseAllOf1{}
	return &this
}

// NewCampaignResponseAllOf1WithDefaults instantiates a new CampaignResponseAllOf1 object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCampaignResponseAllOf1WithDefaults() *CampaignResponseAllOf1 {
	this := CampaignResponseAllOf1{}
	return &this
}

// GetObjectiveType returns the ObjectiveType field value if set, zero value otherwise.
func (o *CampaignResponseAllOf1) GetObjectiveType() ObjectiveType {
	if o == nil || o.ObjectiveType == nil {
		var ret ObjectiveType
		return ret
	}
	return *o.ObjectiveType
}

// GetObjectiveTypeOk returns a tuple with the ObjectiveType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CampaignResponseAllOf1) GetObjectiveTypeOk() (*ObjectiveType, bool) {
	if o == nil || o.ObjectiveType == nil {
		return nil, false
	}
	return o.ObjectiveType, true
}

// HasObjectiveType returns a boolean if a field has been set.
func (o *CampaignResponseAllOf1) HasObjectiveType() bool {
	if o != nil && o.ObjectiveType != nil {
		return true
	}

	return false
}

// SetObjectiveType gets a reference to the given ObjectiveType and assigns it to the ObjectiveType field.
func (o *CampaignResponseAllOf1) SetObjectiveType(v ObjectiveType) {
	o.ObjectiveType = &v
}

// GetCreatedTime returns the CreatedTime field value if set, zero value otherwise.
func (o *CampaignResponseAllOf1) GetCreatedTime() int32 {
	if o == nil || o.CreatedTime == nil {
		var ret int32
		return ret
	}
	return *o.CreatedTime
}

// GetCreatedTimeOk returns a tuple with the CreatedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CampaignResponseAllOf1) GetCreatedTimeOk() (*int32, bool) {
	if o == nil || o.CreatedTime == nil {
		return nil, false
	}
	return o.CreatedTime, true
}

// HasCreatedTime returns a boolean if a field has been set.
func (o *CampaignResponseAllOf1) HasCreatedTime() bool {
	if o != nil && o.CreatedTime != nil {
		return true
	}

	return false
}

// SetCreatedTime gets a reference to the given int32 and assigns it to the CreatedTime field.
func (o *CampaignResponseAllOf1) SetCreatedTime(v int32) {
	o.CreatedTime = &v
}

// GetUpdatedTime returns the UpdatedTime field value if set, zero value otherwise.
func (o *CampaignResponseAllOf1) GetUpdatedTime() int32 {
	if o == nil || o.UpdatedTime == nil {
		var ret int32
		return ret
	}
	return *o.UpdatedTime
}

// GetUpdatedTimeOk returns a tuple with the UpdatedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CampaignResponseAllOf1) GetUpdatedTimeOk() (*int32, bool) {
	if o == nil || o.UpdatedTime == nil {
		return nil, false
	}
	return o.UpdatedTime, true
}

// HasUpdatedTime returns a boolean if a field has been set.
func (o *CampaignResponseAllOf1) HasUpdatedTime() bool {
	if o != nil && o.UpdatedTime != nil {
		return true
	}

	return false
}

// SetUpdatedTime gets a reference to the given int32 and assigns it to the UpdatedTime field.
func (o *CampaignResponseAllOf1) SetUpdatedTime(v int32) {
	o.UpdatedTime = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *CampaignResponseAllOf1) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CampaignResponseAllOf1) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *CampaignResponseAllOf1) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *CampaignResponseAllOf1) SetType(v string) {
	o.Type = &v
}

func (o CampaignResponseAllOf1) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ObjectiveType != nil {
		toSerialize["objective_type"] = o.ObjectiveType
	}
	if o.CreatedTime != nil {
		toSerialize["created_time"] = o.CreatedTime
	}
	if o.UpdatedTime != nil {
		toSerialize["updated_time"] = o.UpdatedTime
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	return json.Marshal(toSerialize)
}

type NullableCampaignResponseAllOf1 struct {
	value *CampaignResponseAllOf1
	isSet bool
}

func (v NullableCampaignResponseAllOf1) Get() *CampaignResponseAllOf1 {
	return v.value
}

func (v *NullableCampaignResponseAllOf1) Set(val *CampaignResponseAllOf1) {
	v.value = val
	v.isSet = true
}

func (v NullableCampaignResponseAllOf1) IsSet() bool {
	return v.isSet
}

func (v *NullableCampaignResponseAllOf1) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCampaignResponseAllOf1(val *CampaignResponseAllOf1) *NullableCampaignResponseAllOf1 {
	return &NullableCampaignResponseAllOf1{value: val, isSet: true}
}

func (v NullableCampaignResponseAllOf1) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCampaignResponseAllOf1) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


