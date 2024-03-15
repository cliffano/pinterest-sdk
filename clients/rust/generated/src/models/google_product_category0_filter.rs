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
pub struct GoogleProductCategory0Filter {
    #[serde(rename = "GOOGLE_PRODUCT_CATEGORY_0")]
    pub google_product_category_0: models::CatalogsProductGroupMultipleStringListCriteria,
}

impl GoogleProductCategory0Filter {
    pub fn new(google_product_category_0: models::CatalogsProductGroupMultipleStringListCriteria) -> GoogleProductCategory0Filter {
        GoogleProductCategory0Filter {
            google_product_category_0,
        }
    }
}

