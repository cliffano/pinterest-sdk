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

/// ItemProcessingStatus : The status of the item processing record
/// The status of the item processing record
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ItemProcessingStatus {
    #[serde(rename = "SUCCESS")]
    Success,
    #[serde(rename = "FAILURE")]
    Failure,
    #[serde(rename = "PROCESSING")]
    Processing,

}

impl ToString for ItemProcessingStatus {
    fn to_string(&self) -> String {
        match self {
            Self::Success => String::from("SUCCESS"),
            Self::Failure => String::from("FAILURE"),
            Self::Processing => String::from("PROCESSING"),
        }
    }
}

impl Default for ItemProcessingStatus {
    fn default() -> ItemProcessingStatus {
        Self::Success
    }
}
