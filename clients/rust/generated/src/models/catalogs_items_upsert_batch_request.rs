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

/// CatalogsItemsUpsertBatchRequest : Request object to upsert catalogs items
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct CatalogsItemsUpsertBatchRequest {
    #[serde(rename = "country")]
    pub country: models::Country,
    #[serde(rename = "language")]
    pub language: models::Language,
    #[serde(rename = "operation")]
    pub operation: models::BatchOperation,
    /// Array with catalogs items
    #[serde(rename = "items")]
    pub items: Vec<models::ItemUpsertBatchRecord>,
}

impl CatalogsItemsUpsertBatchRequest {
    /// Request object to upsert catalogs items
    pub fn new(country: models::Country, language: models::Language, operation: models::BatchOperation, items: Vec<models::ItemUpsertBatchRecord>) -> CatalogsItemsUpsertBatchRequest {
        CatalogsItemsUpsertBatchRequest {
            country,
            language,
            operation,
            items,
        }
    }
}

