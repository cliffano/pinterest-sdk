/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// BatchOperationStatus : The status of the operation performed by the batch

/// The status of the operation performed by the batch
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum BatchOperationStatus {
    #[serde(rename = "PROCESSING")]
    PROCESSING,
    #[serde(rename = "COMPLETED")]
    COMPLETED,

}

impl ToString for BatchOperationStatus {
    fn to_string(&self) -> String {
        match self {
            Self::PROCESSING => String::from("PROCESSING"),
            Self::COMPLETED => String::from("COMPLETED"),
        }
    }
}

impl Default for BatchOperationStatus {
    fn default() -> BatchOperationStatus {
        Self::PROCESSING
    }
}




