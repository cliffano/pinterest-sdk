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
pub struct CatalogsProductGroupFiltersAllOf {
    #[serde(rename = "all_of", skip_serializing_if = "Option::is_none")]
    pub all_of: Option<Vec<crate::models::CatalogsProductGroupFilterKeys>>,
}

impl CatalogsProductGroupFiltersAllOf {
    pub fn new() -> CatalogsProductGroupFiltersAllOf {
        CatalogsProductGroupFiltersAllOf {
            all_of: None,
        }
    }
}


