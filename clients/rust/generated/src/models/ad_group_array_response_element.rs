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
pub struct AdGroupArrayResponseElement {
    #[serde(rename = "data", skip_serializing_if = "Option::is_none")]
    pub data: Option<Box<models::AdGroupResponse>>,
    #[serde(rename = "exceptions", skip_serializing_if = "Option::is_none")]
    pub exceptions: Option<Vec<models::Exception>>,
}

impl AdGroupArrayResponseElement {
    pub fn new() -> AdGroupArrayResponseElement {
        AdGroupArrayResponseElement {
            data: None,
            exceptions: None,
        }
    }
}
