/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct MaxPriceFilter {
    #[serde(rename = "MAX_PRICE")]
    pub MAX_PRICE: crate::models::CatalogsProductGroupPricingCriteria,
}

impl MaxPriceFilter {
    pub fn new(MAX_PRICE: crate::models::CatalogsProductGroupPricingCriteria) -> MaxPriceFilter {
        MaxPriceFilter {
            MAX_PRICE,
        }
    }
}


