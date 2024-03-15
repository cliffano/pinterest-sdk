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
	"fmt"
)

// checks if the AdsAnalyticsResponseInner type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &AdsAnalyticsResponseInner{}

// AdsAnalyticsResponseInner struct for AdsAnalyticsResponseInner
type AdsAnalyticsResponseInner struct {
	// The ID of the ad that this metrics belongs to.
	AD_ID string `json:"AD_ID"`
	// Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
	DATE *string `json:"DATE,omitempty"`
	AdditionalProperties map[string]interface{}
}

type _AdsAnalyticsResponseInner AdsAnalyticsResponseInner

// NewAdsAnalyticsResponseInner instantiates a new AdsAnalyticsResponseInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdsAnalyticsResponseInner(aDID string) *AdsAnalyticsResponseInner {
	this := AdsAnalyticsResponseInner{}
	this.AD_ID = aDID
	return &this
}

// NewAdsAnalyticsResponseInnerWithDefaults instantiates a new AdsAnalyticsResponseInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdsAnalyticsResponseInnerWithDefaults() *AdsAnalyticsResponseInner {
	this := AdsAnalyticsResponseInner{}
	return &this
}

// GetAD_ID returns the AD_ID field value
func (o *AdsAnalyticsResponseInner) GetAD_ID() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.AD_ID
}

// GetAD_IDOk returns a tuple with the AD_ID field value
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsResponseInner) GetAD_IDOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.AD_ID, true
}

// SetAD_ID sets field value
func (o *AdsAnalyticsResponseInner) SetAD_ID(v string) {
	o.AD_ID = v
}

// GetDATE returns the DATE field value if set, zero value otherwise.
func (o *AdsAnalyticsResponseInner) GetDATE() string {
	if o == nil || IsNil(o.DATE) {
		var ret string
		return ret
	}
	return *o.DATE
}

// GetDATEOk returns a tuple with the DATE field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdsAnalyticsResponseInner) GetDATEOk() (*string, bool) {
	if o == nil || IsNil(o.DATE) {
		return nil, false
	}
	return o.DATE, true
}

// HasDATE returns a boolean if a field has been set.
func (o *AdsAnalyticsResponseInner) HasDATE() bool {
	if o != nil && !IsNil(o.DATE) {
		return true
	}

	return false
}

// SetDATE gets a reference to the given string and assigns it to the DATE field.
func (o *AdsAnalyticsResponseInner) SetDATE(v string) {
	o.DATE = &v
}

func (o AdsAnalyticsResponseInner) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o AdsAnalyticsResponseInner) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["AD_ID"] = o.AD_ID
	if !IsNil(o.DATE) {
		toSerialize["DATE"] = o.DATE
	}

	for key, value := range o.AdditionalProperties {
		toSerialize[key] = value
	}

	return toSerialize, nil
}

func (o *AdsAnalyticsResponseInner) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"AD_ID",
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

	varAdsAnalyticsResponseInner := _AdsAnalyticsResponseInner{}

	err = json.Unmarshal(data, &varAdsAnalyticsResponseInner)

	if err != nil {
		return err
	}

	*o = AdsAnalyticsResponseInner(varAdsAnalyticsResponseInner)

	additionalProperties := make(map[string]interface{})

	if err = json.Unmarshal(data, &additionalProperties); err == nil {
		delete(additionalProperties, "AD_ID")
		delete(additionalProperties, "DATE")
		o.AdditionalProperties = additionalProperties
	}

	return err
}

type NullableAdsAnalyticsResponseInner struct {
	value *AdsAnalyticsResponseInner
	isSet bool
}

func (v NullableAdsAnalyticsResponseInner) Get() *AdsAnalyticsResponseInner {
	return v.value
}

func (v *NullableAdsAnalyticsResponseInner) Set(val *AdsAnalyticsResponseInner) {
	v.value = val
	v.isSet = true
}

func (v NullableAdsAnalyticsResponseInner) IsSet() bool {
	return v.isSet
}

func (v *NullableAdsAnalyticsResponseInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdsAnalyticsResponseInner(val *AdsAnalyticsResponseInner) *NullableAdsAnalyticsResponseInner {
	return &NullableAdsAnalyticsResponseInner{value: val, isSet: true}
}

func (v NullableAdsAnalyticsResponseInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdsAnalyticsResponseInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


