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
pub struct AdAccountsSubscriptionsGetList200Response {
    #[serde(rename = "items")]
    pub items: Vec<models::AdAccountGetSubscriptionResponse>,
    #[serde(rename = "bookmark", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub bookmark: Option<Option<String>>,
}

impl AdAccountsSubscriptionsGetList200Response {
    pub fn new(items: Vec<models::AdAccountGetSubscriptionResponse>) -> AdAccountsSubscriptionsGetList200Response {
        AdAccountsSubscriptionsGetList200Response {
            items,
            bookmark: None,
        }
    }
}

