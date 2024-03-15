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

// checks if the CampaignId type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CampaignId{}

// CampaignId struct for CampaignId
type CampaignId struct {
	// Campaign ID.
	Id *string `json:"id,omitempty"`
}

// NewCampaignId instantiates a new CampaignId object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCampaignId() *CampaignId {
	this := CampaignId{}
	return &this
}

// NewCampaignIdWithDefaults instantiates a new CampaignId object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCampaignIdWithDefaults() *CampaignId {
	this := CampaignId{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *CampaignId) GetId() string {
	if o == nil || IsNil(o.Id) {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CampaignId) GetIdOk() (*string, bool) {
	if o == nil || IsNil(o.Id) {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *CampaignId) HasId() bool {
	if o != nil && !IsNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *CampaignId) SetId(v string) {
	o.Id = &v
}

func (o CampaignId) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CampaignId) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	return toSerialize, nil
}

type NullableCampaignId struct {
	value *CampaignId
	isSet bool
}

func (v NullableCampaignId) Get() *CampaignId {
	return v.value
}

func (v *NullableCampaignId) Set(val *CampaignId) {
	v.value = val
	v.isSet = true
}

func (v NullableCampaignId) IsSet() bool {
	return v.isSet
}

func (v *NullableCampaignId) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCampaignId(val *CampaignId) *NullableCampaignId {
	return &NullableCampaignId{value: val, isSet: true}
}

func (v NullableCampaignId) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCampaignId) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


