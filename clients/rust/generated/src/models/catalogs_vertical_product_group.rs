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
#[serde(tag = "catalog_type")]
pub enum CatalogsVerticalProductGroup {
    #[serde(rename="HOTEL")]
    Hotel(Box<models::CatalogsHotelProductGroup>),
    #[serde(rename="RETAIL")]
    Retail(Box<models::CatalogsRetailProductGroup>),
}

impl Default for CatalogsVerticalProductGroup {
    fn default() -> Self {
        Self::Hotel(Default::default())
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

