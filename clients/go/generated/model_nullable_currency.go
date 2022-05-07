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

// NullableCurrency Currency Codes from ISO 4217.
type NullableCurrency string

// List of NullableCurrency
const (
	AED NullableCurrency = "AED"
	AFN NullableCurrency = "AFN"
	ALL NullableCurrency = "ALL"
	AMD NullableCurrency = "AMD"
	ANG NullableCurrency = "ANG"
	AOA NullableCurrency = "AOA"
	ARS NullableCurrency = "ARS"
	AUD NullableCurrency = "AUD"
	AWG NullableCurrency = "AWG"
	AZN NullableCurrency = "AZN"
	BAM NullableCurrency = "BAM"
	BBD NullableCurrency = "BBD"
	BDT NullableCurrency = "BDT"
	BGN NullableCurrency = "BGN"
	BHD NullableCurrency = "BHD"
	BIF NullableCurrency = "BIF"
	BMD NullableCurrency = "BMD"
	BND NullableCurrency = "BND"
	BOB NullableCurrency = "BOB"
	BRL NullableCurrency = "BRL"
	BSD NullableCurrency = "BSD"
	BTN NullableCurrency = "BTN"
	BWP NullableCurrency = "BWP"
	BYN NullableCurrency = "BYN"
	BYR NullableCurrency = "BYR"
	BZD NullableCurrency = "BZD"
	CAD NullableCurrency = "CAD"
	CDF NullableCurrency = "CDF"
	CHF NullableCurrency = "CHF"
	CLP NullableCurrency = "CLP"
	CNY NullableCurrency = "CNY"
	COP NullableCurrency = "COP"
	CRC NullableCurrency = "CRC"
	CUC NullableCurrency = "CUC"
	CUP NullableCurrency = "CUP"
	CVE NullableCurrency = "CVE"
	CZK NullableCurrency = "CZK"
	DJF NullableCurrency = "DJF"
	DKK NullableCurrency = "DKK"
	DOP NullableCurrency = "DOP"
	DZD NullableCurrency = "DZD"
	EGP NullableCurrency = "EGP"
	ERN NullableCurrency = "ERN"
	ETB NullableCurrency = "ETB"
	EUR NullableCurrency = "EUR"
	FJD NullableCurrency = "FJD"
	FKP NullableCurrency = "FKP"
	GBP NullableCurrency = "GBP"
	GEL NullableCurrency = "GEL"
	GGP NullableCurrency = "GGP"
	GHS NullableCurrency = "GHS"
	GIP NullableCurrency = "GIP"
	GMD NullableCurrency = "GMD"
	GNF NullableCurrency = "GNF"
	GTQ NullableCurrency = "GTQ"
	GYD NullableCurrency = "GYD"
	HKD NullableCurrency = "HKD"
	HNL NullableCurrency = "HNL"
	HRK NullableCurrency = "HRK"
	HTG NullableCurrency = "HTG"
	HUF NullableCurrency = "HUF"
	IDR NullableCurrency = "IDR"
	ILS NullableCurrency = "ILS"
	IMP NullableCurrency = "IMP"
	INR NullableCurrency = "INR"
	IQD NullableCurrency = "IQD"
	IRR NullableCurrency = "IRR"
	ISK NullableCurrency = "ISK"
	JEP NullableCurrency = "JEP"
	JMD NullableCurrency = "JMD"
	JOD NullableCurrency = "JOD"
	JPY NullableCurrency = "JPY"
	KES NullableCurrency = "KES"
	KGS NullableCurrency = "KGS"
	KHR NullableCurrency = "KHR"
	KMF NullableCurrency = "KMF"
	KPW NullableCurrency = "KPW"
	KRW NullableCurrency = "KRW"
	KWD NullableCurrency = "KWD"
	KYD NullableCurrency = "KYD"
	KZT NullableCurrency = "KZT"
	LAK NullableCurrency = "LAK"
	LBP NullableCurrency = "LBP"
	LKR NullableCurrency = "LKR"
	LRD NullableCurrency = "LRD"
	LSL NullableCurrency = "LSL"
	LYD NullableCurrency = "LYD"
	MAD NullableCurrency = "MAD"
	MDL NullableCurrency = "MDL"
	MGA NullableCurrency = "MGA"
	MKD NullableCurrency = "MKD"
	MMK NullableCurrency = "MMK"
	MNT NullableCurrency = "MNT"
	MOP NullableCurrency = "MOP"
	MRO NullableCurrency = "MRO"
	MUR NullableCurrency = "MUR"
	MVR NullableCurrency = "MVR"
	MWK NullableCurrency = "MWK"
	MXN NullableCurrency = "MXN"
	MYR NullableCurrency = "MYR"
	MZN NullableCurrency = "MZN"
	NAD NullableCurrency = "NAD"
	NGN NullableCurrency = "NGN"
	NIO NullableCurrency = "NIO"
	NOK NullableCurrency = "NOK"
	NPR NullableCurrency = "NPR"
	NZD NullableCurrency = "NZD"
	OMR NullableCurrency = "OMR"
	PAB NullableCurrency = "PAB"
	PEN NullableCurrency = "PEN"
	PGK NullableCurrency = "PGK"
	PHP NullableCurrency = "PHP"
	PKR NullableCurrency = "PKR"
	PLN NullableCurrency = "PLN"
	PYG NullableCurrency = "PYG"
	QAR NullableCurrency = "QAR"
	RON NullableCurrency = "RON"
	RSD NullableCurrency = "RSD"
	RUB NullableCurrency = "RUB"
	RWF NullableCurrency = "RWF"
	SAR NullableCurrency = "SAR"
	SBD NullableCurrency = "SBD"
	SCR NullableCurrency = "SCR"
	SDG NullableCurrency = "SDG"
	SEK NullableCurrency = "SEK"
	SGD NullableCurrency = "SGD"
	SHP NullableCurrency = "SHP"
	SLL NullableCurrency = "SLL"
	SOS NullableCurrency = "SOS"
	SPL NullableCurrency = "SPL"
	SRD NullableCurrency = "SRD"
	STD NullableCurrency = "STD"
	SVC NullableCurrency = "SVC"
	SYP NullableCurrency = "SYP"
	SZL NullableCurrency = "SZL"
	THB NullableCurrency = "THB"
	TJS NullableCurrency = "TJS"
	TMT NullableCurrency = "TMT"
	TND NullableCurrency = "TND"
	TOP NullableCurrency = "TOP"
	TRY NullableCurrency = "TRY"
	TTD NullableCurrency = "TTD"
	TVD NullableCurrency = "TVD"
	TWD NullableCurrency = "TWD"
	TZS NullableCurrency = "TZS"
	UAH NullableCurrency = "UAH"
	UGX NullableCurrency = "UGX"
	USD NullableCurrency = "USD"
	UYU NullableCurrency = "UYU"
	UZS NullableCurrency = "UZS"
	VEF NullableCurrency = "VEF"
	VND NullableCurrency = "VND"
	VUV NullableCurrency = "VUV"
	WST NullableCurrency = "WST"
	XAF NullableCurrency = "XAF"
	XCD NullableCurrency = "XCD"
	XDR NullableCurrency = "XDR"
	XOF NullableCurrency = "XOF"
	XPF NullableCurrency = "XPF"
	YER NullableCurrency = "YER"
	ZAR NullableCurrency = "ZAR"
	ZMW NullableCurrency = "ZMW"
	ZWD NullableCurrency = "ZWD"
	NULL NullableCurrency = "null"
)

// All allowed values of NullableCurrency enum
var AllowedNullableCurrencyEnumValues = []NullableCurrency{
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
	"null",
}

func (v *NullableCurrency) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := NullableCurrency(value)
	for _, existing := range AllowedNullableCurrencyEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid NullableCurrency", value)
}

// NewNullableCurrencyFromValue returns a pointer to a valid NullableCurrency
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewNullableCurrencyFromValue(v string) (*NullableCurrency, error) {
	ev := NullableCurrency(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for NullableCurrency: valid values are %v", v, AllowedNullableCurrencyEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v NullableCurrency) IsValid() bool {
	for _, existing := range AllowedNullableCurrencyEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to NullableCurrency value
func (v NullableCurrency) Ptr() *NullableCurrency {
	return &v
}

type NullableNullableCurrency struct {
	value *NullableCurrency
	isSet bool
}

func (v NullableNullableCurrency) Get() *NullableCurrency {
	return v.value
}

func (v *NullableNullableCurrency) Set(val *NullableCurrency) {
	v.value = val
	v.isSet = true
}

func (v NullableNullableCurrency) IsSet() bool {
	return v.isSet
}

func (v *NullableNullableCurrency) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableNullableCurrency(val *NullableCurrency) *NullableNullableCurrency {
	return &NullableNullableCurrency{value: val, isSet: true}
}

func (v NullableNullableCurrency) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableNullableCurrency) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

