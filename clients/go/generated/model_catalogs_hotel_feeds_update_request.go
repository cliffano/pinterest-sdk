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

// checks if the CatalogsHotelFeedsUpdateRequest type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsHotelFeedsUpdateRequest{}

// CatalogsHotelFeedsUpdateRequest Request object for updating a feed.
type CatalogsHotelFeedsUpdateRequest struct {
	DefaultCurrency NullableNullableCurrency `json:"default_currency,omitempty"`
	// A human-friendly name associated to a given feed.
	Name *string `json:"name,omitempty"`
	Format *CatalogsFormat `json:"format,omitempty"`
	Credentials NullableCatalogsFeedCredentials `json:"credentials,omitempty"`
	// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	Location *string `json:"location,omitempty"`
	PreferredProcessingSchedule NullableCatalogsFeedProcessingSchedule `json:"preferred_processing_schedule,omitempty"`
	Status *CatalogsStatus `json:"status,omitempty"`
	CatalogType CatalogsType `json:"catalog_type"`
}

type _CatalogsHotelFeedsUpdateRequest CatalogsHotelFeedsUpdateRequest

// NewCatalogsHotelFeedsUpdateRequest instantiates a new CatalogsHotelFeedsUpdateRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsHotelFeedsUpdateRequest(catalogType CatalogsType) *CatalogsHotelFeedsUpdateRequest {
	this := CatalogsHotelFeedsUpdateRequest{}
	this.CatalogType = catalogType
	return &this
}

// NewCatalogsHotelFeedsUpdateRequestWithDefaults instantiates a new CatalogsHotelFeedsUpdateRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsHotelFeedsUpdateRequestWithDefaults() *CatalogsHotelFeedsUpdateRequest {
	this := CatalogsHotelFeedsUpdateRequest{}
	return &this
}

// GetDefaultCurrency returns the DefaultCurrency field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsHotelFeedsUpdateRequest) GetDefaultCurrency() NullableCurrency {
	if o == nil || IsNil(o.DefaultCurrency.Get()) {
		var ret NullableCurrency
		return ret
	}
	return *o.DefaultCurrency.Get()
}

// GetDefaultCurrencyOk returns a tuple with the DefaultCurrency field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsHotelFeedsUpdateRequest) GetDefaultCurrencyOk() (*NullableCurrency, bool) {
	if o == nil {
		return nil, false
	}
	return o.DefaultCurrency.Get(), o.DefaultCurrency.IsSet()
}

// HasDefaultCurrency returns a boolean if a field has been set.
func (o *CatalogsHotelFeedsUpdateRequest) HasDefaultCurrency() bool {
	if o != nil && o.DefaultCurrency.IsSet() {
		return true
	}

	return false
}

// SetDefaultCurrency gets a reference to the given NullableNullableCurrency and assigns it to the DefaultCurrency field.
func (o *CatalogsHotelFeedsUpdateRequest) SetDefaultCurrency(v NullableCurrency) {
	o.DefaultCurrency.Set(&v)
}
// SetDefaultCurrencyNil sets the value for DefaultCurrency to be an explicit nil
func (o *CatalogsHotelFeedsUpdateRequest) SetDefaultCurrencyNil() {
	o.DefaultCurrency.Set(nil)
}

// UnsetDefaultCurrency ensures that no value is present for DefaultCurrency, not even an explicit nil
func (o *CatalogsHotelFeedsUpdateRequest) UnsetDefaultCurrency() {
	o.DefaultCurrency.Unset()
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *CatalogsHotelFeedsUpdateRequest) GetName() string {
	if o == nil || IsNil(o.Name) {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsHotelFeedsUpdateRequest) GetNameOk() (*string, bool) {
	if o == nil || IsNil(o.Name) {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *CatalogsHotelFeedsUpdateRequest) HasName() bool {
	if o != nil && !IsNil(o.Name) {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *CatalogsHotelFeedsUpdateRequest) SetName(v string) {
	o.Name = &v
}

// GetFormat returns the Format field value if set, zero value otherwise.
func (o *CatalogsHotelFeedsUpdateRequest) GetFormat() CatalogsFormat {
	if o == nil || IsNil(o.Format) {
		var ret CatalogsFormat
		return ret
	}
	return *o.Format
}

// GetFormatOk returns a tuple with the Format field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsHotelFeedsUpdateRequest) GetFormatOk() (*CatalogsFormat, bool) {
	if o == nil || IsNil(o.Format) {
		return nil, false
	}
	return o.Format, true
}

// HasFormat returns a boolean if a field has been set.
func (o *CatalogsHotelFeedsUpdateRequest) HasFormat() bool {
	if o != nil && !IsNil(o.Format) {
		return true
	}

	return false
}

// SetFormat gets a reference to the given CatalogsFormat and assigns it to the Format field.
func (o *CatalogsHotelFeedsUpdateRequest) SetFormat(v CatalogsFormat) {
	o.Format = &v
}

// GetCredentials returns the Credentials field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsHotelFeedsUpdateRequest) GetCredentials() CatalogsFeedCredentials {
	if o == nil || IsNil(o.Credentials.Get()) {
		var ret CatalogsFeedCredentials
		return ret
	}
	return *o.Credentials.Get()
}

// GetCredentialsOk returns a tuple with the Credentials field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsHotelFeedsUpdateRequest) GetCredentialsOk() (*CatalogsFeedCredentials, bool) {
	if o == nil {
		return nil, false
	}
	return o.Credentials.Get(), o.Credentials.IsSet()
}

// HasCredentials returns a boolean if a field has been set.
func (o *CatalogsHotelFeedsUpdateRequest) HasCredentials() bool {
	if o != nil && o.Credentials.IsSet() {
		return true
	}

	return false
}

// SetCredentials gets a reference to the given NullableCatalogsFeedCredentials and assigns it to the Credentials field.
func (o *CatalogsHotelFeedsUpdateRequest) SetCredentials(v CatalogsFeedCredentials) {
	o.Credentials.Set(&v)
}
// SetCredentialsNil sets the value for Credentials to be an explicit nil
func (o *CatalogsHotelFeedsUpdateRequest) SetCredentialsNil() {
	o.Credentials.Set(nil)
}

// UnsetCredentials ensures that no value is present for Credentials, not even an explicit nil
func (o *CatalogsHotelFeedsUpdateRequest) UnsetCredentials() {
	o.Credentials.Unset()
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *CatalogsHotelFeedsUpdateRequest) GetLocation() string {
	if o == nil || IsNil(o.Location) {
		var ret string
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsHotelFeedsUpdateRequest) GetLocationOk() (*string, bool) {
	if o == nil || IsNil(o.Location) {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *CatalogsHotelFeedsUpdateRequest) HasLocation() bool {
	if o != nil && !IsNil(o.Location) {
		return true
	}

	return false
}

// SetLocation gets a reference to the given string and assigns it to the Location field.
func (o *CatalogsHotelFeedsUpdateRequest) SetLocation(v string) {
	o.Location = &v
}

// GetPreferredProcessingSchedule returns the PreferredProcessingSchedule field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsHotelFeedsUpdateRequest) GetPreferredProcessingSchedule() CatalogsFeedProcessingSchedule {
	if o == nil || IsNil(o.PreferredProcessingSchedule.Get()) {
		var ret CatalogsFeedProcessingSchedule
		return ret
	}
	return *o.PreferredProcessingSchedule.Get()
}

// GetPreferredProcessingScheduleOk returns a tuple with the PreferredProcessingSchedule field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsHotelFeedsUpdateRequest) GetPreferredProcessingScheduleOk() (*CatalogsFeedProcessingSchedule, bool) {
	if o == nil {
		return nil, false
	}
	return o.PreferredProcessingSchedule.Get(), o.PreferredProcessingSchedule.IsSet()
}

// HasPreferredProcessingSchedule returns a boolean if a field has been set.
func (o *CatalogsHotelFeedsUpdateRequest) HasPreferredProcessingSchedule() bool {
	if o != nil && o.PreferredProcessingSchedule.IsSet() {
		return true
	}

	return false
}

// SetPreferredProcessingSchedule gets a reference to the given NullableCatalogsFeedProcessingSchedule and assigns it to the PreferredProcessingSchedule field.
func (o *CatalogsHotelFeedsUpdateRequest) SetPreferredProcessingSchedule(v CatalogsFeedProcessingSchedule) {
	o.PreferredProcessingSchedule.Set(&v)
}
// SetPreferredProcessingScheduleNil sets the value for PreferredProcessingSchedule to be an explicit nil
func (o *CatalogsHotelFeedsUpdateRequest) SetPreferredProcessingScheduleNil() {
	o.PreferredProcessingSchedule.Set(nil)
}

// UnsetPreferredProcessingSchedule ensures that no value is present for PreferredProcessingSchedule, not even an explicit nil
func (o *CatalogsHotelFeedsUpdateRequest) UnsetPreferredProcessingSchedule() {
	o.PreferredProcessingSchedule.Unset()
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *CatalogsHotelFeedsUpdateRequest) GetStatus() CatalogsStatus {
	if o == nil || IsNil(o.Status) {
		var ret CatalogsStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsHotelFeedsUpdateRequest) GetStatusOk() (*CatalogsStatus, bool) {
	if o == nil || IsNil(o.Status) {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *CatalogsHotelFeedsUpdateRequest) HasStatus() bool {
	if o != nil && !IsNil(o.Status) {
		return true
	}

	return false
}

// SetStatus gets a reference to the given CatalogsStatus and assigns it to the Status field.
func (o *CatalogsHotelFeedsUpdateRequest) SetStatus(v CatalogsStatus) {
	o.Status = &v
}

// GetCatalogType returns the CatalogType field value
func (o *CatalogsHotelFeedsUpdateRequest) GetCatalogType() CatalogsType {
	if o == nil {
		var ret CatalogsType
		return ret
	}

	return o.CatalogType
}

// GetCatalogTypeOk returns a tuple with the CatalogType field value
// and a boolean to check if the value has been set.
func (o *CatalogsHotelFeedsUpdateRequest) GetCatalogTypeOk() (*CatalogsType, bool) {
	if o == nil {
		return nil, false
	}
	return &o.CatalogType, true
}

// SetCatalogType sets field value
func (o *CatalogsHotelFeedsUpdateRequest) SetCatalogType(v CatalogsType) {
	o.CatalogType = v
}

func (o CatalogsHotelFeedsUpdateRequest) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsHotelFeedsUpdateRequest) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if o.DefaultCurrency.IsSet() {
		toSerialize["default_currency"] = o.DefaultCurrency.Get()
	}
	if !IsNil(o.Name) {
		toSerialize["name"] = o.Name
	}
	if !IsNil(o.Format) {
		toSerialize["format"] = o.Format
	}
	if o.Credentials.IsSet() {
		toSerialize["credentials"] = o.Credentials.Get()
	}
	if !IsNil(o.Location) {
		toSerialize["location"] = o.Location
	}
	if o.PreferredProcessingSchedule.IsSet() {
		toSerialize["preferred_processing_schedule"] = o.PreferredProcessingSchedule.Get()
	}
	if !IsNil(o.Status) {
		toSerialize["status"] = o.Status
	}
	toSerialize["catalog_type"] = o.CatalogType
	return toSerialize, nil
}

func (o *CatalogsHotelFeedsUpdateRequest) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"catalog_type",
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

	varCatalogsHotelFeedsUpdateRequest := _CatalogsHotelFeedsUpdateRequest{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsHotelFeedsUpdateRequest)

	if err != nil {
		return err
	}

	*o = CatalogsHotelFeedsUpdateRequest(varCatalogsHotelFeedsUpdateRequest)

	return err
}

type NullableCatalogsHotelFeedsUpdateRequest struct {
	value *CatalogsHotelFeedsUpdateRequest
	isSet bool
}

func (v NullableCatalogsHotelFeedsUpdateRequest) Get() *CatalogsHotelFeedsUpdateRequest {
	return v.value
}

func (v *NullableCatalogsHotelFeedsUpdateRequest) Set(val *CatalogsHotelFeedsUpdateRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsHotelFeedsUpdateRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsHotelFeedsUpdateRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsHotelFeedsUpdateRequest(val *CatalogsHotelFeedsUpdateRequest) *NullableCatalogsHotelFeedsUpdateRequest {
	return &NullableCatalogsHotelFeedsUpdateRequest{value: val, isSet: true}
}

func (v NullableCatalogsHotelFeedsUpdateRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsHotelFeedsUpdateRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

