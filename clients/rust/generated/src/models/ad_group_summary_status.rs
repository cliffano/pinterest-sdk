/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// AdGroupSummaryStatus : Summary status for ad group

/// Summary status for ad group
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AdGroupSummaryStatus {
    #[serde(rename = "RUNNING")]
    RUNNING,
    #[serde(rename = "PAUSED")]
    PAUSED,
    #[serde(rename = "NOT_STARTED")]
    NOTSTARTED,
    #[serde(rename = "COMPLETED")]
    COMPLETED,
    #[serde(rename = "ADVERTISER_DISABLED")]
    ADVERTISERDISABLED,
    #[serde(rename = "ARCHIVED")]
    ARCHIVED,

}

impl ToString for AdGroupSummaryStatus {
    fn to_string(&self) -> String {
        match self {
            Self::RUNNING => String::from("RUNNING"),
            Self::PAUSED => String::from("PAUSED"),
            Self::NOTSTARTED => String::from("NOT_STARTED"),
            Self::COMPLETED => String::from("COMPLETED"),
            Self::ADVERTISERDISABLED => String::from("ADVERTISER_DISABLED"),
            Self::ARCHIVED => String::from("ARCHIVED"),
        }
    }
}

impl Default for AdGroupSummaryStatus {
    fn default() -> AdGroupSummaryStatus {
        Self::RUNNING
    }
}




