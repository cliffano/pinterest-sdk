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
