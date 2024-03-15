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

#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
#[serde(untagged)]
pub enum CatalogsProductGroupsCreateRequest {
    CatalogsProductGroupCreateRequest(Box<models::CatalogsProductGroupCreateRequest>),
    CatalogsVerticalProductGroupCreateRequest(Box<models::CatalogsVerticalProductGroupCreateRequest>),
}

impl Default for CatalogsProductGroupsCreateRequest {
    fn default() -> Self {
        Self::CatalogsProductGroupCreateRequest(Default::default())
    }
}
/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CatalogType {
    #[serde(rename = "HOTEL")]
    Hotel,
}

impl Default for CatalogType {
    fn default() -> CatalogType {
        Self::Hotel
    }
}

