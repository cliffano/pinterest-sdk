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
pub struct CatalogsProductGroupPinsList200Response {
    /// Pins
    #[serde(rename = "items")]
    pub items: Vec<models::CatalogsProduct>,
    #[serde(rename = "bookmark", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub bookmark: Option<Option<String>>,
}

impl CatalogsProductGroupPinsList200Response {
    pub fn new(items: Vec<models::CatalogsProduct>) -> CatalogsProductGroupPinsList200Response {
        CatalogsProductGroupPinsList200Response {
            items,
            bookmark: None,
        }
    }
}

