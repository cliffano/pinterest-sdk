/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// NullableCurrency : Currency Codes from ISO 4217.
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

// AssertNullableCurrencyRequired checks if the required fields are not zero-ed
func AssertNullableCurrencyRequired(obj NullableCurrency) error {
	return nil
}

// AssertRecurseNullableCurrencyRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of NullableCurrency (e.g. [][]NullableCurrency), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseNullableCurrencyRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aNullableCurrency, ok := obj.(NullableCurrency)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertNullableCurrencyRequired(aNullableCurrency)
	})
}
