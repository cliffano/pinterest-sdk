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

// checks if the SSIOAccountResponse type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &SSIOAccountResponse{}

// SSIOAccountResponse struct for SSIOAccountResponse
type SSIOAccountResponse struct {
	// Advertiser eligible to create order lines
	Eligible *bool `json:"eligible,omitempty"`
	// Advertiser eligible to update order lines
	CanEdit *bool `json:"can_edit,omitempty"`
	// An array of Salesforce account information that includes address, io terms, etc.
	BilltoInfos []SSIOAccountItem `json:"billto_infos,omitempty"`
	Currency *string `json:"currency,omitempty"`
	PmpNames []SSIOAccountPMPName `json:"pmp_names,omitempty"`
	// Error indicator from Salesforce which could be \"No Error\"
	Error *string `json:"error,omitempty"`
}

// NewSSIOAccountResponse instantiates a new SSIOAccountResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSSIOAccountResponse() *SSIOAccountResponse {
	this := SSIOAccountResponse{}
	return &this
}

// NewSSIOAccountResponseWithDefaults instantiates a new SSIOAccountResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSSIOAccountResponseWithDefaults() *SSIOAccountResponse {
	this := SSIOAccountResponse{}
	return &this
}

// GetEligible returns the Eligible field value if set, zero value otherwise.
func (o *SSIOAccountResponse) GetEligible() bool {
	if o == nil || IsNil(o.Eligible) {
		var ret bool
		return ret
	}
	return *o.Eligible
}

// GetEligibleOk returns a tuple with the Eligible field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SSIOAccountResponse) GetEligibleOk() (*bool, bool) {
	if o == nil || IsNil(o.Eligible) {
		return nil, false
	}
	return o.Eligible, true
}

// HasEligible returns a boolean if a field has been set.
func (o *SSIOAccountResponse) HasEligible() bool {
	if o != nil && !IsNil(o.Eligible) {
		return true
	}

	return false
}

// SetEligible gets a reference to the given bool and assigns it to the Eligible field.
func (o *SSIOAccountResponse) SetEligible(v bool) {
	o.Eligible = &v
}

// GetCanEdit returns the CanEdit field value if set, zero value otherwise.
func (o *SSIOAccountResponse) GetCanEdit() bool {
	if o == nil || IsNil(o.CanEdit) {
		var ret bool
		return ret
	}
	return *o.CanEdit
}

// GetCanEditOk returns a tuple with the CanEdit field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SSIOAccountResponse) GetCanEditOk() (*bool, bool) {
	if o == nil || IsNil(o.CanEdit) {
		return nil, false
	}
	return o.CanEdit, true
}

// HasCanEdit returns a boolean if a field has been set.
func (o *SSIOAccountResponse) HasCanEdit() bool {
	if o != nil && !IsNil(o.CanEdit) {
		return true
	}

	return false
}

// SetCanEdit gets a reference to the given bool and assigns it to the CanEdit field.
func (o *SSIOAccountResponse) SetCanEdit(v bool) {
	o.CanEdit = &v
}

// GetBilltoInfos returns the BilltoInfos field value if set, zero value otherwise.
func (o *SSIOAccountResponse) GetBilltoInfos() []SSIOAccountItem {
	if o == nil || IsNil(o.BilltoInfos) {
		var ret []SSIOAccountItem
		return ret
	}
	return o.BilltoInfos
}

// GetBilltoInfosOk returns a tuple with the BilltoInfos field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SSIOAccountResponse) GetBilltoInfosOk() ([]SSIOAccountItem, bool) {
	if o == nil || IsNil(o.BilltoInfos) {
		return nil, false
	}
	return o.BilltoInfos, true
}

// HasBilltoInfos returns a boolean if a field has been set.
func (o *SSIOAccountResponse) HasBilltoInfos() bool {
	if o != nil && !IsNil(o.BilltoInfos) {
		return true
	}

	return false
}

// SetBilltoInfos gets a reference to the given []SSIOAccountItem and assigns it to the BilltoInfos field.
func (o *SSIOAccountResponse) SetBilltoInfos(v []SSIOAccountItem) {
	o.BilltoInfos = v
}

// GetCurrency returns the Currency field value if set, zero value otherwise.
func (o *SSIOAccountResponse) GetCurrency() string {
	if o == nil || IsNil(o.Currency) {
		var ret string
		return ret
	}
	return *o.Currency
}

// GetCurrencyOk returns a tuple with the Currency field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SSIOAccountResponse) GetCurrencyOk() (*string, bool) {
	if o == nil || IsNil(o.Currency) {
		return nil, false
	}
	return o.Currency, true
}

// HasCurrency returns a boolean if a field has been set.
func (o *SSIOAccountResponse) HasCurrency() bool {
	if o != nil && !IsNil(o.Currency) {
		return true
	}

	return false
}

// SetCurrency gets a reference to the given string and assigns it to the Currency field.
func (o *SSIOAccountResponse) SetCurrency(v string) {
	o.Currency = &v
}

// GetPmpNames returns the PmpNames field value if set, zero value otherwise.
func (o *SSIOAccountResponse) GetPmpNames() []SSIOAccountPMPName {
	if o == nil || IsNil(o.PmpNames) {
		var ret []SSIOAccountPMPName
		return ret
	}
	return o.PmpNames
}

// GetPmpNamesOk returns a tuple with the PmpNames field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SSIOAccountResponse) GetPmpNamesOk() ([]SSIOAccountPMPName, bool) {
	if o == nil || IsNil(o.PmpNames) {
		return nil, false
	}
	return o.PmpNames, true
}

// HasPmpNames returns a boolean if a field has been set.
func (o *SSIOAccountResponse) HasPmpNames() bool {
	if o != nil && !IsNil(o.PmpNames) {
		return true
	}

	return false
}

// SetPmpNames gets a reference to the given []SSIOAccountPMPName and assigns it to the PmpNames field.
func (o *SSIOAccountResponse) SetPmpNames(v []SSIOAccountPMPName) {
	o.PmpNames = v
}

// GetError returns the Error field value if set, zero value otherwise.
func (o *SSIOAccountResponse) GetError() string {
	if o == nil || IsNil(o.Error) {
		var ret string
		return ret
	}
	return *o.Error
}

// GetErrorOk returns a tuple with the Error field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SSIOAccountResponse) GetErrorOk() (*string, bool) {
	if o == nil || IsNil(o.Error) {
		return nil, false
	}
	return o.Error, true
}

// HasError returns a boolean if a field has been set.
func (o *SSIOAccountResponse) HasError() bool {
	if o != nil && !IsNil(o.Error) {
		return true
	}

	return false
}

// SetError gets a reference to the given string and assigns it to the Error field.
func (o *SSIOAccountResponse) SetError(v string) {
	o.Error = &v
}

func (o SSIOAccountResponse) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o SSIOAccountResponse) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Eligible) {
		toSerialize["eligible"] = o.Eligible
	}
	if !IsNil(o.CanEdit) {
		toSerialize["can_edit"] = o.CanEdit
	}
	if !IsNil(o.BilltoInfos) {
		toSerialize["billto_infos"] = o.BilltoInfos
	}
	if !IsNil(o.Currency) {
		toSerialize["currency"] = o.Currency
	}
	if !IsNil(o.PmpNames) {
		toSerialize["pmp_names"] = o.PmpNames
	}
	if !IsNil(o.Error) {
		toSerialize["error"] = o.Error
	}
	return toSerialize, nil
}

type NullableSSIOAccountResponse struct {
	value *SSIOAccountResponse
	isSet bool
}

func (v NullableSSIOAccountResponse) Get() *SSIOAccountResponse {
	return v.value
}

func (v *NullableSSIOAccountResponse) Set(val *SSIOAccountResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableSSIOAccountResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableSSIOAccountResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSSIOAccountResponse(val *SSIOAccountResponse) *NullableSSIOAccountResponse {
	return &NullableSSIOAccountResponse{value: val, isSet: true}
}

func (v NullableSSIOAccountResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSSIOAccountResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

