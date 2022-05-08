/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

/// CatalogsProductGroupCreateRequest : Request object for creating a product group.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CatalogsProductGroupCreateRequest {
    /// Catalog Feed id pertaining to the catalog product group.
    #[serde(rename = "feed_id")]
    pub feed_id: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<String>,
    #[serde(rename = "filters")]
    pub filters: Box<crate::models::CatalogsProductGroupFilters>,
}

impl CatalogsProductGroupCreateRequest {
    /// Request object for creating a product group.
    pub fn new(feed_id: String, name: String, filters: crate::models::CatalogsProductGroupFilters) -> CatalogsProductGroupCreateRequest {
        CatalogsProductGroupCreateRequest {
            feed_id,
            name,
            description: None,
            filters: Box::new(filters),
        }
    }
}

