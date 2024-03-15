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

// checks if the CatalogsHotelItemResponse type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsHotelItemResponse{}

// CatalogsHotelItemResponse Object describing a hotel record
type CatalogsHotelItemResponse struct {
	CatalogType CatalogsType `json:"catalog_type"`
	// The catalog hotel id in the merchant namespace
	HotelId *string `json:"hotel_id,omitempty"`
	// The pins mapped to the item
	Pins []Pin `json:"pins,omitempty"`
	Attributes *CatalogsHotelAttributes `json:"attributes,omitempty"`
}

type _CatalogsHotelItemResponse CatalogsHotelItemResponse

// NewCatalogsHotelItemResponse instantiates a new CatalogsHotelItemResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsHotelItemResponse(catalogType CatalogsType) *CatalogsHotelItemResponse {
	this := CatalogsHotelItemResponse{}
	this.CatalogType = catalogType
	return &this
}

// NewCatalogsHotelItemResponseWithDefaults instantiates a new CatalogsHotelItemResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsHotelItemResponseWithDefaults() *CatalogsHotelItemResponse {
	this := CatalogsHotelItemResponse{}
	return &this
}

// GetCatalogType returns the CatalogType field value
func (o *CatalogsHotelItemResponse) GetCatalogType() CatalogsType {
	if o == nil {
		var ret CatalogsType
		return ret
	}

	return o.CatalogType
}

// GetCatalogTypeOk returns a tuple with the CatalogType field value
// and a boolean to check if the value has been set.
func (o *CatalogsHotelItemResponse) GetCatalogTypeOk() (*CatalogsType, bool) {
	if o == nil {
		return nil, false
	}
	return &o.CatalogType, true
}

// SetCatalogType sets field value
func (o *CatalogsHotelItemResponse) SetCatalogType(v CatalogsType) {
	o.CatalogType = v
}

// GetHotelId returns the HotelId field value if set, zero value otherwise.
func (o *CatalogsHotelItemResponse) GetHotelId() string {
	if o == nil || IsNil(o.HotelId) {
		var ret string
		return ret
	}
	return *o.HotelId
}

// GetHotelIdOk returns a tuple with the HotelId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsHotelItemResponse) GetHotelIdOk() (*string, bool) {
	if o == nil || IsNil(o.HotelId) {
		return nil, false
	}
	return o.HotelId, true
}

// HasHotelId returns a boolean if a field has been set.
func (o *CatalogsHotelItemResponse) HasHotelId() bool {
	if o != nil && !IsNil(o.HotelId) {
		return true
	}

	return false
}

// SetHotelId gets a reference to the given string and assigns it to the HotelId field.
func (o *CatalogsHotelItemResponse) SetHotelId(v string) {
	o.HotelId = &v
}

// GetPins returns the Pins field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsHotelItemResponse) GetPins() []Pin {
	if o == nil {
		var ret []Pin
		return ret
	}
	return o.Pins
}

// GetPinsOk returns a tuple with the Pins field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsHotelItemResponse) GetPinsOk() ([]Pin, bool) {
	if o == nil || IsNil(o.Pins) {
		return nil, false
	}
	return o.Pins, true
}

// HasPins returns a boolean if a field has been set.
func (o *CatalogsHotelItemResponse) HasPins() bool {
	if o != nil && !IsNil(o.Pins) {
		return true
	}

	return false
}

// SetPins gets a reference to the given []Pin and assigns it to the Pins field.
func (o *CatalogsHotelItemResponse) SetPins(v []Pin) {
	o.Pins = v
}

// GetAttributes returns the Attributes field value if set, zero value otherwise.
func (o *CatalogsHotelItemResponse) GetAttributes() CatalogsHotelAttributes {
	if o == nil || IsNil(o.Attributes) {
		var ret CatalogsHotelAttributes
		return ret
	}
	return *o.Attributes
}

// GetAttributesOk returns a tuple with the Attributes field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsHotelItemResponse) GetAttributesOk() (*CatalogsHotelAttributes, bool) {
	if o == nil || IsNil(o.Attributes) {
		return nil, false
	}
	return o.Attributes, true
}

// HasAttributes returns a boolean if a field has been set.
func (o *CatalogsHotelItemResponse) HasAttributes() bool {
	if o != nil && !IsNil(o.Attributes) {
		return true
	}

	return false
}

// SetAttributes gets a reference to the given CatalogsHotelAttributes and assigns it to the Attributes field.
func (o *CatalogsHotelItemResponse) SetAttributes(v CatalogsHotelAttributes) {
	o.Attributes = &v
}

func (o CatalogsHotelItemResponse) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsHotelItemResponse) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["catalog_type"] = o.CatalogType
	if !IsNil(o.HotelId) {
		toSerialize["hotel_id"] = o.HotelId
	}
	if o.Pins != nil {
		toSerialize["pins"] = o.Pins
	}
	if !IsNil(o.Attributes) {
		toSerialize["attributes"] = o.Attributes
	}
	return toSerialize, nil
}

func (o *CatalogsHotelItemResponse) UnmarshalJSON(data []byte) (err error) {
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

	varCatalogsHotelItemResponse := _CatalogsHotelItemResponse{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsHotelItemResponse)

	if err != nil {
		return err
	}

	*o = CatalogsHotelItemResponse(varCatalogsHotelItemResponse)

	return err
}

type NullableCatalogsHotelItemResponse struct {
	value *CatalogsHotelItemResponse
	isSet bool
}

func (v NullableCatalogsHotelItemResponse) Get() *CatalogsHotelItemResponse {
	return v.value
}

func (v *NullableCatalogsHotelItemResponse) Set(val *CatalogsHotelItemResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsHotelItemResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsHotelItemResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsHotelItemResponse(val *CatalogsHotelItemResponse) *NullableCatalogsHotelItemResponse {
	return &NullableCatalogsHotelItemResponse{value: val, isSet: true}
}

func (v NullableCatalogsHotelItemResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsHotelItemResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


