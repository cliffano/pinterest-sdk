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

// checks if the OrderLineError type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &OrderLineError{}

// OrderLineError struct for OrderLineError
type OrderLineError struct {
	Data OrderLine `json:"data,omitempty"`
	ErrorMessages []string `json:"error_messages,omitempty"`
}

// NewOrderLineError instantiates a new OrderLineError object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOrderLineError() *OrderLineError {
	this := OrderLineError{}
	return &this
}

// NewOrderLineErrorWithDefaults instantiates a new OrderLineError object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOrderLineErrorWithDefaults() *OrderLineError {
	this := OrderLineError{}
	return &this
}

// GetData returns the Data field value if set, zero value otherwise.
func (o *OrderLineError) GetData() OrderLine {
	if o == nil || IsNil(o.Data) {
		var ret OrderLine
		return ret
	}
	return o.Data
}

// GetDataOk returns a tuple with the Data field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrderLineError) GetDataOk() (OrderLine, bool) {
	if o == nil || IsNil(o.Data) {
		return OrderLine{}, false
	}
	return o.Data, true
}

// HasData returns a boolean if a field has been set.
func (o *OrderLineError) HasData() bool {
	if o != nil && !IsNil(o.Data) {
		return true
	}

	return false
}

// SetData gets a reference to the given OrderLine and assigns it to the Data field.
func (o *OrderLineError) SetData(v OrderLine) {
	o.Data = v
}

// GetErrorMessages returns the ErrorMessages field value if set, zero value otherwise.
func (o *OrderLineError) GetErrorMessages() []string {
	if o == nil || IsNil(o.ErrorMessages) {
		var ret []string
		return ret
	}
	return o.ErrorMessages
}

// GetErrorMessagesOk returns a tuple with the ErrorMessages field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OrderLineError) GetErrorMessagesOk() ([]string, bool) {
	if o == nil || IsNil(o.ErrorMessages) {
		return nil, false
	}
	return o.ErrorMessages, true
}

// HasErrorMessages returns a boolean if a field has been set.
func (o *OrderLineError) HasErrorMessages() bool {
	if o != nil && !IsNil(o.ErrorMessages) {
		return true
	}

	return false
}

// SetErrorMessages gets a reference to the given []string and assigns it to the ErrorMessages field.
func (o *OrderLineError) SetErrorMessages(v []string) {
	o.ErrorMessages = v
}

func (o OrderLineError) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o OrderLineError) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Data) {
		toSerialize["data"] = o.Data
	}
	if !IsNil(o.ErrorMessages) {
		toSerialize["error_messages"] = o.ErrorMessages
	}
	return toSerialize, nil
}

type NullableOrderLineError struct {
	value *OrderLineError
	isSet bool
}

func (v NullableOrderLineError) Get() *OrderLineError {
	return v.value
}

func (v *NullableOrderLineError) Set(val *OrderLineError) {
	v.value = val
	v.isSet = true
}

func (v NullableOrderLineError) IsSet() bool {
	return v.isSet
}

func (v *NullableOrderLineError) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOrderLineError(val *OrderLineError) *NullableOrderLineError {
	return &NullableOrderLineError{value: val, isSet: true}
}

func (v NullableOrderLineError) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOrderLineError) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


