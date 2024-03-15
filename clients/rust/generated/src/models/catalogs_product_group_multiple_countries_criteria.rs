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
pub struct CatalogsProductGroupMultipleCountriesCriteria {
    #[serde(rename = "values")]
    pub values: Vec<models::Country>,
    #[serde(rename = "negated", skip_serializing_if = "Option::is_none")]
    pub negated: Option<bool>,
}

impl CatalogsProductGroupMultipleCountriesCriteria {
    pub fn new(values: Vec<models::Country>) -> CatalogsProductGroupMultipleCountriesCriteria {
        CatalogsProductGroupMultipleCountriesCriteria {
            values,
            negated: None,
        }
    }
}
