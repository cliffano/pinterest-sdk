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
pub struct AdAccount {
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "owner", skip_serializing_if = "Option::is_none")]
    pub owner: Option<Box<models::AdAccountOwner>>,
    #[serde(rename = "country", skip_serializing_if = "Option::is_none")]
    pub country: Option<models::Country>,
    #[serde(rename = "currency", skip_serializing_if = "Option::is_none")]
    pub currency: Option<models::Currency>,
    #[serde(rename = "permissions", skip_serializing_if = "Option::is_none")]
    pub permissions: Option<Vec<models::BusinessAccessRole>>,
    /// Creation time. Unix timestamp in seconds.
    #[serde(rename = "created_time", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub created_time: Option<Option<i32>>,
    /// Last update time. Unix timestamp in seconds.
    #[serde(rename = "updated_time", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub updated_time: Option<Option<i32>>,
}

impl AdAccount {
    pub fn new() -> AdAccount {
        AdAccount {
            id: None,
            name: None,
            owner: None,
            country: None,
            currency: None,
            permissions: None,
            created_time: None,
            updated_time: None,
        }
    }
}
