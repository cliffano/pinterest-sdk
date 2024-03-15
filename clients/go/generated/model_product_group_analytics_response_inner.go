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

// checks if the ProductGroupAnalyticsResponseInner type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &ProductGroupAnalyticsResponseInner{}

// ProductGroupAnalyticsResponseInner struct for ProductGroupAnalyticsResponseInner
type ProductGroupAnalyticsResponseInner struct {
	// The ID of the product group that this metrics belongs to.
	PRODUCT_GROUP_ID string `json:"PRODUCT_GROUP_ID"`
	// Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
	DATE *string `json:"DATE,omitempty"`
	AdditionalProperties map[string]interface{}
}

type _ProductGroupAnalyticsResponseInner ProductGroupAnalyticsResponseInner

// NewProductGroupAnalyticsResponseInner instantiates a new ProductGroupAnalyticsResponseInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewProductGroupAnalyticsResponseInner(pRODUCTGROUPID string) *ProductGroupAnalyticsResponseInner {
	this := ProductGroupAnalyticsResponseInner{}
	this.PRODUCT_GROUP_ID = pRODUCTGROUPID
	return &this
}

// NewProductGroupAnalyticsResponseInnerWithDefaults instantiates a new ProductGroupAnalyticsResponseInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewProductGroupAnalyticsResponseInnerWithDefaults() *ProductGroupAnalyticsResponseInner {
	this := ProductGroupAnalyticsResponseInner{}
	return &this
}

// GetPRODUCT_GROUP_ID returns the PRODUCT_GROUP_ID field value
func (o *ProductGroupAnalyticsResponseInner) GetPRODUCT_GROUP_ID() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.PRODUCT_GROUP_ID
}

// GetPRODUCT_GROUP_IDOk returns a tuple with the PRODUCT_GROUP_ID field value
// and a boolean to check if the value has been set.
func (o *ProductGroupAnalyticsResponseInner) GetPRODUCT_GROUP_IDOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.PRODUCT_GROUP_ID, true
}

// SetPRODUCT_GROUP_ID sets field value
func (o *ProductGroupAnalyticsResponseInner) SetPRODUCT_GROUP_ID(v string) {
	o.PRODUCT_GROUP_ID = v
}

// GetDATE returns the DATE field value if set, zero value otherwise.
func (o *ProductGroupAnalyticsResponseInner) GetDATE() string {
	if o == nil || IsNil(o.DATE) {
		var ret string
		return ret
	}
	return *o.DATE
}

// GetDATEOk returns a tuple with the DATE field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ProductGroupAnalyticsResponseInner) GetDATEOk() (*string, bool) {
	if o == nil || IsNil(o.DATE) {
		return nil, false
	}
	return o.DATE, true
}

// HasDATE returns a boolean if a field has been set.
func (o *ProductGroupAnalyticsResponseInner) HasDATE() bool {
	if o != nil && !IsNil(o.DATE) {
		return true
	}

	return false
}

// SetDATE gets a reference to the given string and assigns it to the DATE field.
func (o *ProductGroupAnalyticsResponseInner) SetDATE(v string) {
	o.DATE = &v
}

func (o ProductGroupAnalyticsResponseInner) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o ProductGroupAnalyticsResponseInner) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["PRODUCT_GROUP_ID"] = o.PRODUCT_GROUP_ID
	if !IsNil(o.DATE) {
		toSerialize["DATE"] = o.DATE
	}

	for key, value := range o.AdditionalProperties {
		toSerialize[key] = value
	}

	return toSerialize, nil
}

func (o *ProductGroupAnalyticsResponseInner) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"PRODUCT_GROUP_ID",
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

	varProductGroupAnalyticsResponseInner := _ProductGroupAnalyticsResponseInner{}

	err = json.Unmarshal(data, &varProductGroupAnalyticsResponseInner)

	if err != nil {
		return err
	}

	*o = ProductGroupAnalyticsResponseInner(varProductGroupAnalyticsResponseInner)

	additionalProperties := make(map[string]interface{})

	if err = json.Unmarshal(data, &additionalProperties); err == nil {
		delete(additionalProperties, "PRODUCT_GROUP_ID")
		delete(additionalProperties, "DATE")
		o.AdditionalProperties = additionalProperties
	}

	return err
}

type NullableProductGroupAnalyticsResponseInner struct {
	value *ProductGroupAnalyticsResponseInner
	isSet bool
}

func (v NullableProductGroupAnalyticsResponseInner) Get() *ProductGroupAnalyticsResponseInner {
	return v.value
}

func (v *NullableProductGroupAnalyticsResponseInner) Set(val *ProductGroupAnalyticsResponseInner) {
	v.value = val
	v.isSet = true
}

func (v NullableProductGroupAnalyticsResponseInner) IsSet() bool {
	return v.isSet
}

func (v *NullableProductGroupAnalyticsResponseInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableProductGroupAnalyticsResponseInner(val *ProductGroupAnalyticsResponseInner) *NullableProductGroupAnalyticsResponseInner {
	return &NullableProductGroupAnalyticsResponseInner{value: val, isSet: true}
}

func (v NullableProductGroupAnalyticsResponseInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableProductGroupAnalyticsResponseInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


