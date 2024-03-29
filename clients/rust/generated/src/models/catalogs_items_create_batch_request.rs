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

/// CatalogsItemsCreateBatchRequest : Request object to create catalogs items
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct CatalogsItemsCreateBatchRequest {
    #[serde(rename = "country")]
    pub country: models::Country,
    #[serde(rename = "language")]
    pub language: models::Language,
    #[serde(rename = "operation")]
    pub operation: models::BatchOperation,
    /// Array with catalogs items
    #[serde(rename = "items")]
    pub items: Vec<models::ItemCreateBatchRecord>,
}

impl CatalogsItemsCreateBatchRequest {
    /// Request object to create catalogs items
    pub fn new(country: models::Country, language: models::Language, operation: models::BatchOperation, items: Vec<models::ItemCreateBatchRecord>) -> CatalogsItemsCreateBatchRequest {
        CatalogsItemsCreateBatchRequest {
            country,
            language,
            operation,
            items,
        }
    }
}

