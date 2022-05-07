/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */


/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CatalogsFeedProcessingStatus {
    #[serde(rename = "COMPLETED")]
    COMPLETED,
    #[serde(rename = "COMPLETED_EARLY")]
    COMPLETEDEARLY,
    #[serde(rename = "DISAPPROVED")]
    DISAPPROVED,
    #[serde(rename = "FAILED")]
    FAILED,
    #[serde(rename = "PROCESSING")]
    PROCESSING,
    #[serde(rename = "QUEUED_FOR_PROCESSING")]
    QUEUEDFORPROCESSING,
    #[serde(rename = "UNDER_APPEAL")]
    UNDERAPPEAL,
    #[serde(rename = "UNDER_REVIEW")]
    UNDERREVIEW,

}

impl ToString for CatalogsFeedProcessingStatus {
    fn to_string(&self) -> String {
        match self {
            Self::COMPLETED => String::from("COMPLETED"),
            Self::COMPLETEDEARLY => String::from("COMPLETED_EARLY"),
            Self::DISAPPROVED => String::from("DISAPPROVED"),
            Self::FAILED => String::from("FAILED"),
            Self::PROCESSING => String::from("PROCESSING"),
            Self::QUEUEDFORPROCESSING => String::from("QUEUED_FOR_PROCESSING"),
            Self::UNDERAPPEAL => String::from("UNDER_APPEAL"),
            Self::UNDERREVIEW => String::from("UNDER_REVIEW"),
        }
    }
}

impl Default for CatalogsFeedProcessingStatus {
    fn default() -> CatalogsFeedProcessingStatus {
        Self::COMPLETED
    }
}




