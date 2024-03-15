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
pub struct CampaignCreateCommon {
    /// Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
    #[serde(rename = "ad_account_id", skip_serializing_if = "Option::is_none")]
    pub ad_account_id: Option<String>,
    /// Campaign name.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<models::EntityStatus>,
    /// Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
    #[serde(rename = "lifetime_spend_cap", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub lifetime_spend_cap: Option<Option<i32>>,
    /// Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
    #[serde(rename = "daily_spend_cap", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub daily_spend_cap: Option<Option<i32>>,
    /// Order line ID that appears on the invoice.
    #[serde(rename = "order_line_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub order_line_id: Option<Option<String>>,
    #[serde(rename = "tracking_urls", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub tracking_urls: Option<Option<Box<models::AdCommonTrackingUrls>>>,
    /// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    #[serde(rename = "start_time", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub start_time: Option<Option<i32>>,
    /// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    #[serde(rename = "end_time", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub end_time: Option<Option<i32>>,
    #[serde(rename = "summary_status", skip_serializing_if = "Option::is_none")]
    pub summary_status: Option<models::CampaignSummaryStatus>,
    /// Determine if a campaign has flexible daily budgets setup.
    #[serde(rename = "is_flexible_daily_budgets", skip_serializing_if = "Option::is_none")]
    pub is_flexible_daily_budgets: Option<bool>,
    /// When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
    #[serde(rename = "default_ad_group_budget_in_micro_currency", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub default_ad_group_budget_in_micro_currency: Option<Option<i32>>,
    /// Specifies whether the campaign was created in the automated campaign flow
    #[serde(rename = "is_automated_campaign", skip_serializing_if = "Option::is_none")]
    pub is_automated_campaign: Option<bool>,
}

impl CampaignCreateCommon {
    pub fn new() -> CampaignCreateCommon {
        CampaignCreateCommon {
            ad_account_id: None,
            name: None,
            status: None,
            lifetime_spend_cap: None,
            daily_spend_cap: None,
            order_line_id: None,
            tracking_urls: None,
            start_time: None,
            end_time: None,
            summary_status: None,
            is_flexible_daily_budgets: None,
            default_ad_group_budget_in_micro_currency: None,
            is_automated_campaign: None,
        }
    }
}

