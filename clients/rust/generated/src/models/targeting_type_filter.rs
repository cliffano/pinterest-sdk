/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct TargetingTypeFilter {
    /// List of targeting types
    #[serde(rename = "targeting_types", skip_serializing_if = "Option::is_none")]
    pub targeting_types: Option<Vec<crate::models::AdsAnalyticsTargetingType>>,
}

impl TargetingTypeFilter {
    pub fn new() -> TargetingTypeFilter {
        TargetingTypeFilter {
            targeting_types: None,
        }
    }
}


