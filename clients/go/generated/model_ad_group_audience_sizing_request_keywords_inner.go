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

// checks if the AdGroupAudienceSizingRequestKeywordsInner type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &AdGroupAudienceSizingRequestKeywordsInner{}

// AdGroupAudienceSizingRequestKeywordsInner struct for AdGroupAudienceSizingRequestKeywordsInner
type AdGroupAudienceSizingRequestKeywordsInner struct {
	MatchType NullableMatchTypeResponse `json:"match_type"`
	// Keyword value (120 chars max).
	Value string `json:"value"`
}

type _AdGroupAudienceSizingRequestKeywordsInner AdGroupAudienceSizingRequestKeywordsInner

// NewAdGroupAudienceSizingRequestKeywordsInner instantiates a new AdGroupAudienceSizingRequestKeywordsInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdGroupAudienceSizingRequestKeywordsInner(matchType NullableMatchTypeResponse, value string) *AdGroupAudienceSizingRequestKeywordsInner {
	this := AdGroupAudienceSizingRequestKeywordsInner{}
	this.MatchType = matchType
	this.Value = value
	return &this
}

// NewAdGroupAudienceSizingRequestKeywordsInnerWithDefaults instantiates a new AdGroupAudienceSizingRequestKeywordsInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdGroupAudienceSizingRequestKeywordsInnerWithDefaults() *AdGroupAudienceSizingRequestKeywordsInner {
	this := AdGroupAudienceSizingRequestKeywordsInner{}
	return &this
}

// GetMatchType returns the MatchType field value
// If the value is explicit nil, the zero value for MatchTypeResponse will be returned
func (o *AdGroupAudienceSizingRequestKeywordsInner) GetMatchType() MatchTypeResponse {
	if o == nil || o.MatchType.Get() == nil {
		var ret MatchTypeResponse
		return ret
	}

	return *o.MatchType.Get()
}

// GetMatchTypeOk returns a tuple with the MatchType field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupAudienceSizingRequestKeywordsInner) GetMatchTypeOk() (*MatchTypeResponse, bool) {
	if o == nil {
		return nil, false
	}
	return o.MatchType.Get(), o.MatchType.IsSet()
}

// SetMatchType sets field value
func (o *AdGroupAudienceSizingRequestKeywordsInner) SetMatchType(v MatchTypeResponse) {
	o.MatchType.Set(&v)
}

// GetValue returns the Value field value
func (o *AdGroupAudienceSizingRequestKeywordsInner) GetValue() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Value
}

// GetValueOk returns a tuple with the Value field value
// and a boolean to check if the value has been set.
func (o *AdGroupAudienceSizingRequestKeywordsInner) GetValueOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Value, true
}

// SetValue sets field value
func (o *AdGroupAudienceSizingRequestKeywordsInner) SetValue(v string) {
	o.Value = v
}

func (o AdGroupAudienceSizingRequestKeywordsInner) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o AdGroupAudienceSizingRequestKeywordsInner) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["match_type"] = o.MatchType.Get()
	toSerialize["value"] = o.Value
	return toSerialize, nil
}

func (o *AdGroupAudienceSizingRequestKeywordsInner) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"match_type",
		"value",
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

	varAdGroupAudienceSizingRequestKeywordsInner := _AdGroupAudienceSizingRequestKeywordsInner{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varAdGroupAudienceSizingRequestKeywordsInner)

	if err != nil {
		return err
	}

	*o = AdGroupAudienceSizingRequestKeywordsInner(varAdGroupAudienceSizingRequestKeywordsInner)

	return err
}

type NullableAdGroupAudienceSizingRequestKeywordsInner struct {
	value *AdGroupAudienceSizingRequestKeywordsInner
	isSet bool
}

func (v NullableAdGroupAudienceSizingRequestKeywordsInner) Get() *AdGroupAudienceSizingRequestKeywordsInner {
	return v.value
}

func (v *NullableAdGroupAudienceSizingRequestKeywordsInner) Set(val *AdGroupAudienceSizingRequestKeywordsInner) {
	v.value = val
	v.isSet = true
}

func (v NullableAdGroupAudienceSizingRequestKeywordsInner) IsSet() bool {
	return v.isSet
}

func (v *NullableAdGroupAudienceSizingRequestKeywordsInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdGroupAudienceSizingRequestKeywordsInner(val *AdGroupAudienceSizingRequestKeywordsInner) *NullableAdGroupAudienceSizingRequestKeywordsInner {
	return &NullableAdGroupAudienceSizingRequestKeywordsInner{value: val, isSet: true}
}

func (v NullableAdGroupAudienceSizingRequestKeywordsInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdGroupAudienceSizingRequestKeywordsInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

