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

/// AudienceSharingType : Audience sharing type: [\"CUSTOM\", \"SYNDICATED\"]
/// Audience sharing type: [\"CUSTOM\", \"SYNDICATED\"]
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AudienceSharingType {
    #[serde(rename = "CUSTOM")]
    Custom,
    #[serde(rename = "SYNDICATED")]
    Syndicated,

}

impl ToString for AudienceSharingType {
    fn to_string(&self) -> String {
        match self {
            Self::Custom => String::from("CUSTOM"),
            Self::Syndicated => String::from("SYNDICATED"),
        }
    }
}

impl Default for AudienceSharingType {
    fn default() -> AudienceSharingType {
        Self::Custom
    }
}

