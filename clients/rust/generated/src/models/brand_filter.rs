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
pub struct BrandFilter {
    #[serde(rename = "BRAND")]
    pub brand: models::CatalogsProductGroupMultipleStringCriteria,
}

impl BrandFilter {
    pub fn new(brand: models::CatalogsProductGroupMultipleStringCriteria) -> BrandFilter {
        BrandFilter {
            brand,
        }
    }
}

