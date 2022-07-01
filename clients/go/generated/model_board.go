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
)

// Board Board
type Board struct {
	Id *string `json:"id,omitempty"`
	Name string `json:"name"`
	Description NullableString `json:"description,omitempty"`
	Owner *BoardOwner `json:"owner,omitempty"`
	// Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
	Privacy *string `json:"privacy,omitempty"`
}

// NewBoard instantiates a new Board object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewBoard(name string) *Board {
	this := Board{}
	this.Name = name
	var privacy string = "PUBLIC"
	this.Privacy = &privacy
	return &this
}

// NewBoardWithDefaults instantiates a new Board object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewBoardWithDefaults() *Board {
	this := Board{}
	var privacy string = "PUBLIC"
	this.Privacy = &privacy
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *Board) GetId() string {
	if o == nil || o.Id == nil {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Board) GetIdOk() (*string, bool) {
	if o == nil || o.Id == nil {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *Board) HasId() bool {
	if o != nil && o.Id != nil {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *Board) SetId(v string) {
	o.Id = &v
}

// GetName returns the Name field value
func (o *Board) GetName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Name
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
func (o *Board) GetNameOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Name, true
}

// SetName sets field value
func (o *Board) SetName(v string) {
	o.Name = v
}

// GetDescription returns the Description field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *Board) GetDescription() string {
	if o == nil || o.Description.Get() == nil {
		var ret string
		return ret
	}
	return *o.Description.Get()
}

// GetDescriptionOk returns a tuple with the Description field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *Board) GetDescriptionOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Description.Get(), o.Description.IsSet()
}

// HasDescription returns a boolean if a field has been set.
func (o *Board) HasDescription() bool {
	if o != nil && o.Description.IsSet() {
		return true
	}

	return false
}

// SetDescription gets a reference to the given NullableString and assigns it to the Description field.
func (o *Board) SetDescription(v string) {
	o.Description.Set(&v)
}
// SetDescriptionNil sets the value for Description to be an explicit nil
func (o *Board) SetDescriptionNil() {
	o.Description.Set(nil)
}

// UnsetDescription ensures that no value is present for Description, not even an explicit nil
func (o *Board) UnsetDescription() {
	o.Description.Unset()
}

// GetOwner returns the Owner field value if set, zero value otherwise.
func (o *Board) GetOwner() BoardOwner {
	if o == nil || o.Owner == nil {
		var ret BoardOwner
		return ret
	}
	return *o.Owner
}

// GetOwnerOk returns a tuple with the Owner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Board) GetOwnerOk() (*BoardOwner, bool) {
	if o == nil || o.Owner == nil {
		return nil, false
	}
	return o.Owner, true
}

// HasOwner returns a boolean if a field has been set.
func (o *Board) HasOwner() bool {
	if o != nil && o.Owner != nil {
		return true
	}

	return false
}

// SetOwner gets a reference to the given BoardOwner and assigns it to the Owner field.
func (o *Board) SetOwner(v BoardOwner) {
	o.Owner = &v
}

// GetPrivacy returns the Privacy field value if set, zero value otherwise.
func (o *Board) GetPrivacy() string {
	if o == nil || o.Privacy == nil {
		var ret string
		return ret
	}
	return *o.Privacy
}

// GetPrivacyOk returns a tuple with the Privacy field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Board) GetPrivacyOk() (*string, bool) {
	if o == nil || o.Privacy == nil {
		return nil, false
	}
	return o.Privacy, true
}

// HasPrivacy returns a boolean if a field has been set.
func (o *Board) HasPrivacy() bool {
	if o != nil && o.Privacy != nil {
		return true
	}

	return false
}

// SetPrivacy gets a reference to the given string and assigns it to the Privacy field.
func (o *Board) SetPrivacy(v string) {
	o.Privacy = &v
}

func (o Board) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Id != nil {
		toSerialize["id"] = o.Id
	}
	if true {
		toSerialize["name"] = o.Name
	}
	if o.Description.IsSet() {
		toSerialize["description"] = o.Description.Get()
	}
	if o.Owner != nil {
		toSerialize["owner"] = o.Owner
	}
	if o.Privacy != nil {
		toSerialize["privacy"] = o.Privacy
	}
	return json.Marshal(toSerialize)
}

type NullableBoard struct {
	value *Board
	isSet bool
}

func (v NullableBoard) Get() *Board {
	return v.value
}

func (v *NullableBoard) Set(val *Board) {
	v.value = val
	v.isSet = true
}

func (v NullableBoard) IsSet() bool {
	return v.isSet
}

func (v *NullableBoard) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableBoard(val *Board) *NullableBoard {
	return &NullableBoard{value: val, isSet: true}
}

func (v NullableBoard) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableBoard) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


