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

/// CatalogsHotelItemsBatch : Object describing the catalogs hotel items batch
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct CatalogsHotelItemsBatch {
    /// Id of the catalogs items batch
    #[serde(rename = "batch_id", skip_serializing_if = "Option::is_none")]
    pub batch_id: Option<String>,
    /// Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
    #[serde(rename = "created_time", skip_serializing_if = "Option::is_none")]
    pub created_time: Option<String>,
    /// Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
    #[serde(rename = "completed_time", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub completed_time: Option<Option<String>>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<models::BatchOperationStatus>,
    #[serde(rename = "catalog_type")]
    pub catalog_type: models::CatalogsType,
    /// Array with the catalogs items processing records part of the catalogs items batch
    #[serde(rename = "items", skip_serializing_if = "Option::is_none")]
    pub items: Option<Vec<models::HotelProcessingRecord>>,
}

impl CatalogsHotelItemsBatch {
    /// Object describing the catalogs hotel items batch
    pub fn new(catalog_type: models::CatalogsType) -> CatalogsHotelItemsBatch {
        CatalogsHotelItemsBatch {
            batch_id: None,
            created_time: None,
            completed_time: None,
            status: None,
            catalog_type,
            items: None,
        }
    }
}

