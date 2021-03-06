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

// PinMediaSourceImageBase64 Base64-encoded image media source
type PinMediaSourceImageBase64 struct {
	SourceType string `json:"source_type"`
	ContentType string `json:"content_type"`
	Data string `json:"data"`
}

// NewPinMediaSourceImageBase64 instantiates a new PinMediaSourceImageBase64 object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPinMediaSourceImageBase64(sourceType string, contentType string, data string) *PinMediaSourceImageBase64 {
	this := PinMediaSourceImageBase64{}
	this.SourceType = sourceType
	this.ContentType = contentType
	this.Data = data
	return &this
}

// NewPinMediaSourceImageBase64WithDefaults instantiates a new PinMediaSourceImageBase64 object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPinMediaSourceImageBase64WithDefaults() *PinMediaSourceImageBase64 {
	this := PinMediaSourceImageBase64{}
	return &this
}

// GetSourceType returns the SourceType field value
func (o *PinMediaSourceImageBase64) GetSourceType() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.SourceType
}

// GetSourceTypeOk returns a tuple with the SourceType field value
// and a boolean to check if the value has been set.
func (o *PinMediaSourceImageBase64) GetSourceTypeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.SourceType, true
}

// SetSourceType sets field value
func (o *PinMediaSourceImageBase64) SetSourceType(v string) {
	o.SourceType = v
}

// GetContentType returns the ContentType field value
func (o *PinMediaSourceImageBase64) GetContentType() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.ContentType
}

// GetContentTypeOk returns a tuple with the ContentType field value
// and a boolean to check if the value has been set.
func (o *PinMediaSourceImageBase64) GetContentTypeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.ContentType, true
}

// SetContentType sets field value
func (o *PinMediaSourceImageBase64) SetContentType(v string) {
	o.ContentType = v
}

// GetData returns the Data field value
func (o *PinMediaSourceImageBase64) GetData() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Data
}

// GetDataOk returns a tuple with the Data field value
// and a boolean to check if the value has been set.
func (o *PinMediaSourceImageBase64) GetDataOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Data, true
}

// SetData sets field value
func (o *PinMediaSourceImageBase64) SetData(v string) {
	o.Data = v
}

func (o PinMediaSourceImageBase64) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["source_type"] = o.SourceType
	}
	if true {
		toSerialize["content_type"] = o.ContentType
	}
	if true {
		toSerialize["data"] = o.Data
	}
	return json.Marshal(toSerialize)
}

type NullablePinMediaSourceImageBase64 struct {
	value *PinMediaSourceImageBase64
	isSet bool
}

func (v NullablePinMediaSourceImageBase64) Get() *PinMediaSourceImageBase64 {
	return v.value
}

func (v *NullablePinMediaSourceImageBase64) Set(val *PinMediaSourceImageBase64) {
	v.value = val
	v.isSet = true
}

func (v NullablePinMediaSourceImageBase64) IsSet() bool {
	return v.isSet
}

func (v *NullablePinMediaSourceImageBase64) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePinMediaSourceImageBase64(val *PinMediaSourceImageBase64) *NullablePinMediaSourceImageBase64 {
	return &NullablePinMediaSourceImageBase64{value: val, isSet: true}
}

func (v NullablePinMediaSourceImageBase64) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePinMediaSourceImageBase64) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


