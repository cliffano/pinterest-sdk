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
pub struct CatalogsProductGroupFiltersAllOf {
    #[serde(rename = "all_of")]
    pub all_of: Vec<models::CatalogsProductGroupFilterKeys>,
}

impl CatalogsProductGroupFiltersAllOf {
    pub fn new(all_of: Vec<models::CatalogsProductGroupFilterKeys>) -> CatalogsProductGroupFiltersAllOf {
        CatalogsProductGroupFiltersAllOf {
            all_of,
        }
    }
}

