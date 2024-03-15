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
pub struct CatalogsItemValidationIssues {
    /// Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation.
    #[serde(rename = "item_number")]
    pub item_number: i32,
    /// The merchant-created unique ID that represents the product.
    #[serde(rename = "item_id", deserialize_with = "Option::deserialize")]
    pub item_id: Option<String>,
    #[serde(rename = "errors")]
    pub errors: Box<models::CatalogsItemValidationErrors>,
    #[serde(rename = "warnings")]
    pub warnings: Box<models::CatalogsItemValidationWarnings>,
}

impl CatalogsItemValidationIssues {
    pub fn new(item_number: i32, item_id: Option<String>, errors: models::CatalogsItemValidationErrors, warnings: models::CatalogsItemValidationWarnings) -> CatalogsItemValidationIssues {
        CatalogsItemValidationIssues {
            item_number,
            item_id,
            errors: Box::new(errors),
            warnings: Box::new(warnings),
        }
    }
}

