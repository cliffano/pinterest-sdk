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

// checks if the IntegrationLogClientError type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &IntegrationLogClientError{}

// IntegrationLogClientError System error details included in the log sent by the client.
type IntegrationLogClientError struct {
	// Original cause of the error.
	Cause *string `json:"cause,omitempty"`
	// Column number in the line of the file that raised the error.
	ColumnNumber *int32 `json:"column_number,omitempty"`
	// Filename where the error happened.
	FileName *string `json:"file_name,omitempty"`
	// Line number where the error happened.
	LineNumber *int32 `json:"line_number,omitempty"`
	// Human-readable description of the error.
	Message *string `json:"message,omitempty"`
	// More detail about the message.
	MessageDetail *string `json:"message_detail,omitempty"`
	// Filename where the error happened.
	Name *string `json:"name,omitempty"`
	// Integer that specifies the error code.
	Number *int32 `json:"number,omitempty"`
	// Stack trace of where the error happened.
	StackTrace *string `json:"stack_trace,omitempty"`
}

// NewIntegrationLogClientError instantiates a new IntegrationLogClientError object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewIntegrationLogClientError() *IntegrationLogClientError {
	this := IntegrationLogClientError{}
	return &this
}

// NewIntegrationLogClientErrorWithDefaults instantiates a new IntegrationLogClientError object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewIntegrationLogClientErrorWithDefaults() *IntegrationLogClientError {
	this := IntegrationLogClientError{}
	return &this
}

// GetCause returns the Cause field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetCause() string {
	if o == nil || IsNil(o.Cause) {
		var ret string
		return ret
	}
	return *o.Cause
}

// GetCauseOk returns a tuple with the Cause field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetCauseOk() (*string, bool) {
	if o == nil || IsNil(o.Cause) {
		return nil, false
	}
	return o.Cause, true
}

// HasCause returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasCause() bool {
	if o != nil && !IsNil(o.Cause) {
		return true
	}

	return false
}

// SetCause gets a reference to the given string and assigns it to the Cause field.
func (o *IntegrationLogClientError) SetCause(v string) {
	o.Cause = &v
}

// GetColumnNumber returns the ColumnNumber field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetColumnNumber() int32 {
	if o == nil || IsNil(o.ColumnNumber) {
		var ret int32
		return ret
	}
	return *o.ColumnNumber
}

// GetColumnNumberOk returns a tuple with the ColumnNumber field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetColumnNumberOk() (*int32, bool) {
	if o == nil || IsNil(o.ColumnNumber) {
		return nil, false
	}
	return o.ColumnNumber, true
}

// HasColumnNumber returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasColumnNumber() bool {
	if o != nil && !IsNil(o.ColumnNumber) {
		return true
	}

	return false
}

// SetColumnNumber gets a reference to the given int32 and assigns it to the ColumnNumber field.
func (o *IntegrationLogClientError) SetColumnNumber(v int32) {
	o.ColumnNumber = &v
}

// GetFileName returns the FileName field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetFileName() string {
	if o == nil || IsNil(o.FileName) {
		var ret string
		return ret
	}
	return *o.FileName
}

// GetFileNameOk returns a tuple with the FileName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetFileNameOk() (*string, bool) {
	if o == nil || IsNil(o.FileName) {
		return nil, false
	}
	return o.FileName, true
}

// HasFileName returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasFileName() bool {
	if o != nil && !IsNil(o.FileName) {
		return true
	}

	return false
}

// SetFileName gets a reference to the given string and assigns it to the FileName field.
func (o *IntegrationLogClientError) SetFileName(v string) {
	o.FileName = &v
}

// GetLineNumber returns the LineNumber field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetLineNumber() int32 {
	if o == nil || IsNil(o.LineNumber) {
		var ret int32
		return ret
	}
	return *o.LineNumber
}

// GetLineNumberOk returns a tuple with the LineNumber field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetLineNumberOk() (*int32, bool) {
	if o == nil || IsNil(o.LineNumber) {
		return nil, false
	}
	return o.LineNumber, true
}

// HasLineNumber returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasLineNumber() bool {
	if o != nil && !IsNil(o.LineNumber) {
		return true
	}

	return false
}

// SetLineNumber gets a reference to the given int32 and assigns it to the LineNumber field.
func (o *IntegrationLogClientError) SetLineNumber(v int32) {
	o.LineNumber = &v
}

// GetMessage returns the Message field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetMessage() string {
	if o == nil || IsNil(o.Message) {
		var ret string
		return ret
	}
	return *o.Message
}

// GetMessageOk returns a tuple with the Message field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetMessageOk() (*string, bool) {
	if o == nil || IsNil(o.Message) {
		return nil, false
	}
	return o.Message, true
}

// HasMessage returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasMessage() bool {
	if o != nil && !IsNil(o.Message) {
		return true
	}

	return false
}

// SetMessage gets a reference to the given string and assigns it to the Message field.
func (o *IntegrationLogClientError) SetMessage(v string) {
	o.Message = &v
}

// GetMessageDetail returns the MessageDetail field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetMessageDetail() string {
	if o == nil || IsNil(o.MessageDetail) {
		var ret string
		return ret
	}
	return *o.MessageDetail
}

// GetMessageDetailOk returns a tuple with the MessageDetail field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetMessageDetailOk() (*string, bool) {
	if o == nil || IsNil(o.MessageDetail) {
		return nil, false
	}
	return o.MessageDetail, true
}

// HasMessageDetail returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasMessageDetail() bool {
	if o != nil && !IsNil(o.MessageDetail) {
		return true
	}

	return false
}

// SetMessageDetail gets a reference to the given string and assigns it to the MessageDetail field.
func (o *IntegrationLogClientError) SetMessageDetail(v string) {
	o.MessageDetail = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetName() string {
	if o == nil || IsNil(o.Name) {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetNameOk() (*string, bool) {
	if o == nil || IsNil(o.Name) {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasName() bool {
	if o != nil && !IsNil(o.Name) {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *IntegrationLogClientError) SetName(v string) {
	o.Name = &v
}

// GetNumber returns the Number field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetNumber() int32 {
	if o == nil || IsNil(o.Number) {
		var ret int32
		return ret
	}
	return *o.Number
}

// GetNumberOk returns a tuple with the Number field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetNumberOk() (*int32, bool) {
	if o == nil || IsNil(o.Number) {
		return nil, false
	}
	return o.Number, true
}

// HasNumber returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasNumber() bool {
	if o != nil && !IsNil(o.Number) {
		return true
	}

	return false
}

// SetNumber gets a reference to the given int32 and assigns it to the Number field.
func (o *IntegrationLogClientError) SetNumber(v int32) {
	o.Number = &v
}

// GetStackTrace returns the StackTrace field value if set, zero value otherwise.
func (o *IntegrationLogClientError) GetStackTrace() string {
	if o == nil || IsNil(o.StackTrace) {
		var ret string
		return ret
	}
	return *o.StackTrace
}

// GetStackTraceOk returns a tuple with the StackTrace field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *IntegrationLogClientError) GetStackTraceOk() (*string, bool) {
	if o == nil || IsNil(o.StackTrace) {
		return nil, false
	}
	return o.StackTrace, true
}

// HasStackTrace returns a boolean if a field has been set.
func (o *IntegrationLogClientError) HasStackTrace() bool {
	if o != nil && !IsNil(o.StackTrace) {
		return true
	}

	return false
}

// SetStackTrace gets a reference to the given string and assigns it to the StackTrace field.
func (o *IntegrationLogClientError) SetStackTrace(v string) {
	o.StackTrace = &v
}

func (o IntegrationLogClientError) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o IntegrationLogClientError) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Cause) {
		toSerialize["cause"] = o.Cause
	}
	if !IsNil(o.ColumnNumber) {
		toSerialize["column_number"] = o.ColumnNumber
	}
	if !IsNil(o.FileName) {
		toSerialize["file_name"] = o.FileName
	}
	if !IsNil(o.LineNumber) {
		toSerialize["line_number"] = o.LineNumber
	}
	if !IsNil(o.Message) {
		toSerialize["message"] = o.Message
	}
	if !IsNil(o.MessageDetail) {
		toSerialize["message_detail"] = o.MessageDetail
	}
	if !IsNil(o.Name) {
		toSerialize["name"] = o.Name
	}
	if !IsNil(o.Number) {
		toSerialize["number"] = o.Number
	}
	if !IsNil(o.StackTrace) {
		toSerialize["stack_trace"] = o.StackTrace
	}
	return toSerialize, nil
}

type NullableIntegrationLogClientError struct {
	value *IntegrationLogClientError
	isSet bool
}

func (v NullableIntegrationLogClientError) Get() *IntegrationLogClientError {
	return v.value
}

func (v *NullableIntegrationLogClientError) Set(val *IntegrationLogClientError) {
	v.value = val
	v.isSet = true
}

func (v NullableIntegrationLogClientError) IsSet() bool {
	return v.isSet
}

func (v *NullableIntegrationLogClientError) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableIntegrationLogClientError(val *IntegrationLogClientError) *NullableIntegrationLogClientError {
	return &NullableIntegrationLogClientError{value: val, isSet: true}
}

func (v NullableIntegrationLogClientError) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableIntegrationLogClientError) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

