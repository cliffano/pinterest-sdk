/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// ItemProcessingStatus : The status of the item processing record

/// The status of the item processing record
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ItemProcessingStatus {
    #[serde(rename = "SUCCESS")]
    SUCCESS,
    #[serde(rename = "FAILURE")]
    FAILURE,
    #[serde(rename = "PROCESSING")]
    PROCESSING,

}

impl ToString for ItemProcessingStatus {
    fn to_string(&self) -> String {
        match self {
            Self::SUCCESS => String::from("SUCCESS"),
            Self::FAILURE => String::from("FAILURE"),
            Self::PROCESSING => String::from("PROCESSING"),
        }
    }
}

impl Default for ItemProcessingStatus {
    fn default() -> ItemProcessingStatus {
        Self::SUCCESS
    }
}




