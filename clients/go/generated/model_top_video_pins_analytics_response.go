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

// checks if the TopVideoPinsAnalyticsResponse type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &TopVideoPinsAnalyticsResponse{}

// TopVideoPinsAnalyticsResponse struct for TopVideoPinsAnalyticsResponse
type TopVideoPinsAnalyticsResponse struct {
	DateAvailability *TopPinsAnalyticsResponseDateAvailability `json:"date_availability,omitempty"`
	Pins []TopVideoPinsAnalyticsResponsePinsInner `json:"pins,omitempty"`
	SortBy *string `json:"sort_by,omitempty"`
}

// NewTopVideoPinsAnalyticsResponse instantiates a new TopVideoPinsAnalyticsResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTopVideoPinsAnalyticsResponse() *TopVideoPinsAnalyticsResponse {
	this := TopVideoPinsAnalyticsResponse{}
	return &this
}

// NewTopVideoPinsAnalyticsResponseWithDefaults instantiates a new TopVideoPinsAnalyticsResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTopVideoPinsAnalyticsResponseWithDefaults() *TopVideoPinsAnalyticsResponse {
	this := TopVideoPinsAnalyticsResponse{}
	return &this
}

// GetDateAvailability returns the DateAvailability field value if set, zero value otherwise.
func (o *TopVideoPinsAnalyticsResponse) GetDateAvailability() TopPinsAnalyticsResponseDateAvailability {
	if o == nil || IsNil(o.DateAvailability) {
		var ret TopPinsAnalyticsResponseDateAvailability
		return ret
	}
	return *o.DateAvailability
}

// GetDateAvailabilityOk returns a tuple with the DateAvailability field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TopVideoPinsAnalyticsResponse) GetDateAvailabilityOk() (*TopPinsAnalyticsResponseDateAvailability, bool) {
	if o == nil || IsNil(o.DateAvailability) {
		return nil, false
	}
	return o.DateAvailability, true
}

// HasDateAvailability returns a boolean if a field has been set.
func (o *TopVideoPinsAnalyticsResponse) HasDateAvailability() bool {
	if o != nil && !IsNil(o.DateAvailability) {
		return true
	}

	return false
}

// SetDateAvailability gets a reference to the given TopPinsAnalyticsResponseDateAvailability and assigns it to the DateAvailability field.
func (o *TopVideoPinsAnalyticsResponse) SetDateAvailability(v TopPinsAnalyticsResponseDateAvailability) {
	o.DateAvailability = &v
}

// GetPins returns the Pins field value if set, zero value otherwise.
func (o *TopVideoPinsAnalyticsResponse) GetPins() []TopVideoPinsAnalyticsResponsePinsInner {
	if o == nil || IsNil(o.Pins) {
		var ret []TopVideoPinsAnalyticsResponsePinsInner
		return ret
	}
	return o.Pins
}

// GetPinsOk returns a tuple with the Pins field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TopVideoPinsAnalyticsResponse) GetPinsOk() ([]TopVideoPinsAnalyticsResponsePinsInner, bool) {
	if o == nil || IsNil(o.Pins) {
		return nil, false
	}
	return o.Pins, true
}

// HasPins returns a boolean if a field has been set.
func (o *TopVideoPinsAnalyticsResponse) HasPins() bool {
	if o != nil && !IsNil(o.Pins) {
		return true
	}

	return false
}

// SetPins gets a reference to the given []TopVideoPinsAnalyticsResponsePinsInner and assigns it to the Pins field.
func (o *TopVideoPinsAnalyticsResponse) SetPins(v []TopVideoPinsAnalyticsResponsePinsInner) {
	o.Pins = v
}

// GetSortBy returns the SortBy field value if set, zero value otherwise.
func (o *TopVideoPinsAnalyticsResponse) GetSortBy() string {
	if o == nil || IsNil(o.SortBy) {
		var ret string
		return ret
	}
	return *o.SortBy
}

// GetSortByOk returns a tuple with the SortBy field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TopVideoPinsAnalyticsResponse) GetSortByOk() (*string, bool) {
	if o == nil || IsNil(o.SortBy) {
		return nil, false
	}
	return o.SortBy, true
}

// HasSortBy returns a boolean if a field has been set.
func (o *TopVideoPinsAnalyticsResponse) HasSortBy() bool {
	if o != nil && !IsNil(o.SortBy) {
		return true
	}

	return false
}

// SetSortBy gets a reference to the given string and assigns it to the SortBy field.
func (o *TopVideoPinsAnalyticsResponse) SetSortBy(v string) {
	o.SortBy = &v
}

func (o TopVideoPinsAnalyticsResponse) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o TopVideoPinsAnalyticsResponse) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.DateAvailability) {
		toSerialize["date_availability"] = o.DateAvailability
	}
	if !IsNil(o.Pins) {
		toSerialize["pins"] = o.Pins
	}
	if !IsNil(o.SortBy) {
		toSerialize["sort_by"] = o.SortBy
	}
	return toSerialize, nil
}

type NullableTopVideoPinsAnalyticsResponse struct {
	value *TopVideoPinsAnalyticsResponse
	isSet bool
}

func (v NullableTopVideoPinsAnalyticsResponse) Get() *TopVideoPinsAnalyticsResponse {
	return v.value
}

func (v *NullableTopVideoPinsAnalyticsResponse) Set(val *TopVideoPinsAnalyticsResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableTopVideoPinsAnalyticsResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableTopVideoPinsAnalyticsResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTopVideoPinsAnalyticsResponse(val *TopVideoPinsAnalyticsResponse) *NullableTopVideoPinsAnalyticsResponse {
	return &NullableTopVideoPinsAnalyticsResponse{value: val, isSet: true}
}

func (v NullableTopVideoPinsAnalyticsResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTopVideoPinsAnalyticsResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


