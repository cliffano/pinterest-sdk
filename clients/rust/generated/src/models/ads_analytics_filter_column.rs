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

/// AdsAnalyticsFilterColumn : Reporting columns for sync reporting data filter
/// Reporting columns for sync reporting data filter
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AdsAnalyticsFilterColumn {
    #[serde(rename = "SPEND_IN_DOLLAR")]
    SpendInDollar,
    #[serde(rename = "TOTAL_IMPRESSION")]
    TotalImpression,

}

impl ToString for AdsAnalyticsFilterColumn {
    fn to_string(&self) -> String {
        match self {
            Self::SpendInDollar => String::from("SPEND_IN_DOLLAR"),
            Self::TotalImpression => String::from("TOTAL_IMPRESSION"),
        }
    }
}

impl Default for AdsAnalyticsFilterColumn {
    fn default() -> AdsAnalyticsFilterColumn {
        Self::SpendInDollar
    }
}

