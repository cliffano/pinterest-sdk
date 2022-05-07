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
	"fmt"
)

// PinPromotionSummaryStatus Summary status for pin promotions
type PinPromotionSummaryStatus string

// List of PinPromotionSummaryStatus
const (
	APPROVED PinPromotionSummaryStatus = "APPROVED"
	PAUSED PinPromotionSummaryStatus = "PAUSED"
	PENDING PinPromotionSummaryStatus = "PENDING"
	REJECTED PinPromotionSummaryStatus = "REJECTED"
	ADVERTISER_DISABLED PinPromotionSummaryStatus = "ADVERTISER_DISABLED"
	ARCHIVED PinPromotionSummaryStatus = "ARCHIVED"
)

// All allowed values of PinPromotionSummaryStatus enum
var AllowedPinPromotionSummaryStatusEnumValues = []PinPromotionSummaryStatus{
	"APPROVED",
	"PAUSED",
	"PENDING",
	"REJECTED",
	"ADVERTISER_DISABLED",
	"ARCHIVED",
}

func (v *PinPromotionSummaryStatus) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := PinPromotionSummaryStatus(value)
	for _, existing := range AllowedPinPromotionSummaryStatusEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid PinPromotionSummaryStatus", value)
}

// NewPinPromotionSummaryStatusFromValue returns a pointer to a valid PinPromotionSummaryStatus
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewPinPromotionSummaryStatusFromValue(v string) (*PinPromotionSummaryStatus, error) {
	ev := PinPromotionSummaryStatus(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for PinPromotionSummaryStatus: valid values are %v", v, AllowedPinPromotionSummaryStatusEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v PinPromotionSummaryStatus) IsValid() bool {
	for _, existing := range AllowedPinPromotionSummaryStatusEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to PinPromotionSummaryStatus value
func (v PinPromotionSummaryStatus) Ptr() *PinPromotionSummaryStatus {
	return &v
}

type NullablePinPromotionSummaryStatus struct {
	value *PinPromotionSummaryStatus
	isSet bool
}

func (v NullablePinPromotionSummaryStatus) Get() *PinPromotionSummaryStatus {
	return v.value
}

func (v *NullablePinPromotionSummaryStatus) Set(val *PinPromotionSummaryStatus) {
	v.value = val
	v.isSet = true
}

func (v NullablePinPromotionSummaryStatus) IsSet() bool {
	return v.isSet
}

func (v *NullablePinPromotionSummaryStatus) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePinPromotionSummaryStatus(val *PinPromotionSummaryStatus) *NullablePinPromotionSummaryStatus {
	return &NullablePinPromotionSummaryStatus{value: val, isSet: true}
}

func (v NullablePinPromotionSummaryStatus) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePinPromotionSummaryStatus) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

