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
pub struct CatalogsRetailProductGroup {
    #[serde(rename = "catalog_type")]
    pub catalog_type: CatalogType,
    /// ID of the catalog product group.
    #[serde(rename = "id")]
    pub id: String,
    /// Name of catalog product group
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "description", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub description: Option<Option<String>>,
    #[serde(rename = "filters")]
    pub filters: Box<models::CatalogsProductGroupFilters>,
    /// boolean indicator of whether the product group is being featured or not
    #[serde(rename = "is_featured", skip_serializing_if = "Option::is_none")]
    pub is_featured: Option<bool>,
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub r#type: Option<models::CatalogsProductGroupType>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<models::CatalogsProductGroupStatus>,
    /// Unix timestamp in seconds of when catalog product group was created.
    #[serde(rename = "created_at", skip_serializing_if = "Option::is_none")]
    pub created_at: Option<i32>,
    /// Unix timestamp in seconds of last time catalog product group was updated.
    #[serde(rename = "updated_at", skip_serializing_if = "Option::is_none")]
    pub updated_at: Option<i32>,
    #[serde(rename = "feed_id", deserialize_with = "Option::deserialize")]
    pub feed_id: Option<FeedId>,
}

impl CatalogsRetailProductGroup {
    pub fn new(catalog_type: CatalogType, id: String, filters: models::CatalogsProductGroupFilters, feed_id: Option<FeedId>) -> CatalogsRetailProductGroup {
        CatalogsRetailProductGroup {
            catalog_type,
            id,
            name: None,
            description: None,
            filters: Box::new(filters),
            is_featured: None,
            r#type: None,
            status: None,
            created_at: None,
            updated_at: None,
            feed_id,
        }
    }
}
/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CatalogType {
    #[serde(rename = "RETAIL")]
    Retail,
}

impl Default for CatalogType {
    fn default() -> CatalogType {
        Self::Retail
    }
}
/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum FeedId {
    #[serde(rename = "null")]
    Null,
}

impl Default for FeedId {
    fn default() -> FeedId {
        Self::Null
    }
}

