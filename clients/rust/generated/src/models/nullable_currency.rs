/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

/// NullableCurrency : Currency Codes from ISO 4217.

/// Currency Codes from ISO 4217.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum NullableCurrency {
    #[serde(rename = "AED")]
    AED,
    #[serde(rename = "AFN")]
    AFN,
    #[serde(rename = "ALL")]
    ALL,
    #[serde(rename = "AMD")]
    AMD,
    #[serde(rename = "ANG")]
    ANG,
    #[serde(rename = "AOA")]
    AOA,
    #[serde(rename = "ARS")]
    ARS,
    #[serde(rename = "AUD")]
    AUD,
    #[serde(rename = "AWG")]
    AWG,
    #[serde(rename = "AZN")]
    AZN,
    #[serde(rename = "BAM")]
    BAM,
    #[serde(rename = "BBD")]
    BBD,
    #[serde(rename = "BDT")]
    BDT,
    #[serde(rename = "BGN")]
    BGN,
    #[serde(rename = "BHD")]
    BHD,
    #[serde(rename = "BIF")]
    BIF,
    #[serde(rename = "BMD")]
    BMD,
    #[serde(rename = "BND")]
    BND,
    #[serde(rename = "BOB")]
    BOB,
    #[serde(rename = "BRL")]
    BRL,
    #[serde(rename = "BSD")]
    BSD,
    #[serde(rename = "BTN")]
    BTN,
    #[serde(rename = "BWP")]
    BWP,
    #[serde(rename = "BYN")]
    BYN,
    #[serde(rename = "BYR")]
    BYR,
    #[serde(rename = "BZD")]
    BZD,
    #[serde(rename = "CAD")]
    CAD,
    #[serde(rename = "CDF")]
    CDF,
    #[serde(rename = "CHF")]
    CHF,
    #[serde(rename = "CLP")]
    CLP,
    #[serde(rename = "CNY")]
    CNY,
    #[serde(rename = "COP")]
    COP,
    #[serde(rename = "CRC")]
    CRC,
    #[serde(rename = "CUC")]
    CUC,
    #[serde(rename = "CUP")]
    CUP,
    #[serde(rename = "CVE")]
    CVE,
    #[serde(rename = "CZK")]
    CZK,
    #[serde(rename = "DJF")]
    DJF,
    #[serde(rename = "DKK")]
    DKK,
    #[serde(rename = "DOP")]
    DOP,
    #[serde(rename = "DZD")]
    DZD,
    #[serde(rename = "EGP")]
    EGP,
    #[serde(rename = "ERN")]
    ERN,
    #[serde(rename = "ETB")]
    ETB,
    #[serde(rename = "EUR")]
    EUR,
    #[serde(rename = "FJD")]
    FJD,
    #[serde(rename = "FKP")]
    FKP,
    #[serde(rename = "GBP")]
    GBP,
    #[serde(rename = "GEL")]
    GEL,
    #[serde(rename = "GGP")]
    GGP,
    #[serde(rename = "GHS")]
    GHS,
    #[serde(rename = "GIP")]
    GIP,
    #[serde(rename = "GMD")]
    GMD,
    #[serde(rename = "GNF")]
    GNF,
    #[serde(rename = "GTQ")]
    GTQ,
    #[serde(rename = "GYD")]
    GYD,
    #[serde(rename = "HKD")]
    HKD,
    #[serde(rename = "HNL")]
    HNL,
    #[serde(rename = "HRK")]
    HRK,
    #[serde(rename = "HTG")]
    HTG,
    #[serde(rename = "HUF")]
    HUF,
    #[serde(rename = "IDR")]
    IDR,
    #[serde(rename = "ILS")]
    ILS,
    #[serde(rename = "IMP")]
    IMP,
    #[serde(rename = "INR")]
    INR,
    #[serde(rename = "IQD")]
    IQD,
    #[serde(rename = "IRR")]
    IRR,
    #[serde(rename = "ISK")]
    ISK,
    #[serde(rename = "JEP")]
    JEP,
    #[serde(rename = "JMD")]
    JMD,
    #[serde(rename = "JOD")]
    JOD,
    #[serde(rename = "JPY")]
    JPY,
    #[serde(rename = "KES")]
    KES,
    #[serde(rename = "KGS")]
    KGS,
    #[serde(rename = "KHR")]
    KHR,
    #[serde(rename = "KMF")]
    KMF,
    #[serde(rename = "KPW")]
    KPW,
    #[serde(rename = "KRW")]
    KRW,
    #[serde(rename = "KWD")]
    KWD,
    #[serde(rename = "KYD")]
    KYD,
    #[serde(rename = "KZT")]
    KZT,
    #[serde(rename = "LAK")]
    LAK,
    #[serde(rename = "LBP")]
    LBP,
    #[serde(rename = "LKR")]
    LKR,
    #[serde(rename = "LRD")]
    LRD,
    #[serde(rename = "LSL")]
    LSL,
    #[serde(rename = "LYD")]
    LYD,
    #[serde(rename = "MAD")]
    MAD,
    #[serde(rename = "MDL")]
    MDL,
    #[serde(rename = "MGA")]
    MGA,
    #[serde(rename = "MKD")]
    MKD,
    #[serde(rename = "MMK")]
    MMK,
    #[serde(rename = "MNT")]
    MNT,
    #[serde(rename = "MOP")]
    MOP,
    #[serde(rename = "MRO")]
    MRO,
    #[serde(rename = "MUR")]
    MUR,
    #[serde(rename = "MVR")]
    MVR,
    #[serde(rename = "MWK")]
    MWK,
    #[serde(rename = "MXN")]
    MXN,
    #[serde(rename = "MYR")]
    MYR,
    #[serde(rename = "MZN")]
    MZN,
    #[serde(rename = "NAD")]
    NAD,
    #[serde(rename = "NGN")]
    NGN,
    #[serde(rename = "NIO")]
    NIO,
    #[serde(rename = "NOK")]
    NOK,
    #[serde(rename = "NPR")]
    NPR,
    #[serde(rename = "NZD")]
    NZD,
    #[serde(rename = "OMR")]
    OMR,
    #[serde(rename = "PAB")]
    PAB,
    #[serde(rename = "PEN")]
    PEN,
    #[serde(rename = "PGK")]
    PGK,
    #[serde(rename = "PHP")]
    PHP,
    #[serde(rename = "PKR")]
    PKR,
    #[serde(rename = "PLN")]
    PLN,
    #[serde(rename = "PYG")]
    PYG,
    #[serde(rename = "QAR")]
    QAR,
    #[serde(rename = "RON")]
    RON,
    #[serde(rename = "RSD")]
    RSD,
    #[serde(rename = "RUB")]
    RUB,
    #[serde(rename = "RWF")]
    RWF,
    #[serde(rename = "SAR")]
    SAR,
    #[serde(rename = "SBD")]
    SBD,
    #[serde(rename = "SCR")]
    SCR,
    #[serde(rename = "SDG")]
    SDG,
    #[serde(rename = "SEK")]
    SEK,
    #[serde(rename = "SGD")]
    SGD,
    #[serde(rename = "SHP")]
    SHP,
    #[serde(rename = "SLL")]
    SLL,
    #[serde(rename = "SOS")]
    SOS,
    #[serde(rename = "SPL")]
    SPL,
    #[serde(rename = "SRD")]
    SRD,
    #[serde(rename = "STD")]
    STD,
    #[serde(rename = "SVC")]
    SVC,
    #[serde(rename = "SYP")]
    SYP,
    #[serde(rename = "SZL")]
    SZL,
    #[serde(rename = "THB")]
    THB,
    #[serde(rename = "TJS")]
    TJS,
    #[serde(rename = "TMT")]
    TMT,
    #[serde(rename = "TND")]
    TND,
    #[serde(rename = "TOP")]
    TOP,
    #[serde(rename = "TRY")]
    _TRY,
    #[serde(rename = "TTD")]
    TTD,
    #[serde(rename = "TVD")]
    TVD,
    #[serde(rename = "TWD")]
    TWD,
    #[serde(rename = "TZS")]
    TZS,
    #[serde(rename = "UAH")]
    UAH,
    #[serde(rename = "UGX")]
    UGX,
    #[serde(rename = "USD")]
    USD,
    #[serde(rename = "UYU")]
    UYU,
    #[serde(rename = "UZS")]
    UZS,
    #[serde(rename = "VEF")]
    VEF,
    #[serde(rename = "VND")]
    VND,
    #[serde(rename = "VUV")]
    VUV,
    #[serde(rename = "WST")]
    WST,
    #[serde(rename = "XAF")]
    XAF,
    #[serde(rename = "XCD")]
    XCD,
    #[serde(rename = "XDR")]
    XDR,
    #[serde(rename = "XOF")]
    XOF,
    #[serde(rename = "XPF")]
    XPF,
    #[serde(rename = "YER")]
    YER,
    #[serde(rename = "ZAR")]
    ZAR,
    #[serde(rename = "ZMW")]
    ZMW,
    #[serde(rename = "ZWD")]
    ZWD,
    #[serde(rename = "null")]
    Null,

}

impl ToString for NullableCurrency {
    fn to_string(&self) -> String {
        match self {
            Self::AED => String::from("AED"),
            Self::AFN => String::from("AFN"),
            Self::ALL => String::from("ALL"),
            Self::AMD => String::from("AMD"),
            Self::ANG => String::from("ANG"),
            Self::AOA => String::from("AOA"),
            Self::ARS => String::from("ARS"),
            Self::AUD => String::from("AUD"),
            Self::AWG => String::from("AWG"),
            Self::AZN => String::from("AZN"),
            Self::BAM => String::from("BAM"),
            Self::BBD => String::from("BBD"),
            Self::BDT => String::from("BDT"),
            Self::BGN => String::from("BGN"),
            Self::BHD => String::from("BHD"),
            Self::BIF => String::from("BIF"),
            Self::BMD => String::from("BMD"),
            Self::BND => String::from("BND"),
            Self::BOB => String::from("BOB"),
            Self::BRL => String::from("BRL"),
            Self::BSD => String::from("BSD"),
            Self::BTN => String::from("BTN"),
            Self::BWP => String::from("BWP"),
            Self::BYN => String::from("BYN"),
            Self::BYR => String::from("BYR"),
            Self::BZD => String::from("BZD"),
            Self::CAD => String::from("CAD"),
            Self::CDF => String::from("CDF"),
            Self::CHF => String::from("CHF"),
            Self::CLP => String::from("CLP"),
            Self::CNY => String::from("CNY"),
            Self::COP => String::from("COP"),
            Self::CRC => String::from("CRC"),
            Self::CUC => String::from("CUC"),
            Self::CUP => String::from("CUP"),
            Self::CVE => String::from("CVE"),
            Self::CZK => String::from("CZK"),
            Self::DJF => String::from("DJF"),
            Self::DKK => String::from("DKK"),
            Self::DOP => String::from("DOP"),
            Self::DZD => String::from("DZD"),
            Self::EGP => String::from("EGP"),
            Self::ERN => String::from("ERN"),
            Self::ETB => String::from("ETB"),
            Self::EUR => String::from("EUR"),
            Self::FJD => String::from("FJD"),
            Self::FKP => String::from("FKP"),
            Self::GBP => String::from("GBP"),
            Self::GEL => String::from("GEL"),
            Self::GGP => String::from("GGP"),
            Self::GHS => String::from("GHS"),
            Self::GIP => String::from("GIP"),
            Self::GMD => String::from("GMD"),
            Self::GNF => String::from("GNF"),
            Self::GTQ => String::from("GTQ"),
            Self::GYD => String::from("GYD"),
            Self::HKD => String::from("HKD"),
            Self::HNL => String::from("HNL"),
            Self::HRK => String::from("HRK"),
            Self::HTG => String::from("HTG"),
            Self::HUF => String::from("HUF"),
            Self::IDR => String::from("IDR"),
            Self::ILS => String::from("ILS"),
            Self::IMP => String::from("IMP"),
            Self::INR => String::from("INR"),
            Self::IQD => String::from("IQD"),
            Self::IRR => String::from("IRR"),
            Self::ISK => String::from("ISK"),
            Self::JEP => String::from("JEP"),
            Self::JMD => String::from("JMD"),
            Self::JOD => String::from("JOD"),
            Self::JPY => String::from("JPY"),
            Self::KES => String::from("KES"),
            Self::KGS => String::from("KGS"),
            Self::KHR => String::from("KHR"),
            Self::KMF => String::from("KMF"),
            Self::KPW => String::from("KPW"),
            Self::KRW => String::from("KRW"),
            Self::KWD => String::from("KWD"),
            Self::KYD => String::from("KYD"),
            Self::KZT => String::from("KZT"),
            Self::LAK => String::from("LAK"),
            Self::LBP => String::from("LBP"),
            Self::LKR => String::from("LKR"),
            Self::LRD => String::from("LRD"),
            Self::LSL => String::from("LSL"),
            Self::LYD => String::from("LYD"),
            Self::MAD => String::from("MAD"),
            Self::MDL => String::from("MDL"),
            Self::MGA => String::from("MGA"),
            Self::MKD => String::from("MKD"),
            Self::MMK => String::from("MMK"),
            Self::MNT => String::from("MNT"),
            Self::MOP => String::from("MOP"),
            Self::MRO => String::from("MRO"),
            Self::MUR => String::from("MUR"),
            Self::MVR => String::from("MVR"),
            Self::MWK => String::from("MWK"),
            Self::MXN => String::from("MXN"),
            Self::MYR => String::from("MYR"),
            Self::MZN => String::from("MZN"),
            Self::NAD => String::from("NAD"),
            Self::NGN => String::from("NGN"),
            Self::NIO => String::from("NIO"),
            Self::NOK => String::from("NOK"),
            Self::NPR => String::from("NPR"),
            Self::NZD => String::from("NZD"),
            Self::OMR => String::from("OMR"),
            Self::PAB => String::from("PAB"),
            Self::PEN => String::from("PEN"),
            Self::PGK => String::from("PGK"),
            Self::PHP => String::from("PHP"),
            Self::PKR => String::from("PKR"),
            Self::PLN => String::from("PLN"),
            Self::PYG => String::from("PYG"),
            Self::QAR => String::from("QAR"),
            Self::RON => String::from("RON"),
            Self::RSD => String::from("RSD"),
            Self::RUB => String::from("RUB"),
            Self::RWF => String::from("RWF"),
            Self::SAR => String::from("SAR"),
            Self::SBD => String::from("SBD"),
            Self::SCR => String::from("SCR"),
            Self::SDG => String::from("SDG"),
            Self::SEK => String::from("SEK"),
            Self::SGD => String::from("SGD"),
            Self::SHP => String::from("SHP"),
            Self::SLL => String::from("SLL"),
            Self::SOS => String::from("SOS"),
            Self::SPL => String::from("SPL"),
            Self::SRD => String::from("SRD"),
            Self::STD => String::from("STD"),
            Self::SVC => String::from("SVC"),
            Self::SYP => String::from("SYP"),
            Self::SZL => String::from("SZL"),
            Self::THB => String::from("THB"),
            Self::TJS => String::from("TJS"),
            Self::TMT => String::from("TMT"),
            Self::TND => String::from("TND"),
            Self::TOP => String::from("TOP"),
            Self::_TRY => String::from("TRY"),
            Self::TTD => String::from("TTD"),
            Self::TVD => String::from("TVD"),
            Self::TWD => String::from("TWD"),
            Self::TZS => String::from("TZS"),
            Self::UAH => String::from("UAH"),
            Self::UGX => String::from("UGX"),
            Self::USD => String::from("USD"),
            Self::UYU => String::from("UYU"),
            Self::UZS => String::from("UZS"),
            Self::VEF => String::from("VEF"),
            Self::VND => String::from("VND"),
            Self::VUV => String::from("VUV"),
            Self::WST => String::from("WST"),
            Self::XAF => String::from("XAF"),
            Self::XCD => String::from("XCD"),
            Self::XDR => String::from("XDR"),
            Self::XOF => String::from("XOF"),
            Self::XPF => String::from("XPF"),
            Self::YER => String::from("YER"),
            Self::ZAR => String::from("ZAR"),
            Self::ZMW => String::from("ZMW"),
            Self::ZWD => String::from("ZWD"),
            Self::Null => String::from("null"),
        }
    }
}

impl Default for NullableCurrency {
    fn default() -> NullableCurrency {
        Self::AED
    }
}




