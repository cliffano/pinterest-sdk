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

/// IntegrationRecord : Integration record
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct IntegrationRecord {
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    #[serde(rename = "external_business_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub external_business_id: Option<Option<String>>,
    #[serde(rename = "connected_merchant_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub connected_merchant_id: Option<Option<String>>,
    #[serde(rename = "connected_user_id", skip_serializing_if = "Option::is_none")]
    pub connected_user_id: Option<String>,
    #[serde(rename = "connected_advertiser_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub connected_advertiser_id: Option<Option<String>>,
    #[serde(rename = "connected_lba_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub connected_lba_id: Option<Option<String>>,
    #[serde(rename = "connected_tag_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub connected_tag_id: Option<Option<String>>,
    #[serde(rename = "partner_access_token", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub partner_access_token: Option<Option<String>>,
    #[serde(rename = "partner_refresh_token", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub partner_refresh_token: Option<Option<String>>,
    #[serde(rename = "partner_primary_email", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub partner_primary_email: Option<Option<String>>,
    #[serde(rename = "partner_access_token_expiry", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub partner_access_token_expiry: Option<Option<i32>>,
    #[serde(rename = "partner_refresh_token_expiry", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub partner_refresh_token_expiry: Option<Option<i32>>,
    #[serde(rename = "scopes", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub scopes: Option<Option<String>>,
    #[serde(rename = "partner_metadata", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub partner_metadata: Option<Option<String>>,
    #[serde(rename = "additional_id_1", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub additional_id_1: Option<Option<String>>,
    #[serde(rename = "created_time", skip_serializing_if = "Option::is_none")]
    pub created_time: Option<i32>,
    #[serde(rename = "updated_time", skip_serializing_if = "Option::is_none")]
    pub updated_time: Option<i32>,
}

impl IntegrationRecord {
    /// Integration record
    pub fn new() -> IntegrationRecord {
        IntegrationRecord {
            id: None,
            external_business_id: None,
            connected_merchant_id: None,
            connected_user_id: None,
            connected_advertiser_id: None,
            connected_lba_id: None,
            connected_tag_id: None,
            partner_access_token: None,
            partner_refresh_token: None,
            partner_primary_email: None,
            partner_access_token_expiry: None,
            partner_refresh_token_expiry: None,
            scopes: None,
            partner_metadata: None,
            additional_id_1: None,
            created_time: None,
            updated_time: None,
        }
    }
}
