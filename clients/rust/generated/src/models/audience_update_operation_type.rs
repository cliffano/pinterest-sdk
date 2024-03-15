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

/// AudienceUpdateOperationType : Audience operation type (update or remove).
/// Audience operation type (update or remove).
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AudienceUpdateOperationType {
    #[serde(rename = "UPDATE")]
    Update,
    #[serde(rename = "REMOVE")]
    Remove,

}

impl ToString for AudienceUpdateOperationType {
    fn to_string(&self) -> String {
        match self {
            Self::Update => String::from("UPDATE"),
            Self::Remove => String::from("REMOVE"),
        }
    }
}

impl Default for AudienceUpdateOperationType {
    fn default() -> AudienceUpdateOperationType {
        Self::Update
    }
}
