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

// checks if the ConversionEventsDataInnerCustomDataContentsInner type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &ConversionEventsDataInnerCustomDataContentsInner{}

// ConversionEventsDataInnerCustomDataContentsInner struct for ConversionEventsDataInnerCustomDataContentsInner
type ConversionEventsDataInnerCustomDataContentsInner struct {
	// The id of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
	Id *string `json:"id,omitempty"`
	// The price of a product. Accepted as a string in the request; it will be parsed into a double. This is the original item value before any discount. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
	ItemPrice *string `json:"item_price,omitempty"`
	// The amount of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
	Quantity *int64 `json:"quantity,omitempty"`
	// The name of a product.
	ItemName *string `json:"item_name,omitempty"`
	// The category of a product.
	ItemCategory *string `json:"item_category,omitempty"`
	// The brand of a product.
	ItemBrand *string `json:"item_brand,omitempty"`
}

// NewConversionEventsDataInnerCustomDataContentsInner instantiates a new ConversionEventsDataInnerCustomDataContentsInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewConversionEventsDataInnerCustomDataContentsInner() *ConversionEventsDataInnerCustomDataContentsInner {
	this := ConversionEventsDataInnerCustomDataContentsInner{}
	return &this
}

// NewConversionEventsDataInnerCustomDataContentsInnerWithDefaults instantiates a new ConversionEventsDataInnerCustomDataContentsInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewConversionEventsDataInnerCustomDataContentsInnerWithDefaults() *ConversionEventsDataInnerCustomDataContentsInner {
	this := ConversionEventsDataInnerCustomDataContentsInner{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetId() string {
	if o == nil || IsNil(o.Id) {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetIdOk() (*string, bool) {
	if o == nil || IsNil(o.Id) {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) HasId() bool {
	if o != nil && !IsNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *ConversionEventsDataInnerCustomDataContentsInner) SetId(v string) {
	o.Id = &v
}

// GetItemPrice returns the ItemPrice field value if set, zero value otherwise.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemPrice() string {
	if o == nil || IsNil(o.ItemPrice) {
		var ret string
		return ret
	}
	return *o.ItemPrice
}

// GetItemPriceOk returns a tuple with the ItemPrice field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemPriceOk() (*string, bool) {
	if o == nil || IsNil(o.ItemPrice) {
		return nil, false
	}
	return o.ItemPrice, true
}

// HasItemPrice returns a boolean if a field has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) HasItemPrice() bool {
	if o != nil && !IsNil(o.ItemPrice) {
		return true
	}

	return false
}

// SetItemPrice gets a reference to the given string and assigns it to the ItemPrice field.
func (o *ConversionEventsDataInnerCustomDataContentsInner) SetItemPrice(v string) {
	o.ItemPrice = &v
}

// GetQuantity returns the Quantity field value if set, zero value otherwise.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetQuantity() int64 {
	if o == nil || IsNil(o.Quantity) {
		var ret int64
		return ret
	}
	return *o.Quantity
}

// GetQuantityOk returns a tuple with the Quantity field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetQuantityOk() (*int64, bool) {
	if o == nil || IsNil(o.Quantity) {
		return nil, false
	}
	return o.Quantity, true
}

// HasQuantity returns a boolean if a field has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) HasQuantity() bool {
	if o != nil && !IsNil(o.Quantity) {
		return true
	}

	return false
}

// SetQuantity gets a reference to the given int64 and assigns it to the Quantity field.
func (o *ConversionEventsDataInnerCustomDataContentsInner) SetQuantity(v int64) {
	o.Quantity = &v
}

// GetItemName returns the ItemName field value if set, zero value otherwise.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemName() string {
	if o == nil || IsNil(o.ItemName) {
		var ret string
		return ret
	}
	return *o.ItemName
}

// GetItemNameOk returns a tuple with the ItemName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemNameOk() (*string, bool) {
	if o == nil || IsNil(o.ItemName) {
		return nil, false
	}
	return o.ItemName, true
}

// HasItemName returns a boolean if a field has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) HasItemName() bool {
	if o != nil && !IsNil(o.ItemName) {
		return true
	}

	return false
}

// SetItemName gets a reference to the given string and assigns it to the ItemName field.
func (o *ConversionEventsDataInnerCustomDataContentsInner) SetItemName(v string) {
	o.ItemName = &v
}

// GetItemCategory returns the ItemCategory field value if set, zero value otherwise.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemCategory() string {
	if o == nil || IsNil(o.ItemCategory) {
		var ret string
		return ret
	}
	return *o.ItemCategory
}

// GetItemCategoryOk returns a tuple with the ItemCategory field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemCategoryOk() (*string, bool) {
	if o == nil || IsNil(o.ItemCategory) {
		return nil, false
	}
	return o.ItemCategory, true
}

// HasItemCategory returns a boolean if a field has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) HasItemCategory() bool {
	if o != nil && !IsNil(o.ItemCategory) {
		return true
	}

	return false
}

// SetItemCategory gets a reference to the given string and assigns it to the ItemCategory field.
func (o *ConversionEventsDataInnerCustomDataContentsInner) SetItemCategory(v string) {
	o.ItemCategory = &v
}

// GetItemBrand returns the ItemBrand field value if set, zero value otherwise.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemBrand() string {
	if o == nil || IsNil(o.ItemBrand) {
		var ret string
		return ret
	}
	return *o.ItemBrand
}

// GetItemBrandOk returns a tuple with the ItemBrand field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) GetItemBrandOk() (*string, bool) {
	if o == nil || IsNil(o.ItemBrand) {
		return nil, false
	}
	return o.ItemBrand, true
}

// HasItemBrand returns a boolean if a field has been set.
func (o *ConversionEventsDataInnerCustomDataContentsInner) HasItemBrand() bool {
	if o != nil && !IsNil(o.ItemBrand) {
		return true
	}

	return false
}

// SetItemBrand gets a reference to the given string and assigns it to the ItemBrand field.
func (o *ConversionEventsDataInnerCustomDataContentsInner) SetItemBrand(v string) {
	o.ItemBrand = &v
}

func (o ConversionEventsDataInnerCustomDataContentsInner) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o ConversionEventsDataInnerCustomDataContentsInner) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	if !IsNil(o.ItemPrice) {
		toSerialize["item_price"] = o.ItemPrice
	}
	if !IsNil(o.Quantity) {
		toSerialize["quantity"] = o.Quantity
	}
	if !IsNil(o.ItemName) {
		toSerialize["item_name"] = o.ItemName
	}
	if !IsNil(o.ItemCategory) {
		toSerialize["item_category"] = o.ItemCategory
	}
	if !IsNil(o.ItemBrand) {
		toSerialize["item_brand"] = o.ItemBrand
	}
	return toSerialize, nil
}

type NullableConversionEventsDataInnerCustomDataContentsInner struct {
	value *ConversionEventsDataInnerCustomDataContentsInner
	isSet bool
}

func (v NullableConversionEventsDataInnerCustomDataContentsInner) Get() *ConversionEventsDataInnerCustomDataContentsInner {
	return v.value
}

func (v *NullableConversionEventsDataInnerCustomDataContentsInner) Set(val *ConversionEventsDataInnerCustomDataContentsInner) {
	v.value = val
	v.isSet = true
}

func (v NullableConversionEventsDataInnerCustomDataContentsInner) IsSet() bool {
	return v.isSet
}

func (v *NullableConversionEventsDataInnerCustomDataContentsInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableConversionEventsDataInnerCustomDataContentsInner(val *ConversionEventsDataInnerCustomDataContentsInner) *NullableConversionEventsDataInnerCustomDataContentsInner {
	return &NullableConversionEventsDataInnerCustomDataContentsInner{value: val, isSet: true}
}

func (v NullableConversionEventsDataInnerCustomDataContentsInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableConversionEventsDataInnerCustomDataContentsInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


