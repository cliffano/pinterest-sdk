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

// CatalogsFeedIngestionErrors struct for CatalogsFeedIngestionErrors
type CatalogsFeedIngestionErrors struct {
	ImageDownloadError *int32 `json:"image_download_error,omitempty"`
	ImageDownloadConnectionTimeout *int32 `json:"image_download_connection_timeout,omitempty"`
	ImageFormatUnrecognize *int32 `json:"image_format_unrecognize,omitempty"`
	LineLevelInternalError *int32 `json:"line_level_internal_error,omitempty"`
	LargeProductCountDecrease *int32 `json:"large_product_count_decrease,omitempty"`
}

// NewCatalogsFeedIngestionErrors instantiates a new CatalogsFeedIngestionErrors object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeedIngestionErrors() *CatalogsFeedIngestionErrors {
	this := CatalogsFeedIngestionErrors{}
	return &this
}

// NewCatalogsFeedIngestionErrorsWithDefaults instantiates a new CatalogsFeedIngestionErrors object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedIngestionErrorsWithDefaults() *CatalogsFeedIngestionErrors {
	this := CatalogsFeedIngestionErrors{}
	return &this
}

// GetImageDownloadError returns the ImageDownloadError field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionErrors) GetImageDownloadError() int32 {
	if o == nil || o.ImageDownloadError == nil {
		var ret int32
		return ret
	}
	return *o.ImageDownloadError
}

// GetImageDownloadErrorOk returns a tuple with the ImageDownloadError field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionErrors) GetImageDownloadErrorOk() (*int32, bool) {
	if o == nil || o.ImageDownloadError == nil {
		return nil, false
	}
	return o.ImageDownloadError, true
}

// HasImageDownloadError returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionErrors) HasImageDownloadError() bool {
	if o != nil && o.ImageDownloadError != nil {
		return true
	}

	return false
}

// SetImageDownloadError gets a reference to the given int32 and assigns it to the ImageDownloadError field.
func (o *CatalogsFeedIngestionErrors) SetImageDownloadError(v int32) {
	o.ImageDownloadError = &v
}

// GetImageDownloadConnectionTimeout returns the ImageDownloadConnectionTimeout field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionErrors) GetImageDownloadConnectionTimeout() int32 {
	if o == nil || o.ImageDownloadConnectionTimeout == nil {
		var ret int32
		return ret
	}
	return *o.ImageDownloadConnectionTimeout
}

// GetImageDownloadConnectionTimeoutOk returns a tuple with the ImageDownloadConnectionTimeout field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionErrors) GetImageDownloadConnectionTimeoutOk() (*int32, bool) {
	if o == nil || o.ImageDownloadConnectionTimeout == nil {
		return nil, false
	}
	return o.ImageDownloadConnectionTimeout, true
}

// HasImageDownloadConnectionTimeout returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionErrors) HasImageDownloadConnectionTimeout() bool {
	if o != nil && o.ImageDownloadConnectionTimeout != nil {
		return true
	}

	return false
}

// SetImageDownloadConnectionTimeout gets a reference to the given int32 and assigns it to the ImageDownloadConnectionTimeout field.
func (o *CatalogsFeedIngestionErrors) SetImageDownloadConnectionTimeout(v int32) {
	o.ImageDownloadConnectionTimeout = &v
}

// GetImageFormatUnrecognize returns the ImageFormatUnrecognize field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionErrors) GetImageFormatUnrecognize() int32 {
	if o == nil || o.ImageFormatUnrecognize == nil {
		var ret int32
		return ret
	}
	return *o.ImageFormatUnrecognize
}

// GetImageFormatUnrecognizeOk returns a tuple with the ImageFormatUnrecognize field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionErrors) GetImageFormatUnrecognizeOk() (*int32, bool) {
	if o == nil || o.ImageFormatUnrecognize == nil {
		return nil, false
	}
	return o.ImageFormatUnrecognize, true
}

// HasImageFormatUnrecognize returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionErrors) HasImageFormatUnrecognize() bool {
	if o != nil && o.ImageFormatUnrecognize != nil {
		return true
	}

	return false
}

// SetImageFormatUnrecognize gets a reference to the given int32 and assigns it to the ImageFormatUnrecognize field.
func (o *CatalogsFeedIngestionErrors) SetImageFormatUnrecognize(v int32) {
	o.ImageFormatUnrecognize = &v
}

// GetLineLevelInternalError returns the LineLevelInternalError field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionErrors) GetLineLevelInternalError() int32 {
	if o == nil || o.LineLevelInternalError == nil {
		var ret int32
		return ret
	}
	return *o.LineLevelInternalError
}

// GetLineLevelInternalErrorOk returns a tuple with the LineLevelInternalError field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionErrors) GetLineLevelInternalErrorOk() (*int32, bool) {
	if o == nil || o.LineLevelInternalError == nil {
		return nil, false
	}
	return o.LineLevelInternalError, true
}

// HasLineLevelInternalError returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionErrors) HasLineLevelInternalError() bool {
	if o != nil && o.LineLevelInternalError != nil {
		return true
	}

	return false
}

// SetLineLevelInternalError gets a reference to the given int32 and assigns it to the LineLevelInternalError field.
func (o *CatalogsFeedIngestionErrors) SetLineLevelInternalError(v int32) {
	o.LineLevelInternalError = &v
}

// GetLargeProductCountDecrease returns the LargeProductCountDecrease field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionErrors) GetLargeProductCountDecrease() int32 {
	if o == nil || o.LargeProductCountDecrease == nil {
		var ret int32
		return ret
	}
	return *o.LargeProductCountDecrease
}

// GetLargeProductCountDecreaseOk returns a tuple with the LargeProductCountDecrease field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionErrors) GetLargeProductCountDecreaseOk() (*int32, bool) {
	if o == nil || o.LargeProductCountDecrease == nil {
		return nil, false
	}
	return o.LargeProductCountDecrease, true
}

// HasLargeProductCountDecrease returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionErrors) HasLargeProductCountDecrease() bool {
	if o != nil && o.LargeProductCountDecrease != nil {
		return true
	}

	return false
}

// SetLargeProductCountDecrease gets a reference to the given int32 and assigns it to the LargeProductCountDecrease field.
func (o *CatalogsFeedIngestionErrors) SetLargeProductCountDecrease(v int32) {
	o.LargeProductCountDecrease = &v
}

func (o CatalogsFeedIngestionErrors) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ImageDownloadError != nil {
		toSerialize["image_download_error"] = o.ImageDownloadError
	}
	if o.ImageDownloadConnectionTimeout != nil {
		toSerialize["image_download_connection_timeout"] = o.ImageDownloadConnectionTimeout
	}
	if o.ImageFormatUnrecognize != nil {
		toSerialize["image_format_unrecognize"] = o.ImageFormatUnrecognize
	}
	if o.LineLevelInternalError != nil {
		toSerialize["line_level_internal_error"] = o.LineLevelInternalError
	}
	if o.LargeProductCountDecrease != nil {
		toSerialize["large_product_count_decrease"] = o.LargeProductCountDecrease
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsFeedIngestionErrors struct {
	value *CatalogsFeedIngestionErrors
	isSet bool
}

func (v NullableCatalogsFeedIngestionErrors) Get() *CatalogsFeedIngestionErrors {
	return v.value
}

func (v *NullableCatalogsFeedIngestionErrors) Set(val *CatalogsFeedIngestionErrors) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeedIngestionErrors) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeedIngestionErrors) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeedIngestionErrors(val *CatalogsFeedIngestionErrors) *NullableCatalogsFeedIngestionErrors {
	return &NullableCatalogsFeedIngestionErrors{value: val, isSet: true}
}

func (v NullableCatalogsFeedIngestionErrors) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeedIngestionErrors) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


