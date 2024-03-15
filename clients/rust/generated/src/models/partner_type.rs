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

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum PartnerType {
    #[serde(rename = "INTERNAL")]
    Internal,
    #[serde(rename = "EXTERNAL")]
    External,

}

impl ToString for PartnerType {
    fn to_string(&self) -> String {
        match self {
            Self::Internal => String::from("INTERNAL"),
            Self::External => String::from("EXTERNAL"),
        }
    }
}

impl Default for PartnerType {
    fn default() -> PartnerType {
        Self::Internal
    }
}

