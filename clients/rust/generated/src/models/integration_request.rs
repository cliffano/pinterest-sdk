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

/// IntegrationRequest : Schema used for creating the integration metadata.
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct IntegrationRequest {
    /// External business ID for the integration.
    #[serde(rename = "external_business_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub external_business_id: Option<Option<String>>,
    #[serde(rename = "connected_merchant_id", skip_serializing_if = "Option::is_none")]
    pub connected_merchant_id: Option<String>,
    #[serde(rename = "connected_advertiser_id", skip_serializing_if = "Option::is_none")]
    pub connected_advertiser_id: Option<String>,
    #[serde(rename = "connected_lba_id", skip_serializing_if = "Option::is_none")]
    pub connected_lba_id: Option<String>,
    #[serde(rename = "connected_tag_id", skip_serializing_if = "Option::is_none")]
    pub connected_tag_id: Option<String>,
    #[serde(rename = "partner_access_token", skip_serializing_if = "Option::is_none")]
    pub partner_access_token: Option<String>,
    #[serde(rename = "partner_refresh_token", skip_serializing_if = "Option::is_none")]
    pub partner_refresh_token: Option<String>,
    #[serde(rename = "partner_primary_email", skip_serializing_if = "Option::is_none")]
    pub partner_primary_email: Option<String>,
    #[serde(rename = "partner_access_token_expiry", skip_serializing_if = "Option::is_none")]
    pub partner_access_token_expiry: Option<i32>,
    #[serde(rename = "partner_refresh_token_expiry", skip_serializing_if = "Option::is_none")]
    pub partner_refresh_token_expiry: Option<i32>,
    #[serde(rename = "scopes", skip_serializing_if = "Option::is_none")]
    pub scopes: Option<String>,
    #[serde(rename = "additional_id_1", skip_serializing_if = "Option::is_none")]
    pub additional_id_1: Option<String>,
    #[serde(rename = "partner_metadata", skip_serializing_if = "Option::is_none")]
    pub partner_metadata: Option<String>,
}

impl IntegrationRequest {
    /// Schema used for creating the integration metadata.
    pub fn new() -> IntegrationRequest {
        IntegrationRequest {
            external_business_id: None,
            connected_merchant_id: None,
            connected_advertiser_id: None,
            connected_lba_id: None,
            connected_tag_id: None,
            partner_access_token: None,
            partner_refresh_token: None,
            partner_primary_email: None,
            partner_access_token_expiry: None,
            partner_refresh_token_expiry: None,
            scopes: None,
            additional_id_1: None,
            partner_metadata: None,
        }
    }
}

