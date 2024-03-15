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

// checks if the CatalogsFeedsCreateRequest type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsFeedsCreateRequest{}

// CatalogsFeedsCreateRequest Request object for creating a feed. Please, be aware that \"default_country\" and \"default_locale\" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
type CatalogsFeedsCreateRequest struct {
	DefaultCurrency NullableNullableCurrency `json:"default_currency,omitempty"`
	// A human-friendly name associated to a given feed.
	Name string `json:"name"`
	Format CatalogsFormat `json:"format"`
	DefaultLocale *CatalogsFeedsCreateRequestDefaultLocale `json:"default_locale,omitempty"`
	Credentials NullableCatalogsFeedCredentials `json:"credentials,omitempty"`
	// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	Location string `json:"location"`
	PreferredProcessingSchedule NullableCatalogsFeedProcessingSchedule `json:"preferred_processing_schedule,omitempty"`
	DefaultCountry *Country `json:"default_country,omitempty"`
	DefaultAvailability NullableProductAvailabilityType `json:"default_availability,omitempty"`
}

type _CatalogsFeedsCreateRequest CatalogsFeedsCreateRequest

// NewCatalogsFeedsCreateRequest instantiates a new CatalogsFeedsCreateRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeedsCreateRequest(name string, format CatalogsFormat, location string) *CatalogsFeedsCreateRequest {
	this := CatalogsFeedsCreateRequest{}
	this.Name = name
	this.Format = format
	this.Location = location
	return &this
}

// NewCatalogsFeedsCreateRequestWithDefaults instantiates a new CatalogsFeedsCreateRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedsCreateRequestWithDefaults() *CatalogsFeedsCreateRequest {
	this := CatalogsFeedsCreateRequest{}
	return &this
}

// GetDefaultCurrency returns the DefaultCurrency field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsFeedsCreateRequest) GetDefaultCurrency() NullableCurrency {
	if o == nil || IsNil(o.DefaultCurrency.Get()) {
		var ret NullableCurrency
		return ret
	}
	return *o.DefaultCurrency.Get()
}

// GetDefaultCurrencyOk returns a tuple with the DefaultCurrency field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeedsCreateRequest) GetDefaultCurrencyOk() (*NullableCurrency, bool) {
	if o == nil {
		return nil, false
	}
	return o.DefaultCurrency.Get(), o.DefaultCurrency.IsSet()
}

// HasDefaultCurrency returns a boolean if a field has been set.
func (o *CatalogsFeedsCreateRequest) HasDefaultCurrency() bool {
	if o != nil && o.DefaultCurrency.IsSet() {
		return true
	}

	return false
}

// SetDefaultCurrency gets a reference to the given NullableNullableCurrency and assigns it to the DefaultCurrency field.
func (o *CatalogsFeedsCreateRequest) SetDefaultCurrency(v NullableCurrency) {
	o.DefaultCurrency.Set(&v)
}
// SetDefaultCurrencyNil sets the value for DefaultCurrency to be an explicit nil
func (o *CatalogsFeedsCreateRequest) SetDefaultCurrencyNil() {
	o.DefaultCurrency.Set(nil)
}

// UnsetDefaultCurrency ensures that no value is present for DefaultCurrency, not even an explicit nil
func (o *CatalogsFeedsCreateRequest) UnsetDefaultCurrency() {
	o.DefaultCurrency.Unset()
}

// GetName returns the Name field value
func (o *CatalogsFeedsCreateRequest) GetName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Name
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedsCreateRequest) GetNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Name, true
}

// SetName sets field value
func (o *CatalogsFeedsCreateRequest) SetName(v string) {
	o.Name = v
}

// GetFormat returns the Format field value
func (o *CatalogsFeedsCreateRequest) GetFormat() CatalogsFormat {
	if o == nil {
		var ret CatalogsFormat
		return ret
	}

	return o.Format
}

// GetFormatOk returns a tuple with the Format field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedsCreateRequest) GetFormatOk() (*CatalogsFormat, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Format, true
}

// SetFormat sets field value
func (o *CatalogsFeedsCreateRequest) SetFormat(v CatalogsFormat) {
	o.Format = v
}

// GetDefaultLocale returns the DefaultLocale field value if set, zero value otherwise.
func (o *CatalogsFeedsCreateRequest) GetDefaultLocale() CatalogsFeedsCreateRequestDefaultLocale {
	if o == nil || IsNil(o.DefaultLocale) {
		var ret CatalogsFeedsCreateRequestDefaultLocale
		return ret
	}
	return *o.DefaultLocale
}

// GetDefaultLocaleOk returns a tuple with the DefaultLocale field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedsCreateRequest) GetDefaultLocaleOk() (*CatalogsFeedsCreateRequestDefaultLocale, bool) {
	if o == nil || IsNil(o.DefaultLocale) {
		return nil, false
	}
	return o.DefaultLocale, true
}

// HasDefaultLocale returns a boolean if a field has been set.
func (o *CatalogsFeedsCreateRequest) HasDefaultLocale() bool {
	if o != nil && !IsNil(o.DefaultLocale) {
		return true
	}

	return false
}

// SetDefaultLocale gets a reference to the given CatalogsFeedsCreateRequestDefaultLocale and assigns it to the DefaultLocale field.
func (o *CatalogsFeedsCreateRequest) SetDefaultLocale(v CatalogsFeedsCreateRequestDefaultLocale) {
	o.DefaultLocale = &v
}

// GetCredentials returns the Credentials field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsFeedsCreateRequest) GetCredentials() CatalogsFeedCredentials {
	if o == nil || IsNil(o.Credentials.Get()) {
		var ret CatalogsFeedCredentials
		return ret
	}
	return *o.Credentials.Get()
}

// GetCredentialsOk returns a tuple with the Credentials field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeedsCreateRequest) GetCredentialsOk() (*CatalogsFeedCredentials, bool) {
	if o == nil {
		return nil, false
	}
	return o.Credentials.Get(), o.Credentials.IsSet()
}

// HasCredentials returns a boolean if a field has been set.
func (o *CatalogsFeedsCreateRequest) HasCredentials() bool {
	if o != nil && o.Credentials.IsSet() {
		return true
	}

	return false
}

// SetCredentials gets a reference to the given NullableCatalogsFeedCredentials and assigns it to the Credentials field.
func (o *CatalogsFeedsCreateRequest) SetCredentials(v CatalogsFeedCredentials) {
	o.Credentials.Set(&v)
}
// SetCredentialsNil sets the value for Credentials to be an explicit nil
func (o *CatalogsFeedsCreateRequest) SetCredentialsNil() {
	o.Credentials.Set(nil)
}

// UnsetCredentials ensures that no value is present for Credentials, not even an explicit nil
func (o *CatalogsFeedsCreateRequest) UnsetCredentials() {
	o.Credentials.Unset()
}

// GetLocation returns the Location field value
func (o *CatalogsFeedsCreateRequest) GetLocation() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Location
}

// GetLocationOk returns a tuple with the Location field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedsCreateRequest) GetLocationOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Location, true
}

// SetLocation sets field value
func (o *CatalogsFeedsCreateRequest) SetLocation(v string) {
	o.Location = v
}

// GetPreferredProcessingSchedule returns the PreferredProcessingSchedule field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsFeedsCreateRequest) GetPreferredProcessingSchedule() CatalogsFeedProcessingSchedule {
	if o == nil || IsNil(o.PreferredProcessingSchedule.Get()) {
		var ret CatalogsFeedProcessingSchedule
		return ret
	}
	return *o.PreferredProcessingSchedule.Get()
}

// GetPreferredProcessingScheduleOk returns a tuple with the PreferredProcessingSchedule field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeedsCreateRequest) GetPreferredProcessingScheduleOk() (*CatalogsFeedProcessingSchedule, bool) {
	if o == nil {
		return nil, false
	}
	return o.PreferredProcessingSchedule.Get(), o.PreferredProcessingSchedule.IsSet()
}

// HasPreferredProcessingSchedule returns a boolean if a field has been set.
func (o *CatalogsFeedsCreateRequest) HasPreferredProcessingSchedule() bool {
	if o != nil && o.PreferredProcessingSchedule.IsSet() {
		return true
	}

	return false
}

// SetPreferredProcessingSchedule gets a reference to the given NullableCatalogsFeedProcessingSchedule and assigns it to the PreferredProcessingSchedule field.
func (o *CatalogsFeedsCreateRequest) SetPreferredProcessingSchedule(v CatalogsFeedProcessingSchedule) {
	o.PreferredProcessingSchedule.Set(&v)
}
// SetPreferredProcessingScheduleNil sets the value for PreferredProcessingSchedule to be an explicit nil
func (o *CatalogsFeedsCreateRequest) SetPreferredProcessingScheduleNil() {
	o.PreferredProcessingSchedule.Set(nil)
}

// UnsetPreferredProcessingSchedule ensures that no value is present for PreferredProcessingSchedule, not even an explicit nil
func (o *CatalogsFeedsCreateRequest) UnsetPreferredProcessingSchedule() {
	o.PreferredProcessingSchedule.Unset()
}

// GetDefaultCountry returns the DefaultCountry field value if set, zero value otherwise.
func (o *CatalogsFeedsCreateRequest) GetDefaultCountry() Country {
	if o == nil || IsNil(o.DefaultCountry) {
		var ret Country
		return ret
	}
	return *o.DefaultCountry
}

// GetDefaultCountryOk returns a tuple with the DefaultCountry field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedsCreateRequest) GetDefaultCountryOk() (*Country, bool) {
	if o == nil || IsNil(o.DefaultCountry) {
		return nil, false
	}
	return o.DefaultCountry, true
}

// HasDefaultCountry returns a boolean if a field has been set.
func (o *CatalogsFeedsCreateRequest) HasDefaultCountry() bool {
	if o != nil && !IsNil(o.DefaultCountry) {
		return true
	}

	return false
}

// SetDefaultCountry gets a reference to the given Country and assigns it to the DefaultCountry field.
func (o *CatalogsFeedsCreateRequest) SetDefaultCountry(v Country) {
	o.DefaultCountry = &v
}

// GetDefaultAvailability returns the DefaultAvailability field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsFeedsCreateRequest) GetDefaultAvailability() ProductAvailabilityType {
	if o == nil || IsNil(o.DefaultAvailability.Get()) {
		var ret ProductAvailabilityType
		return ret
	}
	return *o.DefaultAvailability.Get()
}

// GetDefaultAvailabilityOk returns a tuple with the DefaultAvailability field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeedsCreateRequest) GetDefaultAvailabilityOk() (*ProductAvailabilityType, bool) {
	if o == nil {
		return nil, false
	}
	return o.DefaultAvailability.Get(), o.DefaultAvailability.IsSet()
}

// HasDefaultAvailability returns a boolean if a field has been set.
func (o *CatalogsFeedsCreateRequest) HasDefaultAvailability() bool {
	if o != nil && o.DefaultAvailability.IsSet() {
		return true
	}

	return false
}

// SetDefaultAvailability gets a reference to the given NullableProductAvailabilityType and assigns it to the DefaultAvailability field.
func (o *CatalogsFeedsCreateRequest) SetDefaultAvailability(v ProductAvailabilityType) {
	o.DefaultAvailability.Set(&v)
}
// SetDefaultAvailabilityNil sets the value for DefaultAvailability to be an explicit nil
func (o *CatalogsFeedsCreateRequest) SetDefaultAvailabilityNil() {
	o.DefaultAvailability.Set(nil)
}

// UnsetDefaultAvailability ensures that no value is present for DefaultAvailability, not even an explicit nil
func (o *CatalogsFeedsCreateRequest) UnsetDefaultAvailability() {
	o.DefaultAvailability.Unset()
}

func (o CatalogsFeedsCreateRequest) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsFeedsCreateRequest) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if o.DefaultCurrency.IsSet() {
		toSerialize["default_currency"] = o.DefaultCurrency.Get()
	}
	toSerialize["name"] = o.Name
	toSerialize["format"] = o.Format
	if !IsNil(o.DefaultLocale) {
		toSerialize["default_locale"] = o.DefaultLocale
	}
	if o.Credentials.IsSet() {
		toSerialize["credentials"] = o.Credentials.Get()
	}
	toSerialize["location"] = o.Location
	if o.PreferredProcessingSchedule.IsSet() {
		toSerialize["preferred_processing_schedule"] = o.PreferredProcessingSchedule.Get()
	}
	if !IsNil(o.DefaultCountry) {
		toSerialize["default_country"] = o.DefaultCountry
	}
	if o.DefaultAvailability.IsSet() {
		toSerialize["default_availability"] = o.DefaultAvailability.Get()
	}
	return toSerialize, nil
}

func (o *CatalogsFeedsCreateRequest) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"name",
		"format",
		"location",
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

	varCatalogsFeedsCreateRequest := _CatalogsFeedsCreateRequest{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsFeedsCreateRequest)

	if err != nil {
		return err
	}

	*o = CatalogsFeedsCreateRequest(varCatalogsFeedsCreateRequest)

	return err
}

type NullableCatalogsFeedsCreateRequest struct {
	value *CatalogsFeedsCreateRequest
	isSet bool
}

func (v NullableCatalogsFeedsCreateRequest) Get() *CatalogsFeedsCreateRequest {
	return v.value
}

func (v *NullableCatalogsFeedsCreateRequest) Set(val *CatalogsFeedsCreateRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeedsCreateRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeedsCreateRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeedsCreateRequest(val *CatalogsFeedsCreateRequest) *NullableCatalogsFeedsCreateRequest {
	return &NullableCatalogsFeedsCreateRequest{value: val, isSet: true}
}

func (v NullableCatalogsFeedsCreateRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeedsCreateRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


