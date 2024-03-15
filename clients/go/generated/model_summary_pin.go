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

// checks if the SummaryPin type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &SummaryPin{}

// SummaryPin Summarized pin information
type SummaryPin struct {
	Media *SummaryPinMedia `json:"media,omitempty"`
	AltText NullableString `json:"alt_text,omitempty"`
	Link NullableString `json:"link,omitempty"`
	Title NullableString `json:"title,omitempty"`
	Description NullableString `json:"description,omitempty"`
}

// NewSummaryPin instantiates a new SummaryPin object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSummaryPin() *SummaryPin {
	this := SummaryPin{}
	return &this
}

// NewSummaryPinWithDefaults instantiates a new SummaryPin object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSummaryPinWithDefaults() *SummaryPin {
	this := SummaryPin{}
	return &this
}

// GetMedia returns the Media field value if set, zero value otherwise.
func (o *SummaryPin) GetMedia() SummaryPinMedia {
	if o == nil || IsNil(o.Media) {
		var ret SummaryPinMedia
		return ret
	}
	return *o.Media
}

// GetMediaOk returns a tuple with the Media field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SummaryPin) GetMediaOk() (*SummaryPinMedia, bool) {
	if o == nil || IsNil(o.Media) {
		return nil, false
	}
	return o.Media, true
}

// HasMedia returns a boolean if a field has been set.
func (o *SummaryPin) HasMedia() bool {
	if o != nil && !IsNil(o.Media) {
		return true
	}

	return false
}

// SetMedia gets a reference to the given SummaryPinMedia and assigns it to the Media field.
func (o *SummaryPin) SetMedia(v SummaryPinMedia) {
	o.Media = &v
}

// GetAltText returns the AltText field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *SummaryPin) GetAltText() string {
	if o == nil || IsNil(o.AltText.Get()) {
		var ret string
		return ret
	}
	return *o.AltText.Get()
}

// GetAltTextOk returns a tuple with the AltText field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *SummaryPin) GetAltTextOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.AltText.Get(), o.AltText.IsSet()
}

// HasAltText returns a boolean if a field has been set.
func (o *SummaryPin) HasAltText() bool {
	if o != nil && o.AltText.IsSet() {
		return true
	}

	return false
}

// SetAltText gets a reference to the given NullableString and assigns it to the AltText field.
func (o *SummaryPin) SetAltText(v string) {
	o.AltText.Set(&v)
}
// SetAltTextNil sets the value for AltText to be an explicit nil
func (o *SummaryPin) SetAltTextNil() {
	o.AltText.Set(nil)
}

// UnsetAltText ensures that no value is present for AltText, not even an explicit nil
func (o *SummaryPin) UnsetAltText() {
	o.AltText.Unset()
}

// GetLink returns the Link field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *SummaryPin) GetLink() string {
	if o == nil || IsNil(o.Link.Get()) {
		var ret string
		return ret
	}
	return *o.Link.Get()
}

// GetLinkOk returns a tuple with the Link field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *SummaryPin) GetLinkOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Link.Get(), o.Link.IsSet()
}

// HasLink returns a boolean if a field has been set.
func (o *SummaryPin) HasLink() bool {
	if o != nil && o.Link.IsSet() {
		return true
	}

	return false
}

// SetLink gets a reference to the given NullableString and assigns it to the Link field.
func (o *SummaryPin) SetLink(v string) {
	o.Link.Set(&v)
}
// SetLinkNil sets the value for Link to be an explicit nil
func (o *SummaryPin) SetLinkNil() {
	o.Link.Set(nil)
}

// UnsetLink ensures that no value is present for Link, not even an explicit nil
func (o *SummaryPin) UnsetLink() {
	o.Link.Unset()
}

// GetTitle returns the Title field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *SummaryPin) GetTitle() string {
	if o == nil || IsNil(o.Title.Get()) {
		var ret string
		return ret
	}
	return *o.Title.Get()
}

// GetTitleOk returns a tuple with the Title field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *SummaryPin) GetTitleOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Title.Get(), o.Title.IsSet()
}

// HasTitle returns a boolean if a field has been set.
func (o *SummaryPin) HasTitle() bool {
	if o != nil && o.Title.IsSet() {
		return true
	}

	return false
}

// SetTitle gets a reference to the given NullableString and assigns it to the Title field.
func (o *SummaryPin) SetTitle(v string) {
	o.Title.Set(&v)
}
// SetTitleNil sets the value for Title to be an explicit nil
func (o *SummaryPin) SetTitleNil() {
	o.Title.Set(nil)
}

// UnsetTitle ensures that no value is present for Title, not even an explicit nil
func (o *SummaryPin) UnsetTitle() {
	o.Title.Unset()
}

// GetDescription returns the Description field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *SummaryPin) GetDescription() string {
	if o == nil || IsNil(o.Description.Get()) {
		var ret string
		return ret
	}
	return *o.Description.Get()
}

// GetDescriptionOk returns a tuple with the Description field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *SummaryPin) GetDescriptionOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Description.Get(), o.Description.IsSet()
}

// HasDescription returns a boolean if a field has been set.
func (o *SummaryPin) HasDescription() bool {
	if o != nil && o.Description.IsSet() {
		return true
	}

	return false
}

// SetDescription gets a reference to the given NullableString and assigns it to the Description field.
func (o *SummaryPin) SetDescription(v string) {
	o.Description.Set(&v)
}
// SetDescriptionNil sets the value for Description to be an explicit nil
func (o *SummaryPin) SetDescriptionNil() {
	o.Description.Set(nil)
}

// UnsetDescription ensures that no value is present for Description, not even an explicit nil
func (o *SummaryPin) UnsetDescription() {
	o.Description.Unset()
}

func (o SummaryPin) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o SummaryPin) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Media) {
		toSerialize["media"] = o.Media
	}
	if o.AltText.IsSet() {
		toSerialize["alt_text"] = o.AltText.Get()
	}
	if o.Link.IsSet() {
		toSerialize["link"] = o.Link.Get()
	}
	if o.Title.IsSet() {
		toSerialize["title"] = o.Title.Get()
	}
	if o.Description.IsSet() {
		toSerialize["description"] = o.Description.Get()
	}
	return toSerialize, nil
}

type NullableSummaryPin struct {
	value *SummaryPin
	isSet bool
}

func (v NullableSummaryPin) Get() *SummaryPin {
	return v.value
}

func (v *NullableSummaryPin) Set(val *SummaryPin) {
	v.value = val
	v.isSet = true
}

func (v NullableSummaryPin) IsSet() bool {
	return v.isSet
}

func (v *NullableSummaryPin) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSummaryPin(val *SummaryPin) *NullableSummaryPin {
	return &NullableSummaryPin{value: val, isSet: true}
}

func (v NullableSummaryPin) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSummaryPin) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


