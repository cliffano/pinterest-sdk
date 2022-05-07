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
pub struct PinMediaWithImageAllOf {
    #[serde(rename = "images", skip_serializing_if = "Option::is_none")]
    pub images: Option<::std::collections::HashMap<String, crate::models::ImageDetails>>,
}

impl PinMediaWithImageAllOf {
    pub fn new() -> PinMediaWithImageAllOf {
        PinMediaWithImageAllOf {
            images: None,
        }
    }
}


