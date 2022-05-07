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

// NonNullableCatalogsCurrency Currency Codes from ISO 4217.
type NonNullableCatalogsCurrency string

// List of NonNullableCatalogsCurrency
const (
	AED NonNullableCatalogsCurrency = "AED"
	AFN NonNullableCatalogsCurrency = "AFN"
	ALL NonNullableCatalogsCurrency = "ALL"
	AMD NonNullableCatalogsCurrency = "AMD"
	ANG NonNullableCatalogsCurrency = "ANG"
	AOA NonNullableCatalogsCurrency = "AOA"
	ARS NonNullableCatalogsCurrency = "ARS"
	AUD NonNullableCatalogsCurrency = "AUD"
	AWG NonNullableCatalogsCurrency = "AWG"
	AZN NonNullableCatalogsCurrency = "AZN"
	BAM NonNullableCatalogsCurrency = "BAM"
	BBD NonNullableCatalogsCurrency = "BBD"
	BDT NonNullableCatalogsCurrency = "BDT"
	BGN NonNullableCatalogsCurrency = "BGN"
	BHD NonNullableCatalogsCurrency = "BHD"
	BIF NonNullableCatalogsCurrency = "BIF"
	BMD NonNullableCatalogsCurrency = "BMD"
	BND NonNullableCatalogsCurrency = "BND"
	BOB NonNullableCatalogsCurrency = "BOB"
	BRL NonNullableCatalogsCurrency = "BRL"
	BSD NonNullableCatalogsCurrency = "BSD"
	BTN NonNullableCatalogsCurrency = "BTN"
	BWP NonNullableCatalogsCurrency = "BWP"
	BYN NonNullableCatalogsCurrency = "BYN"
	BYR NonNullableCatalogsCurrency = "BYR"
	BZD NonNullableCatalogsCurrency = "BZD"
	CAD NonNullableCatalogsCurrency = "CAD"
	CDF NonNullableCatalogsCurrency = "CDF"
	CHF NonNullableCatalogsCurrency = "CHF"
	CLP NonNullableCatalogsCurrency = "CLP"
	CNY NonNullableCatalogsCurrency = "CNY"
	COP NonNullableCatalogsCurrency = "COP"
	CRC NonNullableCatalogsCurrency = "CRC"
	CUC NonNullableCatalogsCurrency = "CUC"
	CUP NonNullableCatalogsCurrency = "CUP"
	CVE NonNullableCatalogsCurrency = "CVE"
	CZK NonNullableCatalogsCurrency = "CZK"
	DJF NonNullableCatalogsCurrency = "DJF"
	DKK NonNullableCatalogsCurrency = "DKK"
	DOP NonNullableCatalogsCurrency = "DOP"
	DZD NonNullableCatalogsCurrency = "DZD"
	EGP NonNullableCatalogsCurrency = "EGP"
	ERN NonNullableCatalogsCurrency = "ERN"
	ETB NonNullableCatalogsCurrency = "ETB"
	EUR NonNullableCatalogsCurrency = "EUR"
	FJD NonNullableCatalogsCurrency = "FJD"
	FKP NonNullableCatalogsCurrency = "FKP"
	GBP NonNullableCatalogsCurrency = "GBP"
	GEL NonNullableCatalogsCurrency = "GEL"
	GGP NonNullableCatalogsCurrency = "GGP"
	GHS NonNullableCatalogsCurrency = "GHS"
	GIP NonNullableCatalogsCurrency = "GIP"
	GMD NonNullableCatalogsCurrency = "GMD"
	GNF NonNullableCatalogsCurrency = "GNF"
	GTQ NonNullableCatalogsCurrency = "GTQ"
	GYD NonNullableCatalogsCurrency = "GYD"
	HKD NonNullableCatalogsCurrency = "HKD"
	HNL NonNullableCatalogsCurrency = "HNL"
	HRK NonNullableCatalogsCurrency = "HRK"
	HTG NonNullableCatalogsCurrency = "HTG"
	HUF NonNullableCatalogsCurrency = "HUF"
	IDR NonNullableCatalogsCurrency = "IDR"
	ILS NonNullableCatalogsCurrency = "ILS"
	IMP NonNullableCatalogsCurrency = "IMP"
	INR NonNullableCatalogsCurrency = "INR"
	IQD NonNullableCatalogsCurrency = "IQD"
	IRR NonNullableCatalogsCurrency = "IRR"
	ISK NonNullableCatalogsCurrency = "ISK"
	JEP NonNullableCatalogsCurrency = "JEP"
	JMD NonNullableCatalogsCurrency = "JMD"
	JOD NonNullableCatalogsCurrency = "JOD"
	JPY NonNullableCatalogsCurrency = "JPY"
	KES NonNullableCatalogsCurrency = "KES"
	KGS NonNullableCatalogsCurrency = "KGS"
	KHR NonNullableCatalogsCurrency = "KHR"
	KMF NonNullableCatalogsCurrency = "KMF"
	KPW NonNullableCatalogsCurrency = "KPW"
	KRW NonNullableCatalogsCurrency = "KRW"
	KWD NonNullableCatalogsCurrency = "KWD"
	KYD NonNullableCatalogsCurrency = "KYD"
	KZT NonNullableCatalogsCurrency = "KZT"
	LAK NonNullableCatalogsCurrency = "LAK"
	LBP NonNullableCatalogsCurrency = "LBP"
	LKR NonNullableCatalogsCurrency = "LKR"
	LRD NonNullableCatalogsCurrency = "LRD"
	LSL NonNullableCatalogsCurrency = "LSL"
	LYD NonNullableCatalogsCurrency = "LYD"
	MAD NonNullableCatalogsCurrency = "MAD"
	MDL NonNullableCatalogsCurrency = "MDL"
	MGA NonNullableCatalogsCurrency = "MGA"
	MKD NonNullableCatalogsCurrency = "MKD"
	MMK NonNullableCatalogsCurrency = "MMK"
	MNT NonNullableCatalogsCurrency = "MNT"
	MOP NonNullableCatalogsCurrency = "MOP"
	MRO NonNullableCatalogsCurrency = "MRO"
	MUR NonNullableCatalogsCurrency = "MUR"
	MVR NonNullableCatalogsCurrency = "MVR"
	MWK NonNullableCatalogsCurrency = "MWK"
	MXN NonNullableCatalogsCurrency = "MXN"
	MYR NonNullableCatalogsCurrency = "MYR"
	MZN NonNullableCatalogsCurrency = "MZN"
	NAD NonNullableCatalogsCurrency = "NAD"
	NGN NonNullableCatalogsCurrency = "NGN"
	NIO NonNullableCatalogsCurrency = "NIO"
	NOK NonNullableCatalogsCurrency = "NOK"
	NPR NonNullableCatalogsCurrency = "NPR"
	NZD NonNullableCatalogsCurrency = "NZD"
	OMR NonNullableCatalogsCurrency = "OMR"
	PAB NonNullableCatalogsCurrency = "PAB"
	PEN NonNullableCatalogsCurrency = "PEN"
	PGK NonNullableCatalogsCurrency = "PGK"
	PHP NonNullableCatalogsCurrency = "PHP"
	PKR NonNullableCatalogsCurrency = "PKR"
	PLN NonNullableCatalogsCurrency = "PLN"
	PYG NonNullableCatalogsCurrency = "PYG"
	QAR NonNullableCatalogsCurrency = "QAR"
	RON NonNullableCatalogsCurrency = "RON"
	RSD NonNullableCatalogsCurrency = "RSD"
	RUB NonNullableCatalogsCurrency = "RUB"
	RWF NonNullableCatalogsCurrency = "RWF"
	SAR NonNullableCatalogsCurrency = "SAR"
	SBD NonNullableCatalogsCurrency = "SBD"
	SCR NonNullableCatalogsCurrency = "SCR"
	SDG NonNullableCatalogsCurrency = "SDG"
	SEK NonNullableCatalogsCurrency = "SEK"
	SGD NonNullableCatalogsCurrency = "SGD"
	SHP NonNullableCatalogsCurrency = "SHP"
	SLL NonNullableCatalogsCurrency = "SLL"
	SOS NonNullableCatalogsCurrency = "SOS"
	SPL NonNullableCatalogsCurrency = "SPL"
	SRD NonNullableCatalogsCurrency = "SRD"
	STD NonNullableCatalogsCurrency = "STD"
	SVC NonNullableCatalogsCurrency = "SVC"
	SYP NonNullableCatalogsCurrency = "SYP"
	SZL NonNullableCatalogsCurrency = "SZL"
	THB NonNullableCatalogsCurrency = "THB"
	TJS NonNullableCatalogsCurrency = "TJS"
	TMT NonNullableCatalogsCurrency = "TMT"
	TND NonNullableCatalogsCurrency = "TND"
	TOP NonNullableCatalogsCurrency = "TOP"
	TRY NonNullableCatalogsCurrency = "TRY"
	TTD NonNullableCatalogsCurrency = "TTD"
	TVD NonNullableCatalogsCurrency = "TVD"
	TWD NonNullableCatalogsCurrency = "TWD"
	TZS NonNullableCatalogsCurrency = "TZS"
	UAH NonNullableCatalogsCurrency = "UAH"
	UGX NonNullableCatalogsCurrency = "UGX"
	USD NonNullableCatalogsCurrency = "USD"
	UYU NonNullableCatalogsCurrency = "UYU"
	UZS NonNullableCatalogsCurrency = "UZS"
	VEF NonNullableCatalogsCurrency = "VEF"
	VND NonNullableCatalogsCurrency = "VND"
	VUV NonNullableCatalogsCurrency = "VUV"
	WST NonNullableCatalogsCurrency = "WST"
	XAF NonNullableCatalogsCurrency = "XAF"
	XCD NonNullableCatalogsCurrency = "XCD"
	XDR NonNullableCatalogsCurrency = "XDR"
	XOF NonNullableCatalogsCurrency = "XOF"
	XPF NonNullableCatalogsCurrency = "XPF"
	YER NonNullableCatalogsCurrency = "YER"
	ZAR NonNullableCatalogsCurrency = "ZAR"
	ZMW NonNullableCatalogsCurrency = "ZMW"
	ZWD NonNullableCatalogsCurrency = "ZWD"
)

// All allowed values of NonNullableCatalogsCurrency enum
var AllowedNonNullableCatalogsCurrencyEnumValues = []NonNullableCatalogsCurrency{
	"AED",
	"AFN",
	"ALL",
	"AMD",
	"ANG",
	"AOA",
	"ARS",
	"AUD",
	"AWG",
	"AZN",
	"BAM",
	"BBD",
	"BDT",
	"BGN",
	"BHD",
	"BIF",
	"BMD",
	"BND",
	"BOB",
	"BRL",
	"BSD",
	"BTN",
	"BWP",
	"BYN",
	"BYR",
	"BZD",
	"CAD",
	"CDF",
	"CHF",
	"CLP",
	"CNY",
	"COP",
	"CRC",
	"CUC",
	"CUP",
	"CVE",
	"CZK",
	"DJF",
	"DKK",
	"DOP",
	"DZD",
	"EGP",
	"ERN",
	"ETB",
	"EUR",
	"FJD",
	"FKP",
	"GBP",
	"GEL",
	"GGP",
	"GHS",
	"GIP",
	"GMD",
	"GNF",
	"GTQ",
	"GYD",
	"HKD",
	"HNL",
	"HRK",
	"HTG",
	"HUF",
	"IDR",
	"ILS",
	"IMP",
	"INR",
	"IQD",
	"IRR",
	"ISK",
	"JEP",
	"JMD",
	"JOD",
	"JPY",
	"KES",
	"KGS",
	"KHR",
	"KMF",
	"KPW",
	"KRW",
	"KWD",
	"KYD",
	"KZT",
	"LAK",
	"LBP",
	"LKR",
	"LRD",
	"LSL",
	"LYD",
	"MAD",
	"MDL",
	"MGA",
	"MKD",
	"MMK",
	"MNT",
	"MOP",
	"MRO",
	"MUR",
	"MVR",
	"MWK",
	"MXN",
	"MYR",
	"MZN",
	"NAD",
	"NGN",
	"NIO",
	"NOK",
	"NPR",
	"NZD",
	"OMR",
	"PAB",
	"PEN",
	"PGK",
	"PHP",
	"PKR",
	"PLN",
	"PYG",
	"QAR",
	"RON",
	"RSD",
	"RUB",
	"RWF",
	"SAR",
	"SBD",
	"SCR",
	"SDG",
	"SEK",
	"SGD",
	"SHP",
	"SLL",
	"SOS",
	"SPL",
	"SRD",
	"STD",
	"SVC",
	"SYP",
	"SZL",
	"THB",
	"TJS",
	"TMT",
	"TND",
	"TOP",
	"TRY",
	"TTD",
	"TVD",
	"TWD",
	"TZS",
	"UAH",
	"UGX",
	"USD",
	"UYU",
	"UZS",
	"VEF",
	"VND",
	"VUV",
	"WST",
	"XAF",
	"XCD",
	"XDR",
	"XOF",
	"XPF",
	"YER",
	"ZAR",
	"ZMW",
	"ZWD",
}

func (v *NonNullableCatalogsCurrency) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := NonNullableCatalogsCurrency(value)
	for _, existing := range AllowedNonNullableCatalogsCurrencyEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid NonNullableCatalogsCurrency", value)
}

// NewNonNullableCatalogsCurrencyFromValue returns a pointer to a valid NonNullableCatalogsCurrency
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewNonNullableCatalogsCurrencyFromValue(v string) (*NonNullableCatalogsCurrency, error) {
	ev := NonNullableCatalogsCurrency(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for NonNullableCatalogsCurrency: valid values are %v", v, AllowedNonNullableCatalogsCurrencyEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v NonNullableCatalogsCurrency) IsValid() bool {
	for _, existing := range AllowedNonNullableCatalogsCurrencyEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to NonNullableCatalogsCurrency value
func (v NonNullableCatalogsCurrency) Ptr() *NonNullableCatalogsCurrency {
	return &v
}

type NullableNonNullableCatalogsCurrency struct {
	value *NonNullableCatalogsCurrency
	isSet bool
}

func (v NullableNonNullableCatalogsCurrency) Get() *NonNullableCatalogsCurrency {
	return v.value
}

func (v *NullableNonNullableCatalogsCurrency) Set(val *NonNullableCatalogsCurrency) {
	v.value = val
	v.isSet = true
}

func (v NullableNonNullableCatalogsCurrency) IsSet() bool {
	return v.isSet
}

func (v *NullableNonNullableCatalogsCurrency) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableNonNullableCatalogsCurrency(val *NonNullableCatalogsCurrency) *NullableNonNullableCatalogsCurrency {
	return &NullableNonNullableCatalogsCurrency{value: val, isSet: true}
}

func (v NullableNonNullableCatalogsCurrency) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableNonNullableCatalogsCurrency) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

