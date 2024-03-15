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
pub struct CustomLabel4Filter {
    #[serde(rename = "CUSTOM_LABEL_4")]
    pub custom_label_4: models::CatalogsProductGroupMultipleStringCriteria,
}

impl CustomLabel4Filter {
    pub fn new(custom_label_4: models::CatalogsProductGroupMultipleStringCriteria) -> CustomLabel4Filter {
        CustomLabel4Filter {
            custom_label_4,
        }
    }
}

