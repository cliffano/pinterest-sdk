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

/// CatalogsProductGroupProductCounts : Product counts for a CatalogsProductGroup
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct CatalogsProductGroupProductCounts {
    #[serde(rename = "in_stock")]
    pub in_stock: f64,
    #[serde(rename = "out_of_stock")]
    pub out_of_stock: f64,
    #[serde(rename = "preorder")]
    pub preorder: f64,
    #[serde(rename = "total")]
    pub total: f64,
}

impl CatalogsProductGroupProductCounts {
    /// Product counts for a CatalogsProductGroup
    pub fn new(in_stock: f64, out_of_stock: f64, preorder: f64, total: f64) -> CatalogsProductGroupProductCounts {
        CatalogsProductGroupProductCounts {
            in_stock,
            out_of_stock,
            preorder,
            total,
        }
    }
}
