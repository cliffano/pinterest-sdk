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
	"fmt"
)

// AudienceUpdateOperationType Audience operation type (update or remove).
type AudienceUpdateOperationType string

// List of AudienceUpdateOperationType
const (
	UPDATE AudienceUpdateOperationType = "UPDATE"
	REMOVE AudienceUpdateOperationType = "REMOVE"
)

// All allowed values of AudienceUpdateOperationType enum
var AllowedAudienceUpdateOperationTypeEnumValues = []AudienceUpdateOperationType{
	"UPDATE",
	"REMOVE",
}

func (v *AudienceUpdateOperationType) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := AudienceUpdateOperationType(value)
	for _, existing := range AllowedAudienceUpdateOperationTypeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid AudienceUpdateOperationType", value)
}

// NewAudienceUpdateOperationTypeFromValue returns a pointer to a valid AudienceUpdateOperationType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewAudienceUpdateOperationTypeFromValue(v string) (*AudienceUpdateOperationType, error) {
	ev := AudienceUpdateOperationType(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for AudienceUpdateOperationType: valid values are %v", v, AllowedAudienceUpdateOperationTypeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v AudienceUpdateOperationType) IsValid() bool {
	for _, existing := range AllowedAudienceUpdateOperationTypeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to AudienceUpdateOperationType value
func (v AudienceUpdateOperationType) Ptr() *AudienceUpdateOperationType {
	return &v
}

type NullableAudienceUpdateOperationType struct {
	value *AudienceUpdateOperationType
	isSet bool
}

func (v NullableAudienceUpdateOperationType) Get() *AudienceUpdateOperationType {
	return v.value
}

func (v *NullableAudienceUpdateOperationType) Set(val *AudienceUpdateOperationType) {
	v.value = val
	v.isSet = true
}

func (v NullableAudienceUpdateOperationType) IsSet() bool {
	return v.isSet
}

func (v *NullableAudienceUpdateOperationType) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAudienceUpdateOperationType(val *AudienceUpdateOperationType) *NullableAudienceUpdateOperationType {
	return &NullableAudienceUpdateOperationType{value: val, isSet: true}
}

func (v NullableAudienceUpdateOperationType) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAudienceUpdateOperationType) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
