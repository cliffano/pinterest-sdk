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
pub struct CustomLabel0Filter {
    #[serde(rename = "CUSTOM_LABEL_0")]
    pub custom_label_0: crate::models::CatalogsProductGroupMultipleStringCriteria,
}

impl CustomLabel0Filter {
    pub fn new(custom_label_0: crate::models::CatalogsProductGroupMultipleStringCriteria) -> CustomLabel0Filter {
        CustomLabel0Filter {
            custom_label_0,
        }
    }
}


