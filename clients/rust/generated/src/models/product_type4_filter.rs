/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ProductType4Filter {
    #[serde(rename = "PRODUCT_TYPE_4")]
    pub product_type_4: crate::models::CatalogsProductGroupMultipleStringListCriteria,
}

impl ProductType4Filter {
    pub fn new(product_type_4: crate::models::CatalogsProductGroupMultipleStringListCriteria) -> ProductType4Filter {
        ProductType4Filter {
            product_type_4,
        }
    }
}


