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

// checks if the CatalogsListProductsByFilterRequestOneOf type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsListProductsByFilterRequestOneOf{}

// CatalogsListProductsByFilterRequestOneOf Request object to list products for a given feed_id and product group filter.
type CatalogsListProductsByFilterRequestOneOf struct {
	// Catalog Feed id pertaining to the catalog product group filter.
	FeedId string `json:"feed_id"`
	Filters CatalogsProductGroupFilters `json:"filters"`
}

type _CatalogsListProductsByFilterRequestOneOf CatalogsListProductsByFilterRequestOneOf

// NewCatalogsListProductsByFilterRequestOneOf instantiates a new CatalogsListProductsByFilterRequestOneOf object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsListProductsByFilterRequestOneOf(feedId string, filters CatalogsProductGroupFilters) *CatalogsListProductsByFilterRequestOneOf {
	this := CatalogsListProductsByFilterRequestOneOf{}
	this.FeedId = feedId
	this.Filters = filters
	return &this
}

// NewCatalogsListProductsByFilterRequestOneOfWithDefaults instantiates a new CatalogsListProductsByFilterRequestOneOf object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsListProductsByFilterRequestOneOfWithDefaults() *CatalogsListProductsByFilterRequestOneOf {
	this := CatalogsListProductsByFilterRequestOneOf{}
	return &this
}

// GetFeedId returns the FeedId field value
func (o *CatalogsListProductsByFilterRequestOneOf) GetFeedId() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.FeedId
}

// GetFeedIdOk returns a tuple with the FeedId field value
// and a boolean to check if the value has been set.
func (o *CatalogsListProductsByFilterRequestOneOf) GetFeedIdOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.FeedId, true
}

// SetFeedId sets field value
func (o *CatalogsListProductsByFilterRequestOneOf) SetFeedId(v string) {
	o.FeedId = v
}

// GetFilters returns the Filters field value
func (o *CatalogsListProductsByFilterRequestOneOf) GetFilters() CatalogsProductGroupFilters {
	if o == nil {
		var ret CatalogsProductGroupFilters
		return ret
	}

	return o.Filters
}

// GetFiltersOk returns a tuple with the Filters field value
// and a boolean to check if the value has been set.
func (o *CatalogsListProductsByFilterRequestOneOf) GetFiltersOk() (*CatalogsProductGroupFilters, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Filters, true
}

// SetFilters sets field value
func (o *CatalogsListProductsByFilterRequestOneOf) SetFilters(v CatalogsProductGroupFilters) {
	o.Filters = v
}

func (o CatalogsListProductsByFilterRequestOneOf) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsListProductsByFilterRequestOneOf) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["feed_id"] = o.FeedId
	toSerialize["filters"] = o.Filters
	return toSerialize, nil
}

func (o *CatalogsListProductsByFilterRequestOneOf) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"feed_id",
		"filters",
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

	varCatalogsListProductsByFilterRequestOneOf := _CatalogsListProductsByFilterRequestOneOf{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsListProductsByFilterRequestOneOf)

	if err != nil {
		return err
	}

	*o = CatalogsListProductsByFilterRequestOneOf(varCatalogsListProductsByFilterRequestOneOf)

	return err
}

type NullableCatalogsListProductsByFilterRequestOneOf struct {
	value *CatalogsListProductsByFilterRequestOneOf
	isSet bool
}

func (v NullableCatalogsListProductsByFilterRequestOneOf) Get() *CatalogsListProductsByFilterRequestOneOf {
	return v.value
}

func (v *NullableCatalogsListProductsByFilterRequestOneOf) Set(val *CatalogsListProductsByFilterRequestOneOf) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsListProductsByFilterRequestOneOf) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsListProductsByFilterRequestOneOf) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsListProductsByFilterRequestOneOf(val *CatalogsListProductsByFilterRequestOneOf) *NullableCatalogsListProductsByFilterRequestOneOf {
	return &NullableCatalogsListProductsByFilterRequestOneOf{value: val, isSet: true}
}

func (v NullableCatalogsListProductsByFilterRequestOneOf) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsListProductsByFilterRequestOneOf) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


