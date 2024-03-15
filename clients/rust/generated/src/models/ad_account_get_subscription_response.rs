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
pub struct AdAccountGetSubscriptionResponse {
    /// Lead form ID.
    #[serde(rename = "lead_form_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub lead_form_id: Option<Option<String>>,
    /// Standard HTTPS webhook URL.
    #[serde(rename = "webhook_url", skip_serializing_if = "Option::is_none")]
    pub webhook_url: Option<String>,
    /// Subscription ID.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    /// User account used to subscribe lead data.
    #[serde(rename = "user_account_id", skip_serializing_if = "Option::is_none")]
    pub user_account_id: Option<String>,
    /// The Ad Account ID that this lead form belongs to.
    #[serde(rename = "ad_account_id", skip_serializing_if = "Option::is_none")]
    pub ad_account_id: Option<String>,
    /// API version.
    #[serde(rename = "api_version", skip_serializing_if = "Option::is_none")]
    pub api_version: Option<String>,
    /// Base64 encoded key for client to decrypt lead data.
    #[serde(rename = "cryptographic_key", skip_serializing_if = "Option::is_none")]
    pub cryptographic_key: Option<String>,
    /// Lead data encryption algorithm.
    #[serde(rename = "cryptographic_algorithm", skip_serializing_if = "Option::is_none")]
    pub cryptographic_algorithm: Option<String>,
    /// Lead form creation time. Unix timestamp in milliseconds.
    #[serde(rename = "created_time", skip_serializing_if = "Option::is_none")]
    pub created_time: Option<i32>,
}

impl AdAccountGetSubscriptionResponse {
    pub fn new() -> AdAccountGetSubscriptionResponse {
        AdAccountGetSubscriptionResponse {
            lead_form_id: None,
            webhook_url: None,
            id: None,
            user_account_id: None,
            ad_account_id: None,
            api_version: None,
            cryptographic_key: None,
            cryptographic_algorithm: None,
            created_time: None,
        }
    }
}

