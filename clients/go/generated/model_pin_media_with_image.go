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

// checks if the PinMediaWithImage type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &PinMediaWithImage{}

// PinMediaWithImage Pin with image.
type PinMediaWithImage struct {
	PinMedia
	Images *ImageMetadataImages `json:"images,omitempty"`
}

// NewPinMediaWithImage instantiates a new PinMediaWithImage object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPinMediaWithImage() *PinMediaWithImage {
	this := PinMediaWithImage{}
	return &this
}

// NewPinMediaWithImageWithDefaults instantiates a new PinMediaWithImage object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPinMediaWithImageWithDefaults() *PinMediaWithImage {
	this := PinMediaWithImage{}
	return &this
}

// GetImages returns the Images field value if set, zero value otherwise.
func (o *PinMediaWithImage) GetImages() ImageMetadataImages {
	if o == nil || IsNil(o.Images) {
		var ret ImageMetadataImages
		return ret
	}
	return *o.Images
}

// GetImagesOk returns a tuple with the Images field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PinMediaWithImage) GetImagesOk() (*ImageMetadataImages, bool) {
	if o == nil || IsNil(o.Images) {
		return nil, false
	}
	return o.Images, true
}

// HasImages returns a boolean if a field has been set.
func (o *PinMediaWithImage) HasImages() bool {
	if o != nil && !IsNil(o.Images) {
		return true
	}

	return false
}

// SetImages gets a reference to the given ImageMetadataImages and assigns it to the Images field.
func (o *PinMediaWithImage) SetImages(v ImageMetadataImages) {
	o.Images = &v
}

func (o PinMediaWithImage) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o PinMediaWithImage) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	serializedPinMedia, errPinMedia := json.Marshal(o.PinMedia)
	if errPinMedia != nil {
		return map[string]interface{}{}, errPinMedia
	}
	errPinMedia = json.Unmarshal([]byte(serializedPinMedia), &toSerialize)
	if errPinMedia != nil {
		return map[string]interface{}{}, errPinMedia
	}
	if !IsNil(o.Images) {
		toSerialize["images"] = o.Images
	}
	return toSerialize, nil
}

type NullablePinMediaWithImage struct {
	value *PinMediaWithImage
	isSet bool
}

func (v NullablePinMediaWithImage) Get() *PinMediaWithImage {
	return v.value
}

func (v *NullablePinMediaWithImage) Set(val *PinMediaWithImage) {
	v.value = val
	v.isSet = true
}

func (v NullablePinMediaWithImage) IsSet() bool {
	return v.isSet
}

func (v *NullablePinMediaWithImage) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePinMediaWithImage(val *PinMediaWithImage) *NullablePinMediaWithImage {
	return &NullablePinMediaWithImage{value: val, isSet: true}
}

func (v NullablePinMediaWithImage) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePinMediaWithImage) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


