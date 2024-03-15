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

// checks if the PinMediaWithImages type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &PinMediaWithImages{}

// PinMediaWithImages Pin with multiple images.
type PinMediaWithImages struct {
	PinMedia
	Items []ImageMetadata `json:"items,omitempty"`
}

// NewPinMediaWithImages instantiates a new PinMediaWithImages object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPinMediaWithImages() *PinMediaWithImages {
	this := PinMediaWithImages{}
	return &this
}

// NewPinMediaWithImagesWithDefaults instantiates a new PinMediaWithImages object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPinMediaWithImagesWithDefaults() *PinMediaWithImages {
	this := PinMediaWithImages{}
	return &this
}

// GetItems returns the Items field value if set, zero value otherwise.
func (o *PinMediaWithImages) GetItems() []ImageMetadata {
	if o == nil || IsNil(o.Items) {
		var ret []ImageMetadata
		return ret
	}
	return o.Items
}

// GetItemsOk returns a tuple with the Items field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PinMediaWithImages) GetItemsOk() ([]ImageMetadata, bool) {
	if o == nil || IsNil(o.Items) {
		return nil, false
	}
	return o.Items, true
}

// HasItems returns a boolean if a field has been set.
func (o *PinMediaWithImages) HasItems() bool {
	if o != nil && !IsNil(o.Items) {
		return true
	}

	return false
}

// SetItems gets a reference to the given []ImageMetadata and assigns it to the Items field.
func (o *PinMediaWithImages) SetItems(v []ImageMetadata) {
	o.Items = v
}

func (o PinMediaWithImages) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o PinMediaWithImages) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	serializedPinMedia, errPinMedia := json.Marshal(o.PinMedia)
	if errPinMedia != nil {
		return map[string]interface{}{}, errPinMedia
	}
	errPinMedia = json.Unmarshal([]byte(serializedPinMedia), &toSerialize)
	if errPinMedia != nil {
		return map[string]interface{}{}, errPinMedia
	}
	if !IsNil(o.Items) {
		toSerialize["items"] = o.Items
	}
	return toSerialize, nil
}

type NullablePinMediaWithImages struct {
	value *PinMediaWithImages
	isSet bool
}

func (v NullablePinMediaWithImages) Get() *PinMediaWithImages {
	return v.value
}

func (v *NullablePinMediaWithImages) Set(val *PinMediaWithImages) {
	v.value = val
	v.isSet = true
}

func (v NullablePinMediaWithImages) IsSet() bool {
	return v.isSet
}

func (v *NullablePinMediaWithImages) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePinMediaWithImages(val *PinMediaWithImages) *NullablePinMediaWithImages {
	return &NullablePinMediaWithImages{value: val, isSet: true}
}

func (v NullablePinMediaWithImages) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePinMediaWithImages) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


