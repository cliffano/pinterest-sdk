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
pub struct CatalogsProductGroupMultipleStringListCriteria {
    #[serde(rename = "values")]
    pub values: Vec<Vec<String>>,
    #[serde(rename = "negated")]
    pub negated: bool,
}

impl CatalogsProductGroupMultipleStringListCriteria {
    pub fn new(values: Vec<Vec<String>>, negated: bool) -> CatalogsProductGroupMultipleStringListCriteria {
        CatalogsProductGroupMultipleStringListCriteria {
            values,
            negated,
        }
    }
}


