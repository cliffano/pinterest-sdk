/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

/// CatalogsItems : Response object of catalogs items



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CatalogsItems {
    /// Array with catalogs items
    #[serde(rename = "items", skip_serializing_if = "Option::is_none")]
    pub items: Option<Vec<crate::models::ItemBatchRecord>>,
}

impl CatalogsItems {
    /// Response object of catalogs items
    pub fn new() -> CatalogsItems {
        CatalogsItems {
            items: None,
        }
    }
}


