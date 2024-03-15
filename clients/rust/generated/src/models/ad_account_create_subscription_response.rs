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
pub struct AdAccountCreateSubscriptionResponse {
    /// Subscription ID.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    /// Base64 encoded key for client to decrypt lead data.
    #[serde(rename = "cryptographic_key", skip_serializing_if = "Option::is_none")]
    pub cryptographic_key: Option<String>,
    /// Lead data encryption algorithm.
    #[serde(rename = "cryptographic_algorithm", skip_serializing_if = "Option::is_none")]
    pub cryptographic_algorithm: Option<String>,
    /// Subscription creation time. Unix timestamp in milliseconds.
    #[serde(rename = "created_time", skip_serializing_if = "Option::is_none")]
    pub created_time: Option<i32>,
}

impl AdAccountCreateSubscriptionResponse {
    pub fn new() -> AdAccountCreateSubscriptionResponse {
        AdAccountCreateSubscriptionResponse {
            id: None,
            cryptographic_key: None,
            cryptographic_algorithm: None,
            created_time: None,
        }
    }
}

