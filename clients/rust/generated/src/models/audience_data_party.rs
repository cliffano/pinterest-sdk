/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

use crate::models;

/// AudienceDataParty : Whether the data is owned by the partner (1p) or by the data provider (3p)
/// Whether the data is owned by the partner (1p) or by the data provider (3p)
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AudienceDataParty {
    #[serde(rename = "1p")]
    Variant1p,
    #[serde(rename = "3p")]
    Variant3p,

}

impl ToString for AudienceDataParty {
    fn to_string(&self) -> String {
        match self {
            Self::Variant1p => String::from("1p"),
            Self::Variant3p => String::from("3p"),
        }
    }
}

impl Default for AudienceDataParty {
    fn default() -> AudienceDataParty {
        Self::Variant1p
    }
}

