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

#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct TargetingTypeFilter {
    /// List of targeting types. Requires `level` to be a value ending in `_TARGETING`.
    #[serde(rename = "targeting_types", skip_serializing_if = "Option::is_none")]
    pub targeting_types: Option<Vec<models::AdsAnalyticsTargetingType>>,
}

impl TargetingTypeFilter {
    pub fn new() -> TargetingTypeFilter {
        TargetingTypeFilter {
            targeting_types: None,
        }
    }
}

