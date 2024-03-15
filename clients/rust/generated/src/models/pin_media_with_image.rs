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

/// PinMediaWithImage : Pin with image.
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct PinMediaWithImage {
    #[serde(rename = "media_type", skip_serializing_if = "Option::is_none")]
    pub media_type: Option<String>,
    #[serde(rename = "images", skip_serializing_if = "Option::is_none")]
    pub images: Option<Box<models::ImageMetadataImages>>,
}

impl PinMediaWithImage {
    /// Pin with image.
    pub fn new() -> PinMediaWithImage {
        PinMediaWithImage {
            media_type: None,
            images: None,
        }
    }
}

