/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// AdsAnalyticsFilterColumn : Reporting columns for sync reporting data filter

/// Reporting columns for sync reporting data filter
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AdsAnalyticsFilterColumn {
    #[serde(rename = "SPEND_IN_DOLLAR")]
    SPENDINDOLLAR,
    #[serde(rename = "TOTAL_IMPRESSION")]
    TOTALIMPRESSION,

}

impl ToString for AdsAnalyticsFilterColumn {
    fn to_string(&self) -> String {
        match self {
            Self::SPENDINDOLLAR => String::from("SPEND_IN_DOLLAR"),
            Self::TOTALIMPRESSION => String::from("TOTAL_IMPRESSION"),
        }
    }
}

impl Default for AdsAnalyticsFilterColumn {
    fn default() -> AdsAnalyticsFilterColumn {
        Self::SPENDINDOLLAR
    }
}




