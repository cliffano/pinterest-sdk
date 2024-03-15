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
	"bytes"
	"fmt"
)

// checks if the PinMediaSourceImagesBase64 type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &PinMediaSourceImagesBase64{}

// PinMediaSourceImagesBase64 Multiple Base64-encoded images media source
type PinMediaSourceImagesBase64 struct {
	SourceType *string `json:"source_type,omitempty"`
	// Array with image objects.
	Items []PinMediaSourceImagesBase64ItemsInner `json:"items"`
	Index *int32 `json:"index,omitempty"`
}

type _PinMediaSourceImagesBase64 PinMediaSourceImagesBase64

// NewPinMediaSourceImagesBase64 instantiates a new PinMediaSourceImagesBase64 object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPinMediaSourceImagesBase64(items []PinMediaSourceImagesBase64ItemsInner) *PinMediaSourceImagesBase64 {
	this := PinMediaSourceImagesBase64{}
	this.Items = items
	return &this
}

// NewPinMediaSourceImagesBase64WithDefaults instantiates a new PinMediaSourceImagesBase64 object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPinMediaSourceImagesBase64WithDefaults() *PinMediaSourceImagesBase64 {
	this := PinMediaSourceImagesBase64{}
	return &this
}

// GetSourceType returns the SourceType field value if set, zero value otherwise.
func (o *PinMediaSourceImagesBase64) GetSourceType() string {
	if o == nil || IsNil(o.SourceType) {
		var ret string
		return ret
	}
	return *o.SourceType
}

// GetSourceTypeOk returns a tuple with the SourceType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PinMediaSourceImagesBase64) GetSourceTypeOk() (*string, bool) {
	if o == nil || IsNil(o.SourceType) {
		return nil, false
	}
	return o.SourceType, true
}

// HasSourceType returns a boolean if a field has been set.
func (o *PinMediaSourceImagesBase64) HasSourceType() bool {
	if o != nil && !IsNil(o.SourceType) {
		return true
	}

	return false
}

// SetSourceType gets a reference to the given string and assigns it to the SourceType field.
func (o *PinMediaSourceImagesBase64) SetSourceType(v string) {
	o.SourceType = &v
}

// GetItems returns the Items field value
func (o *PinMediaSourceImagesBase64) GetItems() []PinMediaSourceImagesBase64ItemsInner {
	if o == nil {
		var ret []PinMediaSourceImagesBase64ItemsInner
		return ret
	}

	return o.Items
}

// GetItemsOk returns a tuple with the Items field value
// and a boolean to check if the value has been set.
func (o *PinMediaSourceImagesBase64) GetItemsOk() ([]PinMediaSourceImagesBase64ItemsInner, bool) {
	if o == nil {
		return nil, false
	}
	return o.Items, true
}

// SetItems sets field value
func (o *PinMediaSourceImagesBase64) SetItems(v []PinMediaSourceImagesBase64ItemsInner) {
	o.Items = v
}

// GetIndex returns the Index field value if set, zero value otherwise.
func (o *PinMediaSourceImagesBase64) GetIndex() int32 {
	if o == nil || IsNil(o.Index) {
		var ret int32
		return ret
	}
	return *o.Index
}

// GetIndexOk returns a tuple with the Index field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PinMediaSourceImagesBase64) GetIndexOk() (*int32, bool) {
	if o == nil || IsNil(o.Index) {
		return nil, false
	}
	return o.Index, true
}

// HasIndex returns a boolean if a field has been set.
func (o *PinMediaSourceImagesBase64) HasIndex() bool {
	if o != nil && !IsNil(o.Index) {
		return true
	}

	return false
}

// SetIndex gets a reference to the given int32 and assigns it to the Index field.
func (o *PinMediaSourceImagesBase64) SetIndex(v int32) {
	o.Index = &v
}

func (o PinMediaSourceImagesBase64) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o PinMediaSourceImagesBase64) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.SourceType) {
		toSerialize["source_type"] = o.SourceType
	}
	toSerialize["items"] = o.Items
	if !IsNil(o.Index) {
		toSerialize["index"] = o.Index
	}
	return toSerialize, nil
}

func (o *PinMediaSourceImagesBase64) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"items",
	}

	allProperties := make(map[string]interface{})

	err = json.Unmarshal(data, &allProperties)

	if err != nil {
		return err;
	}

	for _, requiredProperty := range(requiredProperties) {
		if _, exists := allProperties[requiredProperty]; !exists {
			return fmt.Errorf("no value given for required property %v", requiredProperty)
		}
	}

	varPinMediaSourceImagesBase64 := _PinMediaSourceImagesBase64{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varPinMediaSourceImagesBase64)

	if err != nil {
		return err
	}

	*o = PinMediaSourceImagesBase64(varPinMediaSourceImagesBase64)

	return err
}

type NullablePinMediaSourceImagesBase64 struct {
	value *PinMediaSourceImagesBase64
	isSet bool
}

func (v NullablePinMediaSourceImagesBase64) Get() *PinMediaSourceImagesBase64 {
	return v.value
}

func (v *NullablePinMediaSourceImagesBase64) Set(val *PinMediaSourceImagesBase64) {
	v.value = val
	v.isSet = true
}

func (v NullablePinMediaSourceImagesBase64) IsSet() bool {
	return v.isSet
}

func (v *NullablePinMediaSourceImagesBase64) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePinMediaSourceImagesBase64(val *PinMediaSourceImagesBase64) *NullablePinMediaSourceImagesBase64 {
	return &NullablePinMediaSourceImagesBase64{value: val, isSet: true}
}

func (v NullablePinMediaSourceImagesBase64) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePinMediaSourceImagesBase64) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


