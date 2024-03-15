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

// checks if the KeywordsMetricsArrayResponse type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &KeywordsMetricsArrayResponse{}

// KeywordsMetricsArrayResponse struct for KeywordsMetricsArrayResponse
type KeywordsMetricsArrayResponse struct {
	Data []KeywordMetricsResponse `json:"data,omitempty"`
}

// NewKeywordsMetricsArrayResponse instantiates a new KeywordsMetricsArrayResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewKeywordsMetricsArrayResponse() *KeywordsMetricsArrayResponse {
	this := KeywordsMetricsArrayResponse{}
	return &this
}

// NewKeywordsMetricsArrayResponseWithDefaults instantiates a new KeywordsMetricsArrayResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewKeywordsMetricsArrayResponseWithDefaults() *KeywordsMetricsArrayResponse {
	this := KeywordsMetricsArrayResponse{}
	return &this
}

// GetData returns the Data field value if set, zero value otherwise.
func (o *KeywordsMetricsArrayResponse) GetData() []KeywordMetricsResponse {
	if o == nil || IsNil(o.Data) {
		var ret []KeywordMetricsResponse
		return ret
	}
	return o.Data
}

// GetDataOk returns a tuple with the Data field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *KeywordsMetricsArrayResponse) GetDataOk() ([]KeywordMetricsResponse, bool) {
	if o == nil || IsNil(o.Data) {
		return nil, false
	}
	return o.Data, true
}

// HasData returns a boolean if a field has been set.
func (o *KeywordsMetricsArrayResponse) HasData() bool {
	if o != nil && !IsNil(o.Data) {
		return true
	}

	return false
}

// SetData gets a reference to the given []KeywordMetricsResponse and assigns it to the Data field.
func (o *KeywordsMetricsArrayResponse) SetData(v []KeywordMetricsResponse) {
	o.Data = v
}

func (o KeywordsMetricsArrayResponse) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o KeywordsMetricsArrayResponse) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Data) {
		toSerialize["data"] = o.Data
	}
	return toSerialize, nil
}

type NullableKeywordsMetricsArrayResponse struct {
	value *KeywordsMetricsArrayResponse
	isSet bool
}

func (v NullableKeywordsMetricsArrayResponse) Get() *KeywordsMetricsArrayResponse {
	return v.value
}

func (v *NullableKeywordsMetricsArrayResponse) Set(val *KeywordsMetricsArrayResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableKeywordsMetricsArrayResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableKeywordsMetricsArrayResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableKeywordsMetricsArrayResponse(val *KeywordsMetricsArrayResponse) *NullableKeywordsMetricsArrayResponse {
	return &NullableKeywordsMetricsArrayResponse{value: val, isSet: true}
}

func (v NullableKeywordsMetricsArrayResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableKeywordsMetricsArrayResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


