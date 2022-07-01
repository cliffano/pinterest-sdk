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

// MediaUploadDetails Media upload details
type MediaUploadDetails struct {
	MediaId *string `json:"media_id,omitempty"`
	MediaType *MediaUploadType `json:"media_type,omitempty"`
	Status *MediaUploadStatus `json:"status,omitempty"`
}

// NewMediaUploadDetails instantiates a new MediaUploadDetails object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMediaUploadDetails() *MediaUploadDetails {
	this := MediaUploadDetails{}
	return &this
}

// NewMediaUploadDetailsWithDefaults instantiates a new MediaUploadDetails object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMediaUploadDetailsWithDefaults() *MediaUploadDetails {
	this := MediaUploadDetails{}
	return &this
}

// GetMediaId returns the MediaId field value if set, zero value otherwise.
func (o *MediaUploadDetails) GetMediaId() string {
	if o == nil || o.MediaId == nil {
		var ret string
		return ret
	}
	return *o.MediaId
}

// GetMediaIdOk returns a tuple with the MediaId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MediaUploadDetails) GetMediaIdOk() (*string, bool) {
	if o == nil || o.MediaId == nil {
		return nil, false
	}
	return o.MediaId, true
}

// HasMediaId returns a boolean if a field has been set.
func (o *MediaUploadDetails) HasMediaId() bool {
	if o != nil && o.MediaId != nil {
		return true
	}

	return false
}

// SetMediaId gets a reference to the given string and assigns it to the MediaId field.
func (o *MediaUploadDetails) SetMediaId(v string) {
	o.MediaId = &v
}

// GetMediaType returns the MediaType field value if set, zero value otherwise.
func (o *MediaUploadDetails) GetMediaType() MediaUploadType {
	if o == nil || o.MediaType == nil {
		var ret MediaUploadType
		return ret
	}
	return *o.MediaType
}

// GetMediaTypeOk returns a tuple with the MediaType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MediaUploadDetails) GetMediaTypeOk() (*MediaUploadType, bool) {
	if o == nil || o.MediaType == nil {
		return nil, false
	}
	return o.MediaType, true
}

// HasMediaType returns a boolean if a field has been set.
func (o *MediaUploadDetails) HasMediaType() bool {
	if o != nil && o.MediaType != nil {
		return true
	}

	return false
}

// SetMediaType gets a reference to the given MediaUploadType and assigns it to the MediaType field.
func (o *MediaUploadDetails) SetMediaType(v MediaUploadType) {
	o.MediaType = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *MediaUploadDetails) GetStatus() MediaUploadStatus {
	if o == nil || o.Status == nil {
		var ret MediaUploadStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MediaUploadDetails) GetStatusOk() (*MediaUploadStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *MediaUploadDetails) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given MediaUploadStatus and assigns it to the Status field.
func (o *MediaUploadDetails) SetStatus(v MediaUploadStatus) {
	o.Status = &v
}

func (o MediaUploadDetails) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.MediaId != nil {
		toSerialize["media_id"] = o.MediaId
	}
	if o.MediaType != nil {
		toSerialize["media_type"] = o.MediaType
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableMediaUploadDetails struct {
	value *MediaUploadDetails
	isSet bool
}

func (v NullableMediaUploadDetails) Get() *MediaUploadDetails {
	return v.value
}

func (v *NullableMediaUploadDetails) Set(val *MediaUploadDetails) {
	v.value = val
	v.isSet = true
}

func (v NullableMediaUploadDetails) IsSet() bool {
	return v.isSet
}

func (v *NullableMediaUploadDetails) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMediaUploadDetails(val *MediaUploadDetails) *NullableMediaUploadDetails {
	return &NullableMediaUploadDetails{value: val, isSet: true}
}

func (v NullableMediaUploadDetails) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMediaUploadDetails) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


