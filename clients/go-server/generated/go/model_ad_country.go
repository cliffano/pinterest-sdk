/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi


import (
	"fmt"
)


// AdCountry : Country ID from ISO 3166-1 alpha-2.
type AdCountry string

// List of AdCountry
const (
	AD AdCountry = "AD"
	AE AdCountry = "AE"
	AF AdCountry = "AF"
	AG AdCountry = "AG"
	AI AdCountry = "AI"
	AL AdCountry = "AL"
	AM AdCountry = "AM"
	AO AdCountry = "AO"
	AQ AdCountry = "AQ"
	AR AdCountry = "AR"
	AS AdCountry = "AS"
	AT AdCountry = "AT"
	AU AdCountry = "AU"
	AW AdCountry = "AW"
	AX AdCountry = "AX"
	AZ AdCountry = "AZ"
	BA AdCountry = "BA"
	BB AdCountry = "BB"
	BD AdCountry = "BD"
	BE AdCountry = "BE"
	BF AdCountry = "BF"
	BG AdCountry = "BG"
	BH AdCountry = "BH"
	BI AdCountry = "BI"
	BJ AdCountry = "BJ"
	BL AdCountry = "BL"
	BM AdCountry = "BM"
	BN AdCountry = "BN"
	BO AdCountry = "BO"
	BQ AdCountry = "BQ"
	BR AdCountry = "BR"
	BS AdCountry = "BS"
	BT AdCountry = "BT"
	BV AdCountry = "BV"
	BW AdCountry = "BW"
	BY AdCountry = "BY"
	BZ AdCountry = "BZ"
	CA AdCountry = "CA"
	CC AdCountry = "CC"
	CD AdCountry = "CD"
	CF AdCountry = "CF"
	CG AdCountry = "CG"
	CH AdCountry = "CH"
	CI AdCountry = "CI"
	CK AdCountry = "CK"
	CL AdCountry = "CL"
	CM AdCountry = "CM"
	CN AdCountry = "CN"
	CO AdCountry = "CO"
	CR AdCountry = "CR"
	CU AdCountry = "CU"
	CV AdCountry = "CV"
	CW AdCountry = "CW"
	CX AdCountry = "CX"
	CY AdCountry = "CY"
	CZ AdCountry = "CZ"
	DE AdCountry = "DE"
	DJ AdCountry = "DJ"
	DK AdCountry = "DK"
	DM AdCountry = "DM"
	DO AdCountry = "DO"
	DZ AdCountry = "DZ"
	EC AdCountry = "EC"
	EE AdCountry = "EE"
	EG AdCountry = "EG"
	EH AdCountry = "EH"
	ER AdCountry = "ER"
	ES AdCountry = "ES"
	ET AdCountry = "ET"
	FI AdCountry = "FI"
	FJ AdCountry = "FJ"
	FK AdCountry = "FK"
	FM AdCountry = "FM"
	FO AdCountry = "FO"
	FR AdCountry = "FR"
	GA AdCountry = "GA"
	GB AdCountry = "GB"
	GD AdCountry = "GD"
	GE AdCountry = "GE"
	GF AdCountry = "GF"
	GG AdCountry = "GG"
	GH AdCountry = "GH"
	GI AdCountry = "GI"
	GL AdCountry = "GL"
	GM AdCountry = "GM"
	GN AdCountry = "GN"
	GP AdCountry = "GP"
	GQ AdCountry = "GQ"
	GR AdCountry = "GR"
	GS AdCountry = "GS"
	GT AdCountry = "GT"
	GU AdCountry = "GU"
	GW AdCountry = "GW"
	GY AdCountry = "GY"
	HK AdCountry = "HK"
	HM AdCountry = "HM"
	HN AdCountry = "HN"
	HR AdCountry = "HR"
	HT AdCountry = "HT"
	HU AdCountry = "HU"
	ID AdCountry = "ID"
	IE AdCountry = "IE"
	IL AdCountry = "IL"
	IM AdCountry = "IM"
	IN AdCountry = "IN"
	IO AdCountry = "IO"
	IQ AdCountry = "IQ"
	IR AdCountry = "IR"
	IS AdCountry = "IS"
	IT AdCountry = "IT"
	JE AdCountry = "JE"
	JM AdCountry = "JM"
	JO AdCountry = "JO"
	JP AdCountry = "JP"
	KE AdCountry = "KE"
	KG AdCountry = "KG"
	KH AdCountry = "KH"
	KI AdCountry = "KI"
	KM AdCountry = "KM"
	KN AdCountry = "KN"
	KR AdCountry = "KR"
	KW AdCountry = "KW"
	KY AdCountry = "KY"
	KZ AdCountry = "KZ"
	LA AdCountry = "LA"
	LB AdCountry = "LB"
	LC AdCountry = "LC"
	LI AdCountry = "LI"
	LK AdCountry = "LK"
	LR AdCountry = "LR"
	LS AdCountry = "LS"
	LT AdCountry = "LT"
	LU AdCountry = "LU"
	LV AdCountry = "LV"
	LY AdCountry = "LY"
	MA AdCountry = "MA"
	MC AdCountry = "MC"
	MD AdCountry = "MD"
	ME AdCountry = "ME"
	MF AdCountry = "MF"
	MG AdCountry = "MG"
	MH AdCountry = "MH"
	MK AdCountry = "MK"
	ML AdCountry = "ML"
	MM AdCountry = "MM"
	MN AdCountry = "MN"
	MO AdCountry = "MO"
	MP AdCountry = "MP"
	MQ AdCountry = "MQ"
	MR AdCountry = "MR"
	MS AdCountry = "MS"
	MT AdCountry = "MT"
	MU AdCountry = "MU"
	MV AdCountry = "MV"
	MW AdCountry = "MW"
	MX AdCountry = "MX"
	MY AdCountry = "MY"
	MZ AdCountry = "MZ"
	NA AdCountry = "NA"
	NC AdCountry = "NC"
	NE AdCountry = "NE"
	NF AdCountry = "NF"
	NG AdCountry = "NG"
	NI AdCountry = "NI"
	NL AdCountry = "NL"
	NO AdCountry = "NO"
	NP AdCountry = "NP"
	NR AdCountry = "NR"
	NU AdCountry = "NU"
	NZ AdCountry = "NZ"
	OM AdCountry = "OM"
	PA AdCountry = "PA"
	PE AdCountry = "PE"
	PF AdCountry = "PF"
	PG AdCountry = "PG"
	PH AdCountry = "PH"
	PK AdCountry = "PK"
	PL AdCountry = "PL"
	PM AdCountry = "PM"
	PN AdCountry = "PN"
	PR AdCountry = "PR"
	PS AdCountry = "PS"
	PT AdCountry = "PT"
	PW AdCountry = "PW"
	PY AdCountry = "PY"
	QA AdCountry = "QA"
	RE AdCountry = "RE"
	RO AdCountry = "RO"
	RS AdCountry = "RS"
	RU AdCountry = "RU"
	RW AdCountry = "RW"
	SA AdCountry = "SA"
	SB AdCountry = "SB"
	SC AdCountry = "SC"
	SD AdCountry = "SD"
	SE AdCountry = "SE"
	SG AdCountry = "SG"
	SH AdCountry = "SH"
	SI AdCountry = "SI"
	SJ AdCountry = "SJ"
	SK AdCountry = "SK"
	SL AdCountry = "SL"
	SM AdCountry = "SM"
	SN AdCountry = "SN"
	SO AdCountry = "SO"
	SR AdCountry = "SR"
	SS AdCountry = "SS"
	ST AdCountry = "ST"
	SV AdCountry = "SV"
	SX AdCountry = "SX"
	SY AdCountry = "SY"
	SZ AdCountry = "SZ"
	TC AdCountry = "TC"
	TD AdCountry = "TD"
	TF AdCountry = "TF"
	TG AdCountry = "TG"
	TH AdCountry = "TH"
	TJ AdCountry = "TJ"
	TK AdCountry = "TK"
	TL AdCountry = "TL"
	TM AdCountry = "TM"
	TN AdCountry = "TN"
	TO AdCountry = "TO"
	TR AdCountry = "TR"
	TT AdCountry = "TT"
	TV AdCountry = "TV"
	TW AdCountry = "TW"
	TZ AdCountry = "TZ"
	UA AdCountry = "UA"
	UG AdCountry = "UG"
	UM AdCountry = "UM"
	US AdCountry = "US"
	UY AdCountry = "UY"
	UZ AdCountry = "UZ"
	VA AdCountry = "VA"
	VC AdCountry = "VC"
	VE AdCountry = "VE"
	VG AdCountry = "VG"
	VI AdCountry = "VI"
	VN AdCountry = "VN"
	VU AdCountry = "VU"
	WF AdCountry = "WF"
	WS AdCountry = "WS"
	YE AdCountry = "YE"
	YT AdCountry = "YT"
	ZA AdCountry = "ZA"
	ZM AdCountry = "ZM"
	ZW AdCountry = "ZW"
)

// AllowedAdCountryEnumValues is all the allowed values of AdCountry enum
var AllowedAdCountryEnumValues = []AdCountry{
	"AD",
	"AE",
	"AF",
	"AG",
	"AI",
	"AL",
	"AM",
	"AO",
	"AQ",
	"AR",
	"AS",
	"AT",
	"AU",
	"AW",
	"AX",
	"AZ",
	"BA",
	"BB",
	"BD",
	"BE",
	"BF",
	"BG",
	"BH",
	"BI",
	"BJ",
	"BL",
	"BM",
	"BN",
	"BO",
	"BQ",
	"BR",
	"BS",
	"BT",
	"BV",
	"BW",
	"BY",
	"BZ",
	"CA",
	"CC",
	"CD",
	"CF",
	"CG",
	"CH",
	"CI",
	"CK",
	"CL",
	"CM",
	"CN",
	"CO",
	"CR",
	"CU",
	"CV",
	"CW",
	"CX",
	"CY",
	"CZ",
	"DE",
	"DJ",
	"DK",
	"DM",
	"DO",
	"DZ",
	"EC",
	"EE",
	"EG",
	"EH",
	"ER",
	"ES",
	"ET",
	"FI",
	"FJ",
	"FK",
	"FM",
	"FO",
	"FR",
	"GA",
	"GB",
	"GD",
	"GE",
	"GF",
	"GG",
	"GH",
	"GI",
	"GL",
	"GM",
	"GN",
	"GP",
	"GQ",
	"GR",
	"GS",
	"GT",
	"GU",
	"GW",
	"GY",
	"HK",
	"HM",
	"HN",
	"HR",
	"HT",
	"HU",
	"ID",
	"IE",
	"IL",
	"IM",
	"IN",
	"IO",
	"IQ",
	"IR",
	"IS",
	"IT",
	"JE",
	"JM",
	"JO",
	"JP",
	"KE",
	"KG",
	"KH",
	"KI",
	"KM",
	"KN",
	"KR",
	"KW",
	"KY",
	"KZ",
	"LA",
	"LB",
	"LC",
	"LI",
	"LK",
	"LR",
	"LS",
	"LT",
	"LU",
	"LV",
	"LY",
	"MA",
	"MC",
	"MD",
	"ME",
	"MF",
	"MG",
	"MH",
	"MK",
	"ML",
	"MM",
	"MN",
	"MO",
	"MP",
	"MQ",
	"MR",
	"MS",
	"MT",
	"MU",
	"MV",
	"MW",
	"MX",
	"MY",
	"MZ",
	"NA",
	"NC",
	"NE",
	"NF",
	"NG",
	"NI",
	"NL",
	"NO",
	"NP",
	"NR",
	"NU",
	"NZ",
	"OM",
	"PA",
	"PE",
	"PF",
	"PG",
	"PH",
	"PK",
	"PL",
	"PM",
	"PN",
	"PR",
	"PS",
	"PT",
	"PW",
	"PY",
	"QA",
	"RE",
	"RO",
	"RS",
	"RU",
	"RW",
	"SA",
	"SB",
	"SC",
	"SD",
	"SE",
	"SG",
	"SH",
	"SI",
	"SJ",
	"SK",
	"SL",
	"SM",
	"SN",
	"SO",
	"SR",
	"SS",
	"ST",
	"SV",
	"SX",
	"SY",
	"SZ",
	"TC",
	"TD",
	"TF",
	"TG",
	"TH",
	"TJ",
	"TK",
	"TL",
	"TM",
	"TN",
	"TO",
	"TR",
	"TT",
	"TV",
	"TW",
	"TZ",
	"UA",
	"UG",
	"UM",
	"US",
	"UY",
	"UZ",
	"VA",
	"VC",
	"VE",
	"VG",
	"VI",
	"VN",
	"VU",
	"WF",
	"WS",
	"YE",
	"YT",
	"ZA",
	"ZM",
	"ZW",
}

// validAdCountryEnumValue provides a map of AdCountrys for fast verification of use input
var validAdCountryEnumValues = map[AdCountry]struct{}{
	"AD": {},
	"AE": {},
	"AF": {},
	"AG": {},
	"AI": {},
	"AL": {},
	"AM": {},
	"AO": {},
	"AQ": {},
	"AR": {},
	"AS": {},
	"AT": {},
	"AU": {},
	"AW": {},
	"AX": {},
	"AZ": {},
	"BA": {},
	"BB": {},
	"BD": {},
	"BE": {},
	"BF": {},
	"BG": {},
	"BH": {},
	"BI": {},
	"BJ": {},
	"BL": {},
	"BM": {},
	"BN": {},
	"BO": {},
	"BQ": {},
	"BR": {},
	"BS": {},
	"BT": {},
	"BV": {},
	"BW": {},
	"BY": {},
	"BZ": {},
	"CA": {},
	"CC": {},
	"CD": {},
	"CF": {},
	"CG": {},
	"CH": {},
	"CI": {},
	"CK": {},
	"CL": {},
	"CM": {},
	"CN": {},
	"CO": {},
	"CR": {},
	"CU": {},
	"CV": {},
	"CW": {},
	"CX": {},
	"CY": {},
	"CZ": {},
	"DE": {},
	"DJ": {},
	"DK": {},
	"DM": {},
	"DO": {},
	"DZ": {},
	"EC": {},
	"EE": {},
	"EG": {},
	"EH": {},
	"ER": {},
	"ES": {},
	"ET": {},
	"FI": {},
	"FJ": {},
	"FK": {},
	"FM": {},
	"FO": {},
	"FR": {},
	"GA": {},
	"GB": {},
	"GD": {},
	"GE": {},
	"GF": {},
	"GG": {},
	"GH": {},
	"GI": {},
	"GL": {},
	"GM": {},
	"GN": {},
	"GP": {},
	"GQ": {},
	"GR": {},
	"GS": {},
	"GT": {},
	"GU": {},
	"GW": {},
	"GY": {},
	"HK": {},
	"HM": {},
	"HN": {},
	"HR": {},
	"HT": {},
	"HU": {},
	"ID": {},
	"IE": {},
	"IL": {},
	"IM": {},
	"IN": {},
	"IO": {},
	"IQ": {},
	"IR": {},
	"IS": {},
	"IT": {},
	"JE": {},
	"JM": {},
	"JO": {},
	"JP": {},
	"KE": {},
	"KG": {},
	"KH": {},
	"KI": {},
	"KM": {},
	"KN": {},
	"KR": {},
	"KW": {},
	"KY": {},
	"KZ": {},
	"LA": {},
	"LB": {},
	"LC": {},
	"LI": {},
	"LK": {},
	"LR": {},
	"LS": {},
	"LT": {},
	"LU": {},
	"LV": {},
	"LY": {},
	"MA": {},
	"MC": {},
	"MD": {},
	"ME": {},
	"MF": {},
	"MG": {},
	"MH": {},
	"MK": {},
	"ML": {},
	"MM": {},
	"MN": {},
	"MO": {},
	"MP": {},
	"MQ": {},
	"MR": {},
	"MS": {},
	"MT": {},
	"MU": {},
	"MV": {},
	"MW": {},
	"MX": {},
	"MY": {},
	"MZ": {},
	"NA": {},
	"NC": {},
	"NE": {},
	"NF": {},
	"NG": {},
	"NI": {},
	"NL": {},
	"NO": {},
	"NP": {},
	"NR": {},
	"NU": {},
	"NZ": {},
	"OM": {},
	"PA": {},
	"PE": {},
	"PF": {},
	"PG": {},
	"PH": {},
	"PK": {},
	"PL": {},
	"PM": {},
	"PN": {},
	"PR": {},
	"PS": {},
	"PT": {},
	"PW": {},
	"PY": {},
	"QA": {},
	"RE": {},
	"RO": {},
	"RS": {},
	"RU": {},
	"RW": {},
	"SA": {},
	"SB": {},
	"SC": {},
	"SD": {},
	"SE": {},
	"SG": {},
	"SH": {},
	"SI": {},
	"SJ": {},
	"SK": {},
	"SL": {},
	"SM": {},
	"SN": {},
	"SO": {},
	"SR": {},
	"SS": {},
	"ST": {},
	"SV": {},
	"SX": {},
	"SY": {},
	"SZ": {},
	"TC": {},
	"TD": {},
	"TF": {},
	"TG": {},
	"TH": {},
	"TJ": {},
	"TK": {},
	"TL": {},
	"TM": {},
	"TN": {},
	"TO": {},
	"TR": {},
	"TT": {},
	"TV": {},
	"TW": {},
	"TZ": {},
	"UA": {},
	"UG": {},
	"UM": {},
	"US": {},
	"UY": {},
	"UZ": {},
	"VA": {},
	"VC": {},
	"VE": {},
	"VG": {},
	"VI": {},
	"VN": {},
	"VU": {},
	"WF": {},
	"WS": {},
	"YE": {},
	"YT": {},
	"ZA": {},
	"ZM": {},
	"ZW": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v AdCountry) IsValid() bool {
	_, ok := validAdCountryEnumValues[v]
	return ok
}

// NewAdCountryFromValue returns a pointer to a valid AdCountry
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewAdCountryFromValue(v string) (AdCountry, error) {
	ev := AdCountry(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for AdCountry: valid values are %v", v, AllowedAdCountryEnumValues)
	}
}



// AssertAdCountryRequired checks if the required fields are not zero-ed
func AssertAdCountryRequired(obj AdCountry) error {
	return nil
}

// AssertAdCountryConstraints checks if the values respects the defined constraints
func AssertAdCountryConstraints(obj AdCountry) error {
	return nil
}
