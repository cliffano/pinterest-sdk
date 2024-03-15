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
pub enum AudienceInsightType {
    #[serde(rename = "YOUR_TOTAL_AUDIENCE")]
    YourTotalAudience,
    #[serde(rename = "YOUR_ENGAGED_AUDIENCE")]
    YourEngagedAudience,
    #[serde(rename = "PINTEREST_TOTAL_AUDIENCE")]
    PinterestTotalAudience,

}

impl ToString for AudienceInsightType {
    fn to_string(&self) -> String {
        match self {
            Self::YourTotalAudience => String::from("YOUR_TOTAL_AUDIENCE"),
            Self::YourEngagedAudience => String::from("YOUR_ENGAGED_AUDIENCE"),
            Self::PinterestTotalAudience => String::from("PINTEREST_TOTAL_AUDIENCE"),
        }
    }
}

impl Default for AudienceInsightType {
    fn default() -> AudienceInsightType {
        Self::YourTotalAudience
    }
}

