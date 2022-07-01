/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// ActionType : Ad group billable event type.

/// Ad group billable event type.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ActionType {
    #[serde(rename = "CLICKTHROUGH")]
    CLICKTHROUGH,
    #[serde(rename = "IMPRESSION")]
    IMPRESSION,
    #[serde(rename = "VIDEO_V_50_MRC")]
    VIDEOV50MRC,
    #[serde(rename = "BILLABLE_ENGAGEMENT")]
    BILLABLEENGAGEMENT,

}

impl ToString for ActionType {
    fn to_string(&self) -> String {
        match self {
            Self::CLICKTHROUGH => String::from("CLICKTHROUGH"),
            Self::IMPRESSION => String::from("IMPRESSION"),
            Self::VIDEOV50MRC => String::from("VIDEO_V_50_MRC"),
            Self::BILLABLEENGAGEMENT => String::from("BILLABLE_ENGAGEMENT"),
        }
    }
}

impl Default for ActionType {
    fn default() -> ActionType {
        Self::CLICKTHROUGH
    }
}




