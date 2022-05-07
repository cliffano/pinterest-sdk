/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: pinterest-api@pinterest.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// Paginated struct for Paginated
type Paginated struct {
	Items []map[string]interface{} `json:"items"`
	Bookmark NullableString `json:"bookmark,omitempty"`
}

// NewPaginated instantiates a new Paginated object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPaginated(items []map[string]interface{}) *Paginated {
	this := Paginated{}
	this.Items = items
	return &this
}

// NewPaginatedWithDefaults instantiates a new Paginated object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPaginatedWithDefaults() *Paginated {
	this := Paginated{}
	return &this
}

// GetItems returns the Items field value
func (o *Paginated) GetItems() []map[string]interface{} {
	if o == nil {
		var ret []map[string]interface{}
		return ret
	}

	return o.Items
}

// GetItemsOk returns a tuple with the Items field value
// and a boolean to check if the value has been set.
func (o *Paginated) GetItemsOk() ([]map[string]interface{}, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Items, true
}

// SetItems sets field value
func (o *Paginated) SetItems(v []map[string]interface{}) {
	o.Items = v
}

// GetBookmark returns the Bookmark field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Paginated) GetBookmark() string {
	if o == nil || o.Bookmark.Get() == nil {
		var ret string
		return ret
	}
	return *o.Bookmark.Get()
}

// GetBookmarkOk returns a tuple with the Bookmark field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Paginated) GetBookmarkOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Bookmark.Get(), o.Bookmark.IsSet()
}

// HasBookmark returns a boolean if a field has been set.
func (o *Paginated) HasBookmark() bool {
	if o != nil && o.Bookmark.IsSet() {
		return true
	}

	return false
}

// SetBookmark gets a reference to the given NullableString and assigns it to the Bookmark field.
func (o *Paginated) SetBookmark(v string) {
	o.Bookmark.Set(&v)
}
// SetBookmarkNil sets the value for Bookmark to be an explicit nil
func (o *Paginated) SetBookmarkNil() {
	o.Bookmark.Set(nil)
}

// UnsetBookmark ensures that no value is present for Bookmark, not even an explicit nil
func (o *Paginated) UnsetBookmark() {
	o.Bookmark.Unset()
}

func (o Paginated) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["items"] = o.Items
	}
	if o.Bookmark.IsSet() {
		toSerialize["bookmark"] = o.Bookmark.Get()
	}
	return json.Marshal(toSerialize)
}

type NullablePaginated struct {
	value *Paginated
	isSet bool
}

func (v NullablePaginated) Get() *Paginated {
	return v.value
}

func (v *NullablePaginated) Set(val *Paginated) {
	v.value = val
	v.isSet = true
}

func (v NullablePaginated) IsSet() bool {
	return v.isSet
}

func (v *NullablePaginated) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePaginated(val *Paginated) *NullablePaginated {
	return &NullablePaginated{value: val, isSet: true}
}

func (v NullablePaginated) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePaginated) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


