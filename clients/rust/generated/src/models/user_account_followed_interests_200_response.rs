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
pub struct UserAccountFollowedInterests200Response {
    #[serde(rename = "items")]
    pub items: Vec<models::Interest>,
    #[serde(rename = "bookmark", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub bookmark: Option<Option<String>>,
}

impl UserAccountFollowedInterests200Response {
    pub fn new(items: Vec<models::Interest>) -> UserAccountFollowedInterests200Response {
        UserAccountFollowedInterests200Response {
            items,
            bookmark: None,
        }
    }
}

