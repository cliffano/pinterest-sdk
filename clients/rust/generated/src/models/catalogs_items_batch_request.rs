/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

/// CatalogsItemsBatchRequest : Request object of catalogs items batch



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CatalogsItemsBatchRequest {
    #[serde(rename = "country", skip_serializing_if = "Option::is_none")]
    pub country: Option<crate::models::Country>,
    #[serde(rename = "language", skip_serializing_if = "Option::is_none")]
    pub language: Option<crate::models::Language>,
    #[serde(rename = "operation", skip_serializing_if = "Option::is_none")]
    pub operation: Option<crate::models::BatchOperation>,
    /// Array with catalogs items
    #[serde(rename = "items", skip_serializing_if = "Option::is_none")]
    pub items: Option<Vec<crate::models::ItemBatchRecord>>,
}

impl CatalogsItemsBatchRequest {
    /// Request object of catalogs items batch
    pub fn new() -> CatalogsItemsBatchRequest {
        CatalogsItemsBatchRequest {
            country: None,
            language: None,
            operation: None,
            items: None,
        }
    }
}


