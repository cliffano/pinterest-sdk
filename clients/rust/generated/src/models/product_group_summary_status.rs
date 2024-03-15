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

/// ProductGroupSummaryStatus : Summary status for product group
/// Summary status for product group
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ProductGroupSummaryStatus {
    #[serde(rename = "RUNNING")]
    Running,
    #[serde(rename = "PAUSED")]
    Paused,
    #[serde(rename = "EXCLUDED")]
    Excluded,
    #[serde(rename = "ARCHIVED")]
    Archived,

}

impl ToString for ProductGroupSummaryStatus {
    fn to_string(&self) -> String {
        match self {
            Self::Running => String::from("RUNNING"),
            Self::Paused => String::from("PAUSED"),
            Self::Excluded => String::from("EXCLUDED"),
            Self::Archived => String::from("ARCHIVED"),
        }
    }
}

impl Default for ProductGroupSummaryStatus {
    fn default() -> ProductGroupSummaryStatus {
        Self::Running
    }
}

