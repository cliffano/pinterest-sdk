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
pub struct ImageDetails {
    #[serde(rename = "width")]
    pub width: i32,
    #[serde(rename = "height")]
    pub height: Option<i32>,
    #[serde(rename = "url")]
    pub url: String,
}

impl ImageDetails {
    pub fn new(width: i32, height: Option<i32>, url: String) -> ImageDetails {
        ImageDetails {
            width,
            height,
            url,
        }
    }
}


