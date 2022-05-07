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
	"time"
)

// CatalogsFeed Catalogs Catalogs Feed object
type CatalogsFeed struct {
	CreatedAt *time.Time `json:"created_at,omitempty"`
	Id *string `json:"id,omitempty"`
	UpdatedAt *time.Time `json:"updated_at,omitempty"`
	DefaultCountry Country `json:"default_country"`
	DefaultAvailability NullableProductAvailabilityType `json:"default_availability"`
	DefaultCurrency NullableNullableCurrency `json:"default_currency"`
	// A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
	Name NullableString `json:"name"`
	Format CatalogsFormat `json:"format"`
	// The locale used within a feed for product descriptions.
	DefaultLocale string `json:"default_locale"`
	Credentials NullableCatalogsFeedCredentials `json:"credentials"`
	// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	Location string `json:"location"`
	PreferredProcessingSchedule NullableCatalogsFeedProcessingSchedule `json:"preferred_processing_schedule"`
	Status CatalogsStatus `json:"status"`
}

// NewCatalogsFeed instantiates a new CatalogsFeed object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeed(defaultCountry Country, defaultAvailability NullableProductAvailabilityType, defaultCurrency NullableNullableCurrency, name NullableString, format CatalogsFormat, defaultLocale string, credentials NullableCatalogsFeedCredentials, location string, preferredProcessingSchedule NullableCatalogsFeedProcessingSchedule, status CatalogsStatus) *CatalogsFeed {
	this := CatalogsFeed{}
	this.DefaultCountry = defaultCountry
	this.DefaultAvailability = defaultAvailability
	this.DefaultCurrency = defaultCurrency
	this.Name = name
	this.Format = format
	this.DefaultLocale = defaultLocale
	this.Credentials = credentials
	this.Location = location
	this.PreferredProcessingSchedule = preferredProcessingSchedule
	this.Status = status
	return &this
}

// NewCatalogsFeedWithDefaults instantiates a new CatalogsFeed object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedWithDefaults() *CatalogsFeed {
	this := CatalogsFeed{}
	return &this
}

// GetCreatedAt returns the CreatedAt field value if set, zero value otherwise.
func (o *CatalogsFeed) GetCreatedAt() time.Time {
	if o == nil || o.CreatedAt == nil {
		var ret time.Time
		return ret
	}
	return *o.CreatedAt
}

// GetCreatedAtOk returns a tuple with the CreatedAt field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetCreatedAtOk() (*time.Time, bool) {
	if o == nil || o.CreatedAt == nil {
		return nil, false
	}
	return o.CreatedAt, true
}

// HasCreatedAt returns a boolean if a field has been set.
func (o *CatalogsFeed) HasCreatedAt() bool {
	if o != nil && o.CreatedAt != nil {
		return true
	}

	return false
}

// SetCreatedAt gets a reference to the given time.Time and assigns it to the CreatedAt field.
func (o *CatalogsFeed) SetCreatedAt(v time.Time) {
	o.CreatedAt = &v
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *CatalogsFeed) GetId() string {
	if o == nil || o.Id == nil {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetIdOk() (*string, bool) {
	if o == nil || o.Id == nil {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *CatalogsFeed) HasId() bool {
	if o != nil && o.Id != nil {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *CatalogsFeed) SetId(v string) {
	o.Id = &v
}

// GetUpdatedAt returns the UpdatedAt field value if set, zero value otherwise.
func (o *CatalogsFeed) GetUpdatedAt() time.Time {
	if o == nil || o.UpdatedAt == nil {
		var ret time.Time
		return ret
	}
	return *o.UpdatedAt
}

// GetUpdatedAtOk returns a tuple with the UpdatedAt field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetUpdatedAtOk() (*time.Time, bool) {
	if o == nil || o.UpdatedAt == nil {
		return nil, false
	}
	return o.UpdatedAt, true
}

// HasUpdatedAt returns a boolean if a field has been set.
func (o *CatalogsFeed) HasUpdatedAt() bool {
	if o != nil && o.UpdatedAt != nil {
		return true
	}

	return false
}

// SetUpdatedAt gets a reference to the given time.Time and assigns it to the UpdatedAt field.
func (o *CatalogsFeed) SetUpdatedAt(v time.Time) {
	o.UpdatedAt = &v
}

// GetDefaultCountry returns the DefaultCountry field value
func (o *CatalogsFeed) GetDefaultCountry() Country {
	if o == nil {
		var ret Country
		return ret
	}

	return o.DefaultCountry
}

// GetDefaultCountryOk returns a tuple with the DefaultCountry field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetDefaultCountryOk() (*Country, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.DefaultCountry, true
}

// SetDefaultCountry sets field value
func (o *CatalogsFeed) SetDefaultCountry(v Country) {
	o.DefaultCountry = v
}

// GetDefaultAvailability returns the DefaultAvailability field value
// If the value is explicit nil, the zero value for ProductAvailabilityType will be returned
func (o *CatalogsFeed) GetDefaultAvailability() ProductAvailabilityType {
	if o == nil || o.DefaultAvailability.Get() == nil {
		var ret ProductAvailabilityType
		return ret
	}

	return *o.DefaultAvailability.Get()
}

// GetDefaultAvailabilityOk returns a tuple with the DefaultAvailability field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeed) GetDefaultAvailabilityOk() (*ProductAvailabilityType, bool) {
	if o == nil  {
		return nil, false
	}
	return o.DefaultAvailability.Get(), o.DefaultAvailability.IsSet()
}

// SetDefaultAvailability sets field value
func (o *CatalogsFeed) SetDefaultAvailability(v ProductAvailabilityType) {
	o.DefaultAvailability.Set(&v)
}

// GetDefaultCurrency returns the DefaultCurrency field value
// If the value is explicit nil, the zero value for NullableCurrency will be returned
func (o *CatalogsFeed) GetDefaultCurrency() NullableCurrency {
	if o == nil || o.DefaultCurrency.Get() == nil {
		var ret NullableCurrency
		return ret
	}

	return *o.DefaultCurrency.Get()
}

// GetDefaultCurrencyOk returns a tuple with the DefaultCurrency field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeed) GetDefaultCurrencyOk() (*NullableCurrency, bool) {
	if o == nil  {
		return nil, false
	}
	return o.DefaultCurrency.Get(), o.DefaultCurrency.IsSet()
}

// SetDefaultCurrency sets field value
func (o *CatalogsFeed) SetDefaultCurrency(v NullableCurrency) {
	o.DefaultCurrency.Set(&v)
}

// GetName returns the Name field value
// If the value is explicit nil, the zero value for string will be returned
func (o *CatalogsFeed) GetName() string {
	if o == nil || o.Name.Get() == nil {
		var ret string
		return ret
	}

	return *o.Name.Get()
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeed) GetNameOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Name.Get(), o.Name.IsSet()
}

// SetName sets field value
func (o *CatalogsFeed) SetName(v string) {
	o.Name.Set(&v)
}

// GetFormat returns the Format field value
func (o *CatalogsFeed) GetFormat() CatalogsFormat {
	if o == nil {
		var ret CatalogsFormat
		return ret
	}

	return o.Format
}

// GetFormatOk returns a tuple with the Format field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetFormatOk() (*CatalogsFormat, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Format, true
}

// SetFormat sets field value
func (o *CatalogsFeed) SetFormat(v CatalogsFormat) {
	o.Format = v
}

// GetDefaultLocale returns the DefaultLocale field value
func (o *CatalogsFeed) GetDefaultLocale() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.DefaultLocale
}

// GetDefaultLocaleOk returns a tuple with the DefaultLocale field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetDefaultLocaleOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.DefaultLocale, true
}

// SetDefaultLocale sets field value
func (o *CatalogsFeed) SetDefaultLocale(v string) {
	o.DefaultLocale = v
}

// GetCredentials returns the Credentials field value
// If the value is explicit nil, the zero value for CatalogsFeedCredentials will be returned
func (o *CatalogsFeed) GetCredentials() CatalogsFeedCredentials {
	if o == nil || o.Credentials.Get() == nil {
		var ret CatalogsFeedCredentials
		return ret
	}

	return *o.Credentials.Get()
}

// GetCredentialsOk returns a tuple with the Credentials field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeed) GetCredentialsOk() (*CatalogsFeedCredentials, bool) {
	if o == nil  {
		return nil, false
	}
	return o.Credentials.Get(), o.Credentials.IsSet()
}

// SetCredentials sets field value
func (o *CatalogsFeed) SetCredentials(v CatalogsFeedCredentials) {
	o.Credentials.Set(&v)
}

// GetLocation returns the Location field value
func (o *CatalogsFeed) GetLocation() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Location
}

// GetLocationOk returns a tuple with the Location field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetLocationOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Location, true
}

// SetLocation sets field value
func (o *CatalogsFeed) SetLocation(v string) {
	o.Location = v
}

// GetPreferredProcessingSchedule returns the PreferredProcessingSchedule field value
// If the value is explicit nil, the zero value for CatalogsFeedProcessingSchedule will be returned
func (o *CatalogsFeed) GetPreferredProcessingSchedule() CatalogsFeedProcessingSchedule {
	if o == nil || o.PreferredProcessingSchedule.Get() == nil {
		var ret CatalogsFeedProcessingSchedule
		return ret
	}

	return *o.PreferredProcessingSchedule.Get()
}

// GetPreferredProcessingScheduleOk returns a tuple with the PreferredProcessingSchedule field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeed) GetPreferredProcessingScheduleOk() (*CatalogsFeedProcessingSchedule, bool) {
	if o == nil  {
		return nil, false
	}
	return o.PreferredProcessingSchedule.Get(), o.PreferredProcessingSchedule.IsSet()
}

// SetPreferredProcessingSchedule sets field value
func (o *CatalogsFeed) SetPreferredProcessingSchedule(v CatalogsFeedProcessingSchedule) {
	o.PreferredProcessingSchedule.Set(&v)
}

// GetStatus returns the Status field value
func (o *CatalogsFeed) GetStatus() CatalogsStatus {
	if o == nil {
		var ret CatalogsStatus
		return ret
	}

	return o.Status
}

// GetStatusOk returns a tuple with the Status field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeed) GetStatusOk() (*CatalogsStatus, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Status, true
}

// SetStatus sets field value
func (o *CatalogsFeed) SetStatus(v CatalogsStatus) {
	o.Status = v
}

func (o CatalogsFeed) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.CreatedAt != nil {
		toSerialize["created_at"] = o.CreatedAt
	}
	if o.Id != nil {
		toSerialize["id"] = o.Id
	}
	if o.UpdatedAt != nil {
		toSerialize["updated_at"] = o.UpdatedAt
	}
	if true {
		toSerialize["default_country"] = o.DefaultCountry
	}
	if true {
		toSerialize["default_availability"] = o.DefaultAvailability.Get()
	}
	if true {
		toSerialize["default_currency"] = o.DefaultCurrency.Get()
	}
	if true {
		toSerialize["name"] = o.Name.Get()
	}
	if true {
		toSerialize["format"] = o.Format
	}
	if true {
		toSerialize["default_locale"] = o.DefaultLocale
	}
	if true {
		toSerialize["credentials"] = o.Credentials.Get()
	}
	if true {
		toSerialize["location"] = o.Location
	}
	if true {
		toSerialize["preferred_processing_schedule"] = o.PreferredProcessingSchedule.Get()
	}
	if true {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsFeed struct {
	value *CatalogsFeed
	isSet bool
}

func (v NullableCatalogsFeed) Get() *CatalogsFeed {
	return v.value
}

func (v *NullableCatalogsFeed) Set(val *CatalogsFeed) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeed) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeed) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeed(val *CatalogsFeed) *NullableCatalogsFeed {
	return &NullableCatalogsFeed{value: val, isSet: true}
}

func (v NullableCatalogsFeed) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeed) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


