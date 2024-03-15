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

// checks if the AdAccount type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &AdAccount{}

// AdAccount struct for AdAccount
type AdAccount struct {
	Id *string `json:"id,omitempty"`
	Name *string `json:"name,omitempty"`
	Owner *AdAccountOwner `json:"owner,omitempty"`
	Country *Country `json:"country,omitempty"`
	Currency *Currency `json:"currency,omitempty"`
	Permissions []BusinessAccessRole `json:"permissions,omitempty"`
	// Creation time. Unix timestamp in seconds.
	CreatedTime NullableInt32 `json:"created_time,omitempty"`
	// Last update time. Unix timestamp in seconds.
	UpdatedTime NullableInt32 `json:"updated_time,omitempty"`
}

// NewAdAccount instantiates a new AdAccount object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdAccount() *AdAccount {
	this := AdAccount{}
	return &this
}

// NewAdAccountWithDefaults instantiates a new AdAccount object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdAccountWithDefaults() *AdAccount {
	this := AdAccount{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *AdAccount) GetId() string {
	if o == nil || IsNil(o.Id) {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdAccount) GetIdOk() (*string, bool) {
	if o == nil || IsNil(o.Id) {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *AdAccount) HasId() bool {
	if o != nil && !IsNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *AdAccount) SetId(v string) {
	o.Id = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *AdAccount) GetName() string {
	if o == nil || IsNil(o.Name) {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdAccount) GetNameOk() (*string, bool) {
	if o == nil || IsNil(o.Name) {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *AdAccount) HasName() bool {
	if o != nil && !IsNil(o.Name) {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *AdAccount) SetName(v string) {
	o.Name = &v
}

// GetOwner returns the Owner field value if set, zero value otherwise.
func (o *AdAccount) GetOwner() AdAccountOwner {
	if o == nil || IsNil(o.Owner) {
		var ret AdAccountOwner
		return ret
	}
	return *o.Owner
}

// GetOwnerOk returns a tuple with the Owner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdAccount) GetOwnerOk() (*AdAccountOwner, bool) {
	if o == nil || IsNil(o.Owner) {
		return nil, false
	}
	return o.Owner, true
}

// HasOwner returns a boolean if a field has been set.
func (o *AdAccount) HasOwner() bool {
	if o != nil && !IsNil(o.Owner) {
		return true
	}

	return false
}

// SetOwner gets a reference to the given AdAccountOwner and assigns it to the Owner field.
func (o *AdAccount) SetOwner(v AdAccountOwner) {
	o.Owner = &v
}

// GetCountry returns the Country field value if set, zero value otherwise.
func (o *AdAccount) GetCountry() Country {
	if o == nil || IsNil(o.Country) {
		var ret Country
		return ret
	}
	return *o.Country
}

// GetCountryOk returns a tuple with the Country field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdAccount) GetCountryOk() (*Country, bool) {
	if o == nil || IsNil(o.Country) {
		return nil, false
	}
	return o.Country, true
}

// HasCountry returns a boolean if a field has been set.
func (o *AdAccount) HasCountry() bool {
	if o != nil && !IsNil(o.Country) {
		return true
	}

	return false
}

// SetCountry gets a reference to the given Country and assigns it to the Country field.
func (o *AdAccount) SetCountry(v Country) {
	o.Country = &v
}

// GetCurrency returns the Currency field value if set, zero value otherwise.
func (o *AdAccount) GetCurrency() Currency {
	if o == nil || IsNil(o.Currency) {
		var ret Currency
		return ret
	}
	return *o.Currency
}

// GetCurrencyOk returns a tuple with the Currency field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdAccount) GetCurrencyOk() (*Currency, bool) {
	if o == nil || IsNil(o.Currency) {
		return nil, false
	}
	return o.Currency, true
}

// HasCurrency returns a boolean if a field has been set.
func (o *AdAccount) HasCurrency() bool {
	if o != nil && !IsNil(o.Currency) {
		return true
	}

	return false
}

// SetCurrency gets a reference to the given Currency and assigns it to the Currency field.
func (o *AdAccount) SetCurrency(v Currency) {
	o.Currency = &v
}

// GetPermissions returns the Permissions field value if set, zero value otherwise.
func (o *AdAccount) GetPermissions() []BusinessAccessRole {
	if o == nil || IsNil(o.Permissions) {
		var ret []BusinessAccessRole
		return ret
	}
	return o.Permissions
}

// GetPermissionsOk returns a tuple with the Permissions field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdAccount) GetPermissionsOk() ([]BusinessAccessRole, bool) {
	if o == nil || IsNil(o.Permissions) {
		return nil, false
	}
	return o.Permissions, true
}

// HasPermissions returns a boolean if a field has been set.
func (o *AdAccount) HasPermissions() bool {
	if o != nil && !IsNil(o.Permissions) {
		return true
	}

	return false
}

// SetPermissions gets a reference to the given []BusinessAccessRole and assigns it to the Permissions field.
func (o *AdAccount) SetPermissions(v []BusinessAccessRole) {
	o.Permissions = v
}

// GetCreatedTime returns the CreatedTime field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdAccount) GetCreatedTime() int32 {
	if o == nil || IsNil(o.CreatedTime.Get()) {
		var ret int32
		return ret
	}
	return *o.CreatedTime.Get()
}

// GetCreatedTimeOk returns a tuple with the CreatedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdAccount) GetCreatedTimeOk() (*int32, bool) {
	if o == nil {
		return nil, false
	}
	return o.CreatedTime.Get(), o.CreatedTime.IsSet()
}

// HasCreatedTime returns a boolean if a field has been set.
func (o *AdAccount) HasCreatedTime() bool {
	if o != nil && o.CreatedTime.IsSet() {
		return true
	}

	return false
}

// SetCreatedTime gets a reference to the given NullableInt32 and assigns it to the CreatedTime field.
func (o *AdAccount) SetCreatedTime(v int32) {
	o.CreatedTime.Set(&v)
}
// SetCreatedTimeNil sets the value for CreatedTime to be an explicit nil
func (o *AdAccount) SetCreatedTimeNil() {
	o.CreatedTime.Set(nil)
}

// UnsetCreatedTime ensures that no value is present for CreatedTime, not even an explicit nil
func (o *AdAccount) UnsetCreatedTime() {
	o.CreatedTime.Unset()
}

// GetUpdatedTime returns the UpdatedTime field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *AdAccount) GetUpdatedTime() int32 {
	if o == nil || IsNil(o.UpdatedTime.Get()) {
		var ret int32
		return ret
	}
	return *o.UpdatedTime.Get()
}

// GetUpdatedTimeOk returns a tuple with the UpdatedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *AdAccount) GetUpdatedTimeOk() (*int32, bool) {
	if o == nil {
		return nil, false
	}
	return o.UpdatedTime.Get(), o.UpdatedTime.IsSet()
}

// HasUpdatedTime returns a boolean if a field has been set.
func (o *AdAccount) HasUpdatedTime() bool {
	if o != nil && o.UpdatedTime.IsSet() {
		return true
	}

	return false
}

// SetUpdatedTime gets a reference to the given NullableInt32 and assigns it to the UpdatedTime field.
func (o *AdAccount) SetUpdatedTime(v int32) {
	o.UpdatedTime.Set(&v)
}
// SetUpdatedTimeNil sets the value for UpdatedTime to be an explicit nil
func (o *AdAccount) SetUpdatedTimeNil() {
	o.UpdatedTime.Set(nil)
}

// UnsetUpdatedTime ensures that no value is present for UpdatedTime, not even an explicit nil
func (o *AdAccount) UnsetUpdatedTime() {
	o.UpdatedTime.Unset()
}

func (o AdAccount) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o AdAccount) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	if !IsNil(o.Name) {
		toSerialize["name"] = o.Name
	}
	if !IsNil(o.Owner) {
		toSerialize["owner"] = o.Owner
	}
	if !IsNil(o.Country) {
		toSerialize["country"] = o.Country
	}
	if !IsNil(o.Currency) {
		toSerialize["currency"] = o.Currency
	}
	if !IsNil(o.Permissions) {
		toSerialize["permissions"] = o.Permissions
	}
	if o.CreatedTime.IsSet() {
		toSerialize["created_time"] = o.CreatedTime.Get()
	}
	if o.UpdatedTime.IsSet() {
		toSerialize["updated_time"] = o.UpdatedTime.Get()
	}
	return toSerialize, nil
}

type NullableAdAccount struct {
	value *AdAccount
	isSet bool
}

func (v NullableAdAccount) Get() *AdAccount {
	return v.value
}

func (v *NullableAdAccount) Set(val *AdAccount) {
	v.value = val
	v.isSet = true
}

func (v NullableAdAccount) IsSet() bool {
	return v.isSet
}

func (v *NullableAdAccount) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdAccount(val *AdAccount) *NullableAdAccount {
	return &NullableAdAccount{value: val, isSet: true}
}

func (v NullableAdAccount) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdAccount) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


