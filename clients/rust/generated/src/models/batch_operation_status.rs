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

/// BatchOperationStatus : The status of the operation performed by the batch
/// The status of the operation performed by the batch
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum BatchOperationStatus {
    #[serde(rename = "PROCESSING")]
    Processing,
    #[serde(rename = "COMPLETED")]
    Completed,

}

impl ToString for BatchOperationStatus {
    fn to_string(&self) -> String {
        match self {
            Self::Processing => String::from("PROCESSING"),
            Self::Completed => String::from("COMPLETED"),
        }
    }
}

impl Default for BatchOperationStatus {
    fn default() -> BatchOperationStatus {
        Self::Processing
    }
}
