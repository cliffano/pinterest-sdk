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
pub enum FeedsUpdateRequest {
    CatalogsVerticalFeedsUpdateRequest(Box<models::CatalogsVerticalFeedsUpdateRequest>),
    CatalogsFeedsUpdateRequest(Box<models::CatalogsFeedsUpdateRequest>),
}

impl Default for FeedsUpdateRequest {
    fn default() -> Self {
        Self::CatalogsVerticalFeedsUpdateRequest(Default::default())
    }
}

