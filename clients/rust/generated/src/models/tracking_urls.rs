/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

/// TrackingUrls : Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct TrackingUrls {
    #[serde(rename = "impression", skip_serializing_if = "Option::is_none")]
    pub impression: Option<Vec<String>>,
    #[serde(rename = "click", skip_serializing_if = "Option::is_none")]
    pub click: Option<Vec<String>>,
    #[serde(rename = "engagement", skip_serializing_if = "Option::is_none")]
    pub engagement: Option<Vec<String>>,
    #[serde(rename = "buyable_button", skip_serializing_if = "Option::is_none")]
    pub buyable_button: Option<Vec<String>>,
    #[serde(rename = "audience_verification", skip_serializing_if = "Option::is_none")]
    pub audience_verification: Option<Vec<String>>,
}

impl TrackingUrls {
    /// Third-party tracking URLs. Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
    pub fn new() -> TrackingUrls {
        TrackingUrls {
            impression: None,
            click: None,
            engagement: None,
            buyable_button: None,
            audience_verification: None,
        }
    }
}

