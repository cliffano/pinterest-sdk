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

// checks if the LinkedBusiness type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &LinkedBusiness{}

// LinkedBusiness struct for LinkedBusiness
type LinkedBusiness struct {
	// Username
	Username *string `json:"username,omitempty"`
	// image_small_url
	ImageSmallUrl *string `json:"image_small_url,omitempty"`
	// image_medium_url
	ImageMediumUrl *string `json:"image_medium_url,omitempty"`
	// image_large_url
	ImageLargeUrl *string `json:"image_large_url,omitempty"`
	// image_xlarge_url
	ImageXlargeUrl *string `json:"image_xlarge_url,omitempty"`
}

// NewLinkedBusiness instantiates a new LinkedBusiness object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewLinkedBusiness() *LinkedBusiness {
	this := LinkedBusiness{}
	return &this
}

// NewLinkedBusinessWithDefaults instantiates a new LinkedBusiness object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewLinkedBusinessWithDefaults() *LinkedBusiness {
	this := LinkedBusiness{}
	return &this
}

// GetUsername returns the Username field value if set, zero value otherwise.
func (o *LinkedBusiness) GetUsername() string {
	if o == nil || IsNil(o.Username) {
		var ret string
		return ret
	}
	return *o.Username
}

// GetUsernameOk returns a tuple with the Username field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LinkedBusiness) GetUsernameOk() (*string, bool) {
	if o == nil || IsNil(o.Username) {
		return nil, false
	}
	return o.Username, true
}

// HasUsername returns a boolean if a field has been set.
func (o *LinkedBusiness) HasUsername() bool {
	if o != nil && !IsNil(o.Username) {
		return true
	}

	return false
}

// SetUsername gets a reference to the given string and assigns it to the Username field.
func (o *LinkedBusiness) SetUsername(v string) {
	o.Username = &v
}

// GetImageSmallUrl returns the ImageSmallUrl field value if set, zero value otherwise.
func (o *LinkedBusiness) GetImageSmallUrl() string {
	if o == nil || IsNil(o.ImageSmallUrl) {
		var ret string
		return ret
	}
	return *o.ImageSmallUrl
}

// GetImageSmallUrlOk returns a tuple with the ImageSmallUrl field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LinkedBusiness) GetImageSmallUrlOk() (*string, bool) {
	if o == nil || IsNil(o.ImageSmallUrl) {
		return nil, false
	}
	return o.ImageSmallUrl, true
}

// HasImageSmallUrl returns a boolean if a field has been set.
func (o *LinkedBusiness) HasImageSmallUrl() bool {
	if o != nil && !IsNil(o.ImageSmallUrl) {
		return true
	}

	return false
}

// SetImageSmallUrl gets a reference to the given string and assigns it to the ImageSmallUrl field.
func (o *LinkedBusiness) SetImageSmallUrl(v string) {
	o.ImageSmallUrl = &v
}

// GetImageMediumUrl returns the ImageMediumUrl field value if set, zero value otherwise.
func (o *LinkedBusiness) GetImageMediumUrl() string {
	if o == nil || IsNil(o.ImageMediumUrl) {
		var ret string
		return ret
	}
	return *o.ImageMediumUrl
}

// GetImageMediumUrlOk returns a tuple with the ImageMediumUrl field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LinkedBusiness) GetImageMediumUrlOk() (*string, bool) {
	if o == nil || IsNil(o.ImageMediumUrl) {
		return nil, false
	}
	return o.ImageMediumUrl, true
}

// HasImageMediumUrl returns a boolean if a field has been set.
func (o *LinkedBusiness) HasImageMediumUrl() bool {
	if o != nil && !IsNil(o.ImageMediumUrl) {
		return true
	}

	return false
}

// SetImageMediumUrl gets a reference to the given string and assigns it to the ImageMediumUrl field.
func (o *LinkedBusiness) SetImageMediumUrl(v string) {
	o.ImageMediumUrl = &v
}

// GetImageLargeUrl returns the ImageLargeUrl field value if set, zero value otherwise.
func (o *LinkedBusiness) GetImageLargeUrl() string {
	if o == nil || IsNil(o.ImageLargeUrl) {
		var ret string
		return ret
	}
	return *o.ImageLargeUrl
}

// GetImageLargeUrlOk returns a tuple with the ImageLargeUrl field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LinkedBusiness) GetImageLargeUrlOk() (*string, bool) {
	if o == nil || IsNil(o.ImageLargeUrl) {
		return nil, false
	}
	return o.ImageLargeUrl, true
}

// HasImageLargeUrl returns a boolean if a field has been set.
func (o *LinkedBusiness) HasImageLargeUrl() bool {
	if o != nil && !IsNil(o.ImageLargeUrl) {
		return true
	}

	return false
}

// SetImageLargeUrl gets a reference to the given string and assigns it to the ImageLargeUrl field.
func (o *LinkedBusiness) SetImageLargeUrl(v string) {
	o.ImageLargeUrl = &v
}

// GetImageXlargeUrl returns the ImageXlargeUrl field value if set, zero value otherwise.
func (o *LinkedBusiness) GetImageXlargeUrl() string {
	if o == nil || IsNil(o.ImageXlargeUrl) {
		var ret string
		return ret
	}
	return *o.ImageXlargeUrl
}

// GetImageXlargeUrlOk returns a tuple with the ImageXlargeUrl field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LinkedBusiness) GetImageXlargeUrlOk() (*string, bool) {
	if o == nil || IsNil(o.ImageXlargeUrl) {
		return nil, false
	}
	return o.ImageXlargeUrl, true
}

// HasImageXlargeUrl returns a boolean if a field has been set.
func (o *LinkedBusiness) HasImageXlargeUrl() bool {
	if o != nil && !IsNil(o.ImageXlargeUrl) {
		return true
	}

	return false
}

// SetImageXlargeUrl gets a reference to the given string and assigns it to the ImageXlargeUrl field.
func (o *LinkedBusiness) SetImageXlargeUrl(v string) {
	o.ImageXlargeUrl = &v
}

func (o LinkedBusiness) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o LinkedBusiness) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Username) {
		toSerialize["username"] = o.Username
	}
	if !IsNil(o.ImageSmallUrl) {
		toSerialize["image_small_url"] = o.ImageSmallUrl
	}
	if !IsNil(o.ImageMediumUrl) {
		toSerialize["image_medium_url"] = o.ImageMediumUrl
	}
	if !IsNil(o.ImageLargeUrl) {
		toSerialize["image_large_url"] = o.ImageLargeUrl
	}
	if !IsNil(o.ImageXlargeUrl) {
		toSerialize["image_xlarge_url"] = o.ImageXlargeUrl
	}
	return toSerialize, nil
}

type NullableLinkedBusiness struct {
	value *LinkedBusiness
	isSet bool
}

func (v NullableLinkedBusiness) Get() *LinkedBusiness {
	return v.value
}

func (v *NullableLinkedBusiness) Set(val *LinkedBusiness) {
	v.value = val
	v.isSet = true
}

func (v NullableLinkedBusiness) IsSet() bool {
	return v.isSet
}

func (v *NullableLinkedBusiness) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableLinkedBusiness(val *LinkedBusiness) *NullableLinkedBusiness {
	return &NullableLinkedBusiness{value: val, isSet: true}
}

func (v NullableLinkedBusiness) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableLinkedBusiness) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


