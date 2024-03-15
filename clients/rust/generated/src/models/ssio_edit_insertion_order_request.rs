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
pub struct SsioEditInsertionOrderRequest {
    /// Starting date of time period. Format: YYYY-MM-DD
    #[serde(rename = "start_date", skip_serializing_if = "Option::is_none")]
    pub start_date: Option<String>,
    /// End date of time period. Format: YYYY-MM-DD
    #[serde(rename = "end_date", skip_serializing_if = "Option::is_none")]
    pub end_date: Option<String>,
    /// The po number
    #[serde(rename = "po_number", skip_serializing_if = "Option::is_none")]
    pub po_number: Option<String>,
    /// If Budget order line, the budget amount.
    #[serde(rename = "budget_amount", skip_serializing_if = "Option::is_none")]
    pub budget_amount: Option<f64>,
    /// The billing contact first name
    #[serde(rename = "billing_contact_firstname", skip_serializing_if = "Option::is_none")]
    pub billing_contact_firstname: Option<String>,
    /// The billing contact last name
    #[serde(rename = "billing_contact_lastname", skip_serializing_if = "Option::is_none")]
    pub billing_contact_lastname: Option<String>,
    /// The billing contact email
    #[serde(rename = "billing_contact_email", skip_serializing_if = "Option::is_none")]
    pub billing_contact_email: Option<String>,
    /// The media contact first name
    #[serde(rename = "media_contact_firstname", skip_serializing_if = "Option::is_none")]
    pub media_contact_firstname: Option<String>,
    /// The media contact last name
    #[serde(rename = "media_contact_lastname", skip_serializing_if = "Option::is_none")]
    pub media_contact_lastname: Option<String>,
    /// The media contact email
    #[serde(rename = "media_contact_email", skip_serializing_if = "Option::is_none")]
    pub media_contact_email: Option<String>,
    /// URL link for agency
    #[serde(rename = "agency_link", skip_serializing_if = "Option::is_none")]
    pub agency_link: Option<String>,
    /// The email of user submitting the insertion order
    #[serde(rename = "user_email", skip_serializing_if = "Option::is_none")]
    pub user_email: Option<String>,
    /// LineId in the Oracle DB
    #[serde(rename = "oracle_line_id", skip_serializing_if = "Option::is_none")]
    pub oracle_line_id: Option<String>,
    /// OrderId in SFDC
    #[serde(rename = "salesforce_order_id", skip_serializing_if = "Option::is_none")]
    pub salesforce_order_id: Option<String>,
    /// OrderLineId in SFDC
    #[serde(rename = "salesforce_order_line_id", skip_serializing_if = "Option::is_none")]
    pub salesforce_order_line_id: Option<String>,
    /// Ads manager OrderLineId
    #[serde(rename = "ads_manager_order_line_id", skip_serializing_if = "Option::is_none")]
    pub ads_manager_order_line_id: Option<String>,
}

impl SsioEditInsertionOrderRequest {
    pub fn new() -> SsioEditInsertionOrderRequest {
        SsioEditInsertionOrderRequest {
            start_date: None,
            end_date: None,
            po_number: None,
            budget_amount: None,
            billing_contact_firstname: None,
            billing_contact_lastname: None,
            billing_contact_email: None,
            media_contact_firstname: None,
            media_contact_lastname: None,
            media_contact_email: None,
            agency_link: None,
            user_email: None,
            oracle_line_id: None,
            salesforce_order_id: None,
            salesforce_order_line_id: None,
            ads_manager_order_line_id: None,
        }
    }
}

