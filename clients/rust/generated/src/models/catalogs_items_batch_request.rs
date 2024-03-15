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

/// CatalogsItemsBatchRequest : Request object of catalogs items batch
#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
#[serde(tag = "operation")]
pub enum CatalogsItemsBatchRequest {
    #[serde(rename="UPDATE")]
    Update(Box<models::CatalogsItemsUpdateBatchRequest>),
    #[serde(rename="UPSERT")]
    Upsert(Box<models::CatalogsItemsUpsertBatchRequest>),
    #[serde(rename="CREATE")]
    Create(Box<models::CatalogsItemsCreateBatchRequest>),
    #[serde(rename="DELETE_DISCONTINUED")]
    DeleteDiscontinued(Box<models::CatalogsItemsDeleteDiscontinuedBatchRequest>),
    #[serde(rename="DELETE")]
    Delete(Box<models::CatalogsItemsDeleteBatchRequest>),
}

impl Default for CatalogsItemsBatchRequest {
    fn default() -> Self {
        Self::Update(Default::default())
    }
}

