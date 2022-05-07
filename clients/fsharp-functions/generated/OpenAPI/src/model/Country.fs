namespace OpenAPI.Model

open System
open System.Collections.Generic
open Newtonsoft.Json

module Country =

  //#region Country

  let ADEnum = "AD"
  let AEEnum = "AE"
  let AFEnum = "AF"
  let AGEnum = "AG"
  let AIEnum = "AI"
  let ALEnum = "AL"
  let AMEnum = "AM"
  let AOEnum = "AO"
  let AQEnum = "AQ"
  let AREnum = "AR"
  let ASEnum = "AS"
  let ATEnum = "AT"
  let AUEnum = "AU"
  let AWEnum = "AW"
  let AXEnum = "AX"
  let AZEnum = "AZ"
  let BAEnum = "BA"
  let BBEnum = "BB"
  let BDEnum = "BD"
  let BEEnum = "BE"
  let BFEnum = "BF"
  let BGEnum = "BG"
  let BHEnum = "BH"
  let BIEnum = "BI"
  let BJEnum = "BJ"
  let BLEnum = "BL"
  let BMEnum = "BM"
  let BNEnum = "BN"
  let BOEnum = "BO"
  let BQEnum = "BQ"
  let BREnum = "BR"
  let BSEnum = "BS"
  let BTEnum = "BT"
  let BVEnum = "BV"
  let BWEnum = "BW"
  let BYEnum = "BY"
  let BZEnum = "BZ"
  let CAEnum = "CA"
  let CCEnum = "CC"
  let CDEnum = "CD"
  let CFEnum = "CF"
  let CGEnum = "CG"
  let CHEnum = "CH"
  let CIEnum = "CI"
  let CKEnum = "CK"
  let CLEnum = "CL"
  let CMEnum = "CM"
  let COEnum = "CO"
  let CREnum = "CR"
  let CUEnum = "CU"
  let CVEnum = "CV"
  let CWEnum = "CW"
  let CXEnum = "CX"
  let CYEnum = "CY"
  let CZEnum = "CZ"
  let DEEnum = "DE"
  let DJEnum = "DJ"
  let DKEnum = "DK"
  let DMEnum = "DM"
  let DOEnum = "DO"
  let DZEnum = "DZ"
  let ECEnum = "EC"
  let EEEnum = "EE"
  let EGEnum = "EG"
  let EHEnum = "EH"
  let EREnum = "ER"
  let ESEnum = "ES"
  let ETEnum = "ET"
  let FIEnum = "FI"
  let FJEnum = "FJ"
  let FKEnum = "FK"
  let FMEnum = "FM"
  let FOEnum = "FO"
  let FREnum = "FR"
  let GAEnum = "GA"
  let GBEnum = "GB"
  let GDEnum = "GD"
  let GEEnum = "GE"
  let GFEnum = "GF"
  let GGEnum = "GG"
  let GHEnum = "GH"
  let GIEnum = "GI"
  let GLEnum = "GL"
  let GMEnum = "GM"
  let GNEnum = "GN"
  let GPEnum = "GP"
  let GQEnum = "GQ"
  let GREnum = "GR"
  let GSEnum = "GS"
  let GTEnum = "GT"
  let GUEnum = "GU"
  let GWEnum = "GW"
  let GYEnum = "GY"
  let HKEnum = "HK"
  let HMEnum = "HM"
  let HNEnum = "HN"
  let HREnum = "HR"
  let HTEnum = "HT"
  let HUEnum = "HU"
  let IDEnum = "ID"
  let IEEnum = "IE"
  let ILEnum = "IL"
  let IMEnum = "IM"
  let INEnum = "IN"
  let IOEnum = "IO"
  let IQEnum = "IQ"
  let IREnum = "IR"
  let ISEnum = "IS"
  let ITEnum = "IT"
  let JEEnum = "JE"
  let JMEnum = "JM"
  let JOEnum = "JO"
  let JPEnum = "JP"
  let KEEnum = "KE"
  let KGEnum = "KG"
  let KHEnum = "KH"
  let KIEnum = "KI"
  let KMEnum = "KM"
  let KNEnum = "KN"
  let KREnum = "KR"
  let KWEnum = "KW"
  let KYEnum = "KY"
  let KZEnum = "KZ"
  let LAEnum = "LA"
  let LBEnum = "LB"
  let LCEnum = "LC"
  let LIEnum = "LI"
  let LKEnum = "LK"
  let LREnum = "LR"
  let LSEnum = "LS"
  let LTEnum = "LT"
  let LUEnum = "LU"
  let LVEnum = "LV"
  let LYEnum = "LY"
  let MAEnum = "MA"
  let MCEnum = "MC"
  let MDEnum = "MD"
  let MEEnum = "ME"
  let MFEnum = "MF"
  let MGEnum = "MG"
  let MHEnum = "MH"
  let MKEnum = "MK"
  let MLEnum = "ML"
  let MMEnum = "MM"
  let MNEnum = "MN"
  let MOEnum = "MO"
  let MPEnum = "MP"
  let MQEnum = "MQ"
  let MREnum = "MR"
  let MSEnum = "MS"
  let MTEnum = "MT"
  let MUEnum = "MU"
  let MVEnum = "MV"
  let MWEnum = "MW"
  let MXEnum = "MX"
  let MYEnum = "MY"
  let MZEnum = "MZ"
  let NAEnum = "NA"
  let NCEnum = "NC"
  let NEEnum = "NE"
  let NFEnum = "NF"
  let NGEnum = "NG"
  let NIEnum = "NI"
  let NLEnum = "NL"
  let NOEnum = "NO"
  let NPEnum = "NP"
  let NREnum = "NR"
  let NUEnum = "NU"
  let NZEnum = "NZ"
  let OMEnum = "OM"
  let PAEnum = "PA"
  let PEEnum = "PE"
  let PFEnum = "PF"
  let PGEnum = "PG"
  let PHEnum = "PH"
  let PKEnum = "PK"
  let PLEnum = "PL"
  let PMEnum = "PM"
  let PNEnum = "PN"
  let PREnum = "PR"
  let PSEnum = "PS"
  let PTEnum = "PT"
  let PWEnum = "PW"
  let PYEnum = "PY"
  let QAEnum = "QA"
  let REEnum = "RE"
  let ROEnum = "RO"
  let RSEnum = "RS"
  let RUEnum = "RU"
  let RWEnum = "RW"
  let SAEnum = "SA"
  let SBEnum = "SB"
  let SCEnum = "SC"
  let SDEnum = "SD"
  let SEEnum = "SE"
  let SGEnum = "SG"
  let SHEnum = "SH"
  let SIEnum = "SI"
  let SJEnum = "SJ"
  let SKEnum = "SK"
  let SLEnum = "SL"
  let SMEnum = "SM"
  let SNEnum = "SN"
  let SOEnum = "SO"
  let SREnum = "SR"
  let SSEnum = "SS"
  let STEnum = "ST"
  let SVEnum = "SV"
  let SXEnum = "SX"
  let SYEnum = "SY"
  let SZEnum = "SZ"
  let TCEnum = "TC"
  let TDEnum = "TD"
  let TFEnum = "TF"
  let TGEnum = "TG"
  let THEnum = "TH"
  let TJEnum = "TJ"
  let TKEnum = "TK"
  let TLEnum = "TL"
  let TMEnum = "TM"
  let TNEnum = "TN"
  let TOEnum = "TO"
  let TREnum = "TR"
  let TTEnum = "TT"
  let TVEnum = "TV"
  let TWEnum = "TW"
  let TZEnum = "TZ"
  let UAEnum = "UA"
  let UGEnum = "UG"
  let UMEnum = "UM"
  let USEnum = "US"
  let UYEnum = "UY"
  let UZEnum = "UZ"
  let VAEnum = "VA"
  let VCEnum = "VC"
  let VEEnum = "VE"
  let VGEnum = "VG"
  let VIEnum = "VI"
  let VNEnum = "VN"
  let VUEnum = "VU"
  let WFEnum = "WF"
  let WSEnum = "WS"
  let YEEnum = "YE"
  let YTEnum = "YT"
  let ZAEnum = "ZA"
  let ZMEnum = "ZM"
  let ZWEnum = "ZW"
  type Country = string

  //#endregion
