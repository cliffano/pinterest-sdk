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

// Language Language code, which is among the offical ISO 639-1 language list.
type Language string

// List of Language
const (
	AM Language = "AM"
	AR Language = "AR"
	AZ Language = "AZ"
	BG Language = "BG"
	BN Language = "BN"
	BS Language = "BS"
	CA Language = "CA"
	CS Language = "CS"
	DA Language = "DA"
	DV Language = "DV"
	DZ Language = "DZ"
	DE Language = "DE"
	EL Language = "EL"
	EN Language = "EN"
	ES Language = "ES"
	ET Language = "ET"
	FA Language = "FA"
	FI Language = "FI"
	FR Language = "FR"
	HE Language = "HE"
	HI Language = "HI"
	HR Language = "HR"
	HU Language = "HU"
	HY Language = "HY"
	ID Language = "ID"
	IN Language = "IN"
	IS Language = "IS"
	IT Language = "IT"
	IW Language = "IW"
	JA Language = "JA"
	KA Language = "KA"
	KM Language = "KM"
	KO Language = "KO"
	LO Language = "LO"
	LT Language = "LT"
	LV Language = "LV"
	MK Language = "MK"
	MN Language = "MN"
	MS Language = "MS"
	MY Language = "MY"
	NB Language = "NB"
	NE Language = "NE"
	NL Language = "NL"
	NO Language = "NO"
	PL Language = "PL"
	PT Language = "PT"
	RO Language = "RO"
	RU Language = "RU"
	SK Language = "SK"
	SL Language = "SL"
	SQ Language = "SQ"
	SR Language = "SR"
	SV Language = "SV"
	TL Language = "TL"
	UK Language = "UK"
	VI Language = "VI"
	TE Language = "TE"
	TH Language = "TH"
	TR Language = "TR"
	XX Language = "XX"
	ZH Language = "ZH"
)

// All allowed values of Language enum
var AllowedLanguageEnumValues = []Language{
	"AM",
	"AR",
	"AZ",
	"BG",
	"BN",
	"BS",
	"CA",
	"CS",
	"DA",
	"DV",
	"DZ",
	"DE",
	"EL",
	"EN",
	"ES",
	"ET",
	"FA",
	"FI",
	"FR",
	"HE",
	"HI",
	"HR",
	"HU",
	"HY",
	"ID",
	"IN",
	"IS",
	"IT",
	"IW",
	"JA",
	"KA",
	"KM",
	"KO",
	"LO",
	"LT",
	"LV",
	"MK",
	"MN",
	"MS",
	"MY",
	"NB",
	"NE",
	"NL",
	"NO",
	"PL",
	"PT",
	"RO",
	"RU",
	"SK",
	"SL",
	"SQ",
	"SR",
	"SV",
	"TL",
	"UK",
	"VI",
	"TE",
	"TH",
	"TR",
	"XX",
	"ZH",
}

func (v *Language) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := Language(value)
	for _, existing := range AllowedLanguageEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid Language", value)
}

// NewLanguageFromValue returns a pointer to a valid Language
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewLanguageFromValue(v string) (*Language, error) {
	ev := Language(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for Language: valid values are %v", v, AllowedLanguageEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v Language) IsValid() bool {
	for _, existing := range AllowedLanguageEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to Language value
func (v Language) Ptr() *Language {
	return &v
}

type NullableLanguage struct {
	value *Language
	isSet bool
}

func (v NullableLanguage) Get() *Language {
	return v.value
}

func (v *NullableLanguage) Set(val *Language) {
	v.value = val
	v.isSet = true
}

func (v NullableLanguage) IsSet() bool {
	return v.isSet
}

func (v *NullableLanguage) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableLanguage(val *Language) *NullableLanguage {
	return &NullableLanguage{value: val, isSet: true}
}

func (v NullableLanguage) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableLanguage) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
