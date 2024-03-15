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

// checks if the ConversionApiResponse type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &ConversionApiResponse{}

// ConversionApiResponse Schema describing the object in the response, which contains information about the events that were received and processed.
type ConversionApiResponse struct {
	// Total number of events received in the request.
	NumEventsReceived int32 `json:"num_events_received"`
	// Number of events that were successfully processed from the events.
	NumEventsProcessed int32 `json:"num_events_processed"`
	// Specific messages for each event received. The order will match the order in which the events were received in the request.
	Events []ConversionApiResponseEventsInner `json:"events"`
}

type _ConversionApiResponse ConversionApiResponse

// NewConversionApiResponse instantiates a new ConversionApiResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewConversionApiResponse(numEventsReceived int32, numEventsProcessed int32, events []ConversionApiResponseEventsInner) *ConversionApiResponse {
	this := ConversionApiResponse{}
	this.NumEventsReceived = numEventsReceived
	this.NumEventsProcessed = numEventsProcessed
	this.Events = events
	return &this
}

// NewConversionApiResponseWithDefaults instantiates a new ConversionApiResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewConversionApiResponseWithDefaults() *ConversionApiResponse {
	this := ConversionApiResponse{}
	return &this
}

// GetNumEventsReceived returns the NumEventsReceived field value
func (o *ConversionApiResponse) GetNumEventsReceived() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.NumEventsReceived
}

// GetNumEventsReceivedOk returns a tuple with the NumEventsReceived field value
// and a boolean to check if the value has been set.
func (o *ConversionApiResponse) GetNumEventsReceivedOk() (*int32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.NumEventsReceived, true
}

// SetNumEventsReceived sets field value
func (o *ConversionApiResponse) SetNumEventsReceived(v int32) {
	o.NumEventsReceived = v
}

// GetNumEventsProcessed returns the NumEventsProcessed field value
func (o *ConversionApiResponse) GetNumEventsProcessed() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.NumEventsProcessed
}

// GetNumEventsProcessedOk returns a tuple with the NumEventsProcessed field value
// and a boolean to check if the value has been set.
func (o *ConversionApiResponse) GetNumEventsProcessedOk() (*int32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.NumEventsProcessed, true
}

// SetNumEventsProcessed sets field value
func (o *ConversionApiResponse) SetNumEventsProcessed(v int32) {
	o.NumEventsProcessed = v
}

// GetEvents returns the Events field value
func (o *ConversionApiResponse) GetEvents() []ConversionApiResponseEventsInner {
	if o == nil {
		var ret []ConversionApiResponseEventsInner
		return ret
	}

	return o.Events
}

// GetEventsOk returns a tuple with the Events field value
// and a boolean to check if the value has been set.
func (o *ConversionApiResponse) GetEventsOk() ([]ConversionApiResponseEventsInner, bool) {
	if o == nil {
		return nil, false
	}
	return o.Events, true
}

// SetEvents sets field value
func (o *ConversionApiResponse) SetEvents(v []ConversionApiResponseEventsInner) {
	o.Events = v
}

func (o ConversionApiResponse) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o ConversionApiResponse) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["num_events_received"] = o.NumEventsReceived
	toSerialize["num_events_processed"] = o.NumEventsProcessed
	toSerialize["events"] = o.Events
	return toSerialize, nil
}

func (o *ConversionApiResponse) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"num_events_received",
		"num_events_processed",
		"events",
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

	varConversionApiResponse := _ConversionApiResponse{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varConversionApiResponse)

	if err != nil {
		return err
	}

	*o = ConversionApiResponse(varConversionApiResponse)

	return err
}

type NullableConversionApiResponse struct {
	value *ConversionApiResponse
	isSet bool
}

func (v NullableConversionApiResponse) Get() *ConversionApiResponse {
	return v.value
}

func (v *NullableConversionApiResponse) Set(val *ConversionApiResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableConversionApiResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableConversionApiResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableConversionApiResponse(val *ConversionApiResponse) *NullableConversionApiResponse {
	return &NullableConversionApiResponse{value: val, isSet: true}
}

func (v NullableConversionApiResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableConversionApiResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


