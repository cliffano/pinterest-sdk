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
pub struct OrderLineError {
    #[serde(rename = "data", skip_serializing_if = "Option::is_none")]
    pub data: Option<models::OrderLine>,
    #[serde(rename = "error_messages", skip_serializing_if = "Option::is_none")]
    pub error_messages: Option<Vec<String>>,
}

impl OrderLineError {
    pub fn new() -> OrderLineError {
        OrderLineError {
            data: None,
            error_messages: None,
        }
    }
}

