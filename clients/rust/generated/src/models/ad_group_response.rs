/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct AdGroupResponse {
    /// Ad group name.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    /// Ad group/entity status.
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<Box<crate::models::EntityStatus>>,
    /// Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
    #[serde(rename = "budget_in_micro_currency", skip_serializing_if = "Option::is_none")]
    pub budget_in_micro_currency: Option<i32>,
    /// Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
    #[serde(rename = "bid_in_micro_currency", skip_serializing_if = "Option::is_none")]
    pub bid_in_micro_currency: Option<i32>,
    /// Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
    #[serde(rename = "budget_type", skip_serializing_if = "Option::is_none")]
    pub budget_type: Option<BudgetType>,
    /// Ad group start time. Unix timestamp in seconds. Defaults to current time.
    #[serde(rename = "start_time", skip_serializing_if = "Option::is_none")]
    pub start_time: Option<i32>,
    /// Ad group end time. Unix timestamp in seconds.
    #[serde(rename = "end_time", skip_serializing_if = "Option::is_none")]
    pub end_time: Option<i32>,
    /// Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}'
    #[serde(rename = "targeting_spec", skip_serializing_if = "Option::is_none")]
    pub targeting_spec: Option<::std::collections::HashMap<String, Vec<String>>>,
    /// Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
    #[serde(rename = "lifetime_frequency_cap", skip_serializing_if = "Option::is_none")]
    pub lifetime_frequency_cap: Option<i32>,
    /// Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
    #[serde(rename = "tracking_urls", skip_serializing_if = "Option::is_none")]
    pub tracking_urls: Option<Box<crate::models::TrackingUrls>>,
    /// Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
    #[serde(rename = "auto_targeting_enabled", skip_serializing_if = "Option::is_none")]
    pub auto_targeting_enabled: Option<bool>,
    /// <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>.
    #[serde(rename = "placement_group", skip_serializing_if = "Option::is_none")]
    pub placement_group: Option<Box<crate::models::PlacementGroupType>>,
    /// Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
    #[serde(rename = "pacing_delivery_type", skip_serializing_if = "Option::is_none")]
    pub pacing_delivery_type: Option<Box<crate::models::PacingDeliveryType>>,
    /// oCPM learn mode
    #[serde(rename = "conversion_learning_mode_type", skip_serializing_if = "Option::is_none")]
    pub conversion_learning_mode_type: Option<ConversionLearningModeType>,
    /// Ad group summary status.
    #[serde(rename = "summary_status", skip_serializing_if = "Option::is_none")]
    pub summary_status: Option<Box<crate::models::AdGroupSummaryStatus>>,
    /// Feed Profile ID associated to the adgroup.
    #[serde(rename = "feed_profile_id", skip_serializing_if = "Option::is_none")]
    pub feed_profile_id: Option<String>,
    /// Campaign ID of the ad group.
    #[serde(rename = "campaign_id", skip_serializing_if = "Option::is_none")]
    pub campaign_id: Option<String>,
    #[serde(rename = "billable_event", skip_serializing_if = "Option::is_none")]
    pub billable_event: Option<crate::models::ActionType>,
    /// Ad group ID.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    /// Always \"adgroup\".
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub _type: Option<String>,
    /// Advertiser ID.
    #[serde(rename = "ad_account_id", skip_serializing_if = "Option::is_none")]
    pub ad_account_id: Option<String>,
    /// Ad group creation time. Unix timestamp in seconds.
    #[serde(rename = "created_time", skip_serializing_if = "Option::is_none")]
    pub created_time: Option<i32>,
    /// Ad group last update time. Unix timestamp in seconds.
    #[serde(rename = "updated_time", skip_serializing_if = "Option::is_none")]
    pub updated_time: Option<i32>,
}

impl AdGroupResponse {
    pub fn new() -> AdGroupResponse {
        AdGroupResponse {
            name: None,
            status: None,
            budget_in_micro_currency: None,
            bid_in_micro_currency: None,
            budget_type: None,
            start_time: None,
            end_time: None,
            targeting_spec: None,
            lifetime_frequency_cap: None,
            tracking_urls: None: None,
            auto_targeting_enabled: None,
            placement_group: None,
            pacing_delivery_type: None,
            conversion_learning_mode_type: None,
            summary_status: None,
            feed_profile_id: None,
            campaign_id: None,
            billable_event: None,
            id: None,
            _type: None,
            ad_account_id: None,
            created_time: None,
            updated_time: None,
        }
    }
}

/// Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum BudgetType {
    #[serde(rename = "DAILY")]
    DAILY,
    #[serde(rename = "LIFETIME")]
    LIFETIME,
    #[serde(rename = "CBO_ADGROUP")]
    CBOADGROUP,
}

impl Default for BudgetType {
    fn default() -> BudgetType {
        Self::DAILY
    }
}
/// oCPM learn mode
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ConversionLearningModeType {
    #[serde(rename = "NOT_ACTIVE")]
    NOTACTIVE,
    #[serde(rename = "ACTIVE")]
    ACTIVE,
    #[serde(rename = "null")]
    Null,
}

impl Default for ConversionLearningModeType {
    fn default() -> ConversionLearningModeType {
        Self::NOTACTIVE
    }
}

