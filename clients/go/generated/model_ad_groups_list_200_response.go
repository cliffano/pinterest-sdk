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

// checks if the AdGroupsList200Response type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &AdGroupsList200Response{}

// AdGroupsList200Response struct for AdGroupsList200Response
type AdGroupsList200Response struct {
	Items []AdGroupResponse `json:"items"`
	Bookmark NullableString `json:"bookmark,omitempty"`
}

type _AdGroupsList200Response AdGroupsList200Response

// NewAdGroupsList200Response instantiates a new AdGroupsList200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdGroupsList200Response(items []AdGroupResponse) *AdGroupsList200Response {
	this := AdGroupsList200Response{}
	this.Items = items
	return &this
}

// NewAdGroupsList200ResponseWithDefaults instantiates a new AdGroupsList200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdGroupsList200ResponseWithDefaults() *AdGroupsList200Response {
	this := AdGroupsList200Response{}
	return &this
}

// GetItems returns the Items field value
func (o *AdGroupsList200Response) GetItems() []AdGroupResponse {
	if o == nil {
		var ret []AdGroupResponse
		return ret
	}

	return o.Items
}

// GetItemsOk returns a tuple with the Items field value
// and a boolean to check if the value has been set.
func (o *AdGroupsList200Response) GetItemsOk() ([]AdGroupResponse, bool) {
	if o == nil {
		return nil, false
	}
	return o.Items, true
}

// SetItems sets field value
func (o *AdGroupsList200Response) SetItems(v []AdGroupResponse) {
	o.Items = v
}

// GetBookmark returns the Bookmark field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdGroupsList200Response) GetBookmark() string {
	if o == nil || IsNil(o.Bookmark.Get()) {
		var ret string
		return ret
	}
	return *o.Bookmark.Get()
}

// GetBookmarkOk returns a tuple with the Bookmark field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdGroupsList200Response) GetBookmarkOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Bookmark.Get(), o.Bookmark.IsSet()
}

// HasBookmark returns a boolean if a field has been set.
func (o *AdGroupsList200Response) HasBookmark() bool {
	if o != nil && o.Bookmark.IsSet() {
		return true
	}

	return false
}

// SetBookmark gets a reference to the given NullableString and assigns it to the Bookmark field.
func (o *AdGroupsList200Response) SetBookmark(v string) {
	o.Bookmark.Set(&v)
}
// SetBookmarkNil sets the value for Bookmark to be an explicit nil
func (o *AdGroupsList200Response) SetBookmarkNil() {
	o.Bookmark.Set(nil)
}

// UnsetBookmark ensures that no value is present for Bookmark, not even an explicit nil
func (o *AdGroupsList200Response) UnsetBookmark() {
	o.Bookmark.Unset()
}

func (o AdGroupsList200Response) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o AdGroupsList200Response) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["items"] = o.Items
	if o.Bookmark.IsSet() {
		toSerialize["bookmark"] = o.Bookmark.Get()
	}
	return toSerialize, nil
}

func (o *AdGroupsList200Response) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"items",
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

	varAdGroupsList200Response := _AdGroupsList200Response{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varAdGroupsList200Response)

	if err != nil {
		return err
	}

	*o = AdGroupsList200Response(varAdGroupsList200Response)

	return err
}

type NullableAdGroupsList200Response struct {
	value *AdGroupsList200Response
	isSet bool
}

func (v NullableAdGroupsList200Response) Get() *AdGroupsList200Response {
	return v.value
}

func (v *NullableAdGroupsList200Response) Set(val *AdGroupsList200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableAdGroupsList200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableAdGroupsList200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdGroupsList200Response(val *AdGroupsList200Response) *NullableAdGroupsList200Response {
	return &NullableAdGroupsList200Response{value: val, isSet: true}
}

func (v NullableAdGroupsList200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdGroupsList200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


