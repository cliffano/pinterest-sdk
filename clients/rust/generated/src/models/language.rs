/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// Language : Language code, which is among the offical ISO 639-1 language list.

/// Language code, which is among the offical ISO 639-1 language list.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Language {
    #[serde(rename = "AM")]
    AM,
    #[serde(rename = "AR")]
    AR,
    #[serde(rename = "AZ")]
    AZ,
    #[serde(rename = "BG")]
    BG,
    #[serde(rename = "BN")]
    BN,
    #[serde(rename = "BS")]
    BS,
    #[serde(rename = "CA")]
    CA,
    #[serde(rename = "CS")]
    CS,
    #[serde(rename = "DA")]
    DA,
    #[serde(rename = "DV")]
    DV,
    #[serde(rename = "DZ")]
    DZ,
    #[serde(rename = "DE")]
    DE,
    #[serde(rename = "EL")]
    EL,
    #[serde(rename = "EN")]
    EN,
    #[serde(rename = "ES")]
    ES,
    #[serde(rename = "ET")]
    ET,
    #[serde(rename = "FA")]
    FA,
    #[serde(rename = "FI")]
    FI,
    #[serde(rename = "FR")]
    FR,
    #[serde(rename = "HE")]
    HE,
    #[serde(rename = "HI")]
    HI,
    #[serde(rename = "HR")]
    HR,
    #[serde(rename = "HU")]
    HU,
    #[serde(rename = "HY")]
    HY,
    #[serde(rename = "ID")]
    ID,
    #[serde(rename = "IN")]
    _IN,
    #[serde(rename = "IS")]
    IS,
    #[serde(rename = "IT")]
    IT,
    #[serde(rename = "IW")]
    IW,
    #[serde(rename = "JA")]
    JA,
    #[serde(rename = "KA")]
    KA,
    #[serde(rename = "KM")]
    KM,
    #[serde(rename = "KO")]
    KO,
    #[serde(rename = "LO")]
    LO,
    #[serde(rename = "LT")]
    LT,
    #[serde(rename = "LV")]
    LV,
    #[serde(rename = "MK")]
    MK,
    #[serde(rename = "MN")]
    MN,
    #[serde(rename = "MS")]
    MS,
    #[serde(rename = "MY")]
    MY,
    #[serde(rename = "NB")]
    NB,
    #[serde(rename = "NE")]
    NE,
    #[serde(rename = "NL")]
    NL,
    #[serde(rename = "NO")]
    NO,
    #[serde(rename = "PL")]
    PL,
    #[serde(rename = "PT")]
    PT,
    #[serde(rename = "RO")]
    RO,
    #[serde(rename = "RU")]
    RU,
    #[serde(rename = "SK")]
    SK,
    #[serde(rename = "SL")]
    SL,
    #[serde(rename = "SQ")]
    SQ,
    #[serde(rename = "SR")]
    SR,
    #[serde(rename = "SV")]
    SV,
    #[serde(rename = "TL")]
    TL,
    #[serde(rename = "UK")]
    UK,
    #[serde(rename = "VI")]
    VI,
    #[serde(rename = "TE")]
    TE,
    #[serde(rename = "TH")]
    TH,
    #[serde(rename = "TR")]
    TR,
    #[serde(rename = "XX")]
    XX,
    #[serde(rename = "ZH")]
    ZH,

}

impl ToString for Language {
    fn to_string(&self) -> String {
        match self {
            Self::AM => String::from("AM"),
            Self::AR => String::from("AR"),
            Self::AZ => String::from("AZ"),
            Self::BG => String::from("BG"),
            Self::BN => String::from("BN"),
            Self::BS => String::from("BS"),
            Self::CA => String::from("CA"),
            Self::CS => String::from("CS"),
            Self::DA => String::from("DA"),
            Self::DV => String::from("DV"),
            Self::DZ => String::from("DZ"),
            Self::DE => String::from("DE"),
            Self::EL => String::from("EL"),
            Self::EN => String::from("EN"),
            Self::ES => String::from("ES"),
            Self::ET => String::from("ET"),
            Self::FA => String::from("FA"),
            Self::FI => String::from("FI"),
            Self::FR => String::from("FR"),
            Self::HE => String::from("HE"),
            Self::HI => String::from("HI"),
            Self::HR => String::from("HR"),
            Self::HU => String::from("HU"),
            Self::HY => String::from("HY"),
            Self::ID => String::from("ID"),
            Self::_IN => String::from("IN"),
            Self::IS => String::from("IS"),
            Self::IT => String::from("IT"),
            Self::IW => String::from("IW"),
            Self::JA => String::from("JA"),
            Self::KA => String::from("KA"),
            Self::KM => String::from("KM"),
            Self::KO => String::from("KO"),
            Self::LO => String::from("LO"),
            Self::LT => String::from("LT"),
            Self::LV => String::from("LV"),
            Self::MK => String::from("MK"),
            Self::MN => String::from("MN"),
            Self::MS => String::from("MS"),
            Self::MY => String::from("MY"),
            Self::NB => String::from("NB"),
            Self::NE => String::from("NE"),
            Self::NL => String::from("NL"),
            Self::NO => String::from("NO"),
            Self::PL => String::from("PL"),
            Self::PT => String::from("PT"),
            Self::RO => String::from("RO"),
            Self::RU => String::from("RU"),
            Self::SK => String::from("SK"),
            Self::SL => String::from("SL"),
            Self::SQ => String::from("SQ"),
            Self::SR => String::from("SR"),
            Self::SV => String::from("SV"),
            Self::TL => String::from("TL"),
            Self::UK => String::from("UK"),
            Self::VI => String::from("VI"),
            Self::TE => String::from("TE"),
            Self::TH => String::from("TH"),
            Self::TR => String::from("TR"),
            Self::XX => String::from("XX"),
            Self::ZH => String::from("ZH"),
        }
    }
}

impl Default for Language {
    fn default() -> Language {
        Self::AM
    }
}




