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

// checks if the GoogleProductCategory1Filter type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &GoogleProductCategory1Filter{}

// GoogleProductCategory1Filter struct for GoogleProductCategory1Filter
type GoogleProductCategory1Filter struct {
	GOOGLEPRODUCTCATEGORY1 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_1"`
}

type _GoogleProductCategory1Filter GoogleProductCategory1Filter

// NewGoogleProductCategory1Filter instantiates a new GoogleProductCategory1Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGoogleProductCategory1Filter(gOOGLEPRODUCTCATEGORY1 CatalogsProductGroupMultipleStringListCriteria) *GoogleProductCategory1Filter {
	this := GoogleProductCategory1Filter{}
	this.GOOGLEPRODUCTCATEGORY1 = gOOGLEPRODUCTCATEGORY1
	return &this
}

// NewGoogleProductCategory1FilterWithDefaults instantiates a new GoogleProductCategory1Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGoogleProductCategory1FilterWithDefaults() *GoogleProductCategory1Filter {
	this := GoogleProductCategory1Filter{}
	return &this
}

// GetGOOGLEPRODUCTCATEGORY1 returns the GOOGLEPRODUCTCATEGORY1 field value
func (o *GoogleProductCategory1Filter) GetGOOGLEPRODUCTCATEGORY1() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.GOOGLEPRODUCTCATEGORY1
}

// GetGOOGLEPRODUCTCATEGORY1Ok returns a tuple with the GOOGLEPRODUCTCATEGORY1 field value
// and a boolean to check if the value has been set.
func (o *GoogleProductCategory1Filter) GetGOOGLEPRODUCTCATEGORY1Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil {
		return CatalogsProductGroupMultipleStringListCriteria{}, false
	}
	return o.GOOGLEPRODUCTCATEGORY1, true
}

// SetGOOGLEPRODUCTCATEGORY1 sets field value
func (o *GoogleProductCategory1Filter) SetGOOGLEPRODUCTCATEGORY1(v CatalogsProductGroupMultipleStringListCriteria) {
	o.GOOGLEPRODUCTCATEGORY1 = v
}

func (o GoogleProductCategory1Filter) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o GoogleProductCategory1Filter) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["GOOGLE_PRODUCT_CATEGORY_1"] = o.GOOGLEPRODUCTCATEGORY1
	return toSerialize, nil
}

func (o *GoogleProductCategory1Filter) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"GOOGLE_PRODUCT_CATEGORY_1",
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

	varGoogleProductCategory1Filter := _GoogleProductCategory1Filter{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varGoogleProductCategory1Filter)

	if err != nil {
		return err
	}

	*o = GoogleProductCategory1Filter(varGoogleProductCategory1Filter)

	return err
}

type NullableGoogleProductCategory1Filter struct {
	value *GoogleProductCategory1Filter
	isSet bool
}

func (v NullableGoogleProductCategory1Filter) Get() *GoogleProductCategory1Filter {
	return v.value
}

func (v *NullableGoogleProductCategory1Filter) Set(val *GoogleProductCategory1Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableGoogleProductCategory1Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableGoogleProductCategory1Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGoogleProductCategory1Filter(val *GoogleProductCategory1Filter) *NullableGoogleProductCategory1Filter {
	return &NullableGoogleProductCategory1Filter{value: val, isSet: true}
}

func (v NullableGoogleProductCategory1Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGoogleProductCategory1Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


