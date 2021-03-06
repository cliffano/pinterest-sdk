/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: blah@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"time"
)

// Pin Pin
type Pin struct {
	Id *string `json:"id,omitempty"`
	CreatedAt *time.Time `json:"created_at,omitempty"`
	Link NullableString `json:"link,omitempty"`
	Title NullableString `json:"title,omitempty"`
	Description NullableString `json:"description,omitempty"`
	AltText NullableString `json:"alt_text,omitempty"`
	// The board to which this Pin belongs.
	BoardId *string `json:"board_id,omitempty"`
	// The board section to which this Pin belongs.
	BoardSectionId NullableString `json:"board_section_id,omitempty"`
	BoardOwner *BoardOwner `json:"board_owner,omitempty"`
	Media *PinMedia `json:"media,omitempty"`
	MediaSource *PinMediaSource `json:"media_source,omitempty"`
}

// NewPin instantiates a new Pin object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPin() *Pin {
	this := Pin{}
	return &this
}

// NewPinWithDefaults instantiates a new Pin object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPinWithDefaults() *Pin {
	this := Pin{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *Pin) GetId() string {
	if o == nil || o.Id == nil {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Pin) GetIdOk() (*string, bool) {
	if o == nil || o.Id == nil {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *Pin) HasId() bool {
	if o != nil && o.Id != nil {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *Pin) SetId(v string) {
	o.Id = &v
}

// GetCreatedAt returns the CreatedAt field value if set, zero value otherwise.
func (o *Pin) GetCreatedAt() time.Time {
	if o == nil || o.CreatedAt == nil {
		var ret time.Time
		return ret
	}
	return *o.CreatedAt
}

// GetCreatedAtOk returns a tuple with the CreatedAt field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Pin) GetCreatedAtOk() (*time.Time, bool) {
	if o == nil || o.CreatedAt == nil {
		return nil, false
	}
	return o.CreatedAt, true
}

// HasCreatedAt returns a boolean if a field has been set.
func (o *Pin) HasCreatedAt() bool {
	if o != nil && o.CreatedAt != nil {
		return true
	}

	return false
}

// SetCreatedAt gets a reference to the given time.Time and assigns it to the CreatedAt field.
func (o *Pin) SetCreatedAt(v time.Time) {
	o.CreatedAt = &v
}

// GetLink returns the Link field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Pin) GetLink() string {
	if o == nil || o.Link.Get() == nil {
		var ret string
		return ret
	}
	return *o.Link.Get()
}

// GetLinkOk returns a tuple with the Link field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Pin) GetLinkOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Link.Get(), o.Link.IsSet()
}

// HasLink returns a boolean if a field has been set.
func (o *Pin) HasLink() bool {
	if o != nil && o.Link.IsSet() {
		return true
	}

	return false
}

// SetLink gets a reference to the given NullableString and assigns it to the Link field.
func (o *Pin) SetLink(v string) {
	o.Link.Set(&v)
}
// SetLinkNil sets the value for Link to be an explicit nil
func (o *Pin) SetLinkNil() {
	o.Link.Set(nil)
}

// UnsetLink ensures that no value is present for Link, not even an explicit nil
func (o *Pin) UnsetLink() {
	o.Link.Unset()
}

// GetTitle returns the Title field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Pin) GetTitle() string {
	if o == nil || o.Title.Get() == nil {
		var ret string
		return ret
	}
	return *o.Title.Get()
}

// GetTitleOk returns a tuple with the Title field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Pin) GetTitleOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Title.Get(), o.Title.IsSet()
}

// HasTitle returns a boolean if a field has been set.
func (o *Pin) HasTitle() bool {
	if o != nil && o.Title.IsSet() {
		return true
	}

	return false
}

// SetTitle gets a reference to the given NullableString and assigns it to the Title field.
func (o *Pin) SetTitle(v string) {
	o.Title.Set(&v)
}
// SetTitleNil sets the value for Title to be an explicit nil
func (o *Pin) SetTitleNil() {
	o.Title.Set(nil)
}

// UnsetTitle ensures that no value is present for Title, not even an explicit nil
func (o *Pin) UnsetTitle() {
	o.Title.Unset()
}

// GetDescription returns the Description field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Pin) GetDescription() string {
	if o == nil || o.Description.Get() == nil {
		var ret string
		return ret
	}
	return *o.Description.Get()
}

// GetDescriptionOk returns a tuple with the Description field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Pin) GetDescriptionOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Description.Get(), o.Description.IsSet()
}

// HasDescription returns a boolean if a field has been set.
func (o *Pin) HasDescription() bool {
	if o != nil && o.Description.IsSet() {
		return true
	}

	return false
}

// SetDescription gets a reference to the given NullableString and assigns it to the Description field.
func (o *Pin) SetDescription(v string) {
	o.Description.Set(&v)
}
// SetDescriptionNil sets the value for Description to be an explicit nil
func (o *Pin) SetDescriptionNil() {
	o.Description.Set(nil)
}

// UnsetDescription ensures that no value is present for Description, not even an explicit nil
func (o *Pin) UnsetDescription() {
	o.Description.Unset()
}

// GetAltText returns the AltText field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Pin) GetAltText() string {
	if o == nil || o.AltText.Get() == nil {
		var ret string
		return ret
	}
	return *o.AltText.Get()
}

// GetAltTextOk returns a tuple with the AltText field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Pin) GetAltTextOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.AltText.Get(), o.AltText.IsSet()
}

// HasAltText returns a boolean if a field has been set.
func (o *Pin) HasAltText() bool {
	if o != nil && o.AltText.IsSet() {
		return true
	}

	return false
}

// SetAltText gets a reference to the given NullableString and assigns it to the AltText field.
func (o *Pin) SetAltText(v string) {
	o.AltText.Set(&v)
}
// SetAltTextNil sets the value for AltText to be an explicit nil
func (o *Pin) SetAltTextNil() {
	o.AltText.Set(nil)
}

// UnsetAltText ensures that no value is present for AltText, not even an explicit nil
func (o *Pin) UnsetAltText() {
	o.AltText.Unset()
}

// GetBoardId returns the BoardId field value if set, zero value otherwise.
func (o *Pin) GetBoardId() string {
	if o == nil || o.BoardId == nil {
		var ret string
		return ret
	}
	return *o.BoardId
}

// GetBoardIdOk returns a tuple with the BoardId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Pin) GetBoardIdOk() (*string, bool) {
	if o == nil || o.BoardId == nil {
		return nil, false
	}
	return o.BoardId, true
}

// HasBoardId returns a boolean if a field has been set.
func (o *Pin) HasBoardId() bool {
	if o != nil && o.BoardId != nil {
		return true
	}

	return false
}

// SetBoardId gets a reference to the given string and assigns it to the BoardId field.
func (o *Pin) SetBoardId(v string) {
	o.BoardId = &v
}

// GetBoardSectionId returns the BoardSectionId field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Pin) GetBoardSectionId() string {
	if o == nil || o.BoardSectionId.Get() == nil {
		var ret string
		return ret
	}
	return *o.BoardSectionId.Get()
}

// GetBoardSectionIdOk returns a tuple with the BoardSectionId field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Pin) GetBoardSectionIdOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.BoardSectionId.Get(), o.BoardSectionId.IsSet()
}

// HasBoardSectionId returns a boolean if a field has been set.
func (o *Pin) HasBoardSectionId() bool {
	if o != nil && o.BoardSectionId.IsSet() {
		return true
	}

	return false
}

// SetBoardSectionId gets a reference to the given NullableString and assigns it to the BoardSectionId field.
func (o *Pin) SetBoardSectionId(v string) {
	o.BoardSectionId.Set(&v)
}
// SetBoardSectionIdNil sets the value for BoardSectionId to be an explicit nil
func (o *Pin) SetBoardSectionIdNil() {
	o.BoardSectionId.Set(nil)
}

// UnsetBoardSectionId ensures that no value is present for BoardSectionId, not even an explicit nil
func (o *Pin) UnsetBoardSectionId() {
	o.BoardSectionId.Unset()
}

// GetBoardOwner returns the BoardOwner field value if set, zero value otherwise.
func (o *Pin) GetBoardOwner() BoardOwner {
	if o == nil || o.BoardOwner == nil {
		var ret BoardOwner
		return ret
	}
	return *o.BoardOwner
}

// GetBoardOwnerOk returns a tuple with the BoardOwner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Pin) GetBoardOwnerOk() (*BoardOwner, bool) {
	if o == nil || o.BoardOwner == nil {
		return nil, false
	}
	return o.BoardOwner, true
}

// HasBoardOwner returns a boolean if a field has been set.
func (o *Pin) HasBoardOwner() bool {
	if o != nil && o.BoardOwner != nil {
		return true
	}

	return false
}

// SetBoardOwner gets a reference to the given BoardOwner and assigns it to the BoardOwner field.
func (o *Pin) SetBoardOwner(v BoardOwner) {
	o.BoardOwner = &v
}

// GetMedia returns the Media field value if set, zero value otherwise.
func (o *Pin) GetMedia() PinMedia {
	if o == nil || o.Media == nil {
		var ret PinMedia
		return ret
	}
	return *o.Media
}

// GetMediaOk returns a tuple with the Media field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Pin) GetMediaOk() (*PinMedia, bool) {
	if o == nil || o.Media == nil {
		return nil, false
	}
	return o.Media, true
}

// HasMedia returns a boolean if a field has been set.
func (o *Pin) HasMedia() bool {
	if o != nil && o.Media != nil {
		return true
	}

	return false
}

// SetMedia gets a reference to the given PinMedia and assigns it to the Media field.
func (o *Pin) SetMedia(v PinMedia) {
	o.Media = &v
}

// GetMediaSource returns the MediaSource field value if set, zero value otherwise.
func (o *Pin) GetMediaSource() PinMediaSource {
	if o == nil || o.MediaSource == nil {
		var ret PinMediaSource
		return ret
	}
	return *o.MediaSource
}

// GetMediaSourceOk returns a tuple with the MediaSource field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Pin) GetMediaSourceOk() (*PinMediaSource, bool) {
	if o == nil || o.MediaSource == nil {
		return nil, false
	}
	return o.MediaSource, true
}

// HasMediaSource returns a boolean if a field has been set.
func (o *Pin) HasMediaSource() bool {
	if o != nil && o.MediaSource != nil {
		return true
	}

	return false
}

// SetMediaSource gets a reference to the given PinMediaSource and assigns it to the MediaSource field.
func (o *Pin) SetMediaSource(v PinMediaSource) {
	o.MediaSource = &v
}

func (o Pin) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Id != nil {
		toSerialize["id"] = o.Id
	}
	if o.CreatedAt != nil {
		toSerialize["created_at"] = o.CreatedAt
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
	if o.AltText.IsSet() {
		toSerialize["alt_text"] = o.AltText.Get()
	}
	if o.BoardId != nil {
		toSerialize["board_id"] = o.BoardId
	}
	if o.BoardSectionId.IsSet() {
		toSerialize["board_section_id"] = o.BoardSectionId.Get()
	}
	if o.BoardOwner != nil {
		toSerialize["board_owner"] = o.BoardOwner
	}
	if o.Media != nil {
		toSerialize["media"] = o.Media
	}
	if o.MediaSource != nil {
		toSerialize["media_source"] = o.MediaSource
	}
	return json.Marshal(toSerialize)
}

type NullablePin struct {
	value *Pin
	isSet bool
}

func (v NullablePin) Get() *Pin {
	return v.value
}

func (v *NullablePin) Set(val *Pin) {
	v.value = val
	v.isSet = true
}

func (v NullablePin) IsSet() bool {
	return v.isSet
}

func (v *NullablePin) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePin(val *Pin) *NullablePin {
	return &NullablePin{value: val, isSet: true}
}

func (v NullablePin) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePin) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


