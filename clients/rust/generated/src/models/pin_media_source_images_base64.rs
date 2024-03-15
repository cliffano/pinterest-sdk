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

/// PinMediaSourceImagesBase64 : Multiple Base64-encoded images media source
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct PinMediaSourceImagesBase64 {
    #[serde(rename = "source_type", skip_serializing_if = "Option::is_none")]
    pub source_type: Option<SourceType>,
    /// Array with image objects.
    #[serde(rename = "items")]
    pub items: Vec<models::PinMediaSourceImagesBase64ItemsInner>,
    #[serde(rename = "index", skip_serializing_if = "Option::is_none")]
    pub index: Option<i32>,
}

impl PinMediaSourceImagesBase64 {
    /// Multiple Base64-encoded images media source
    pub fn new(items: Vec<models::PinMediaSourceImagesBase64ItemsInner>) -> PinMediaSourceImagesBase64 {
        PinMediaSourceImagesBase64 {
            source_type: None,
            items,
            index: None,
        }
    }
}
/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SourceType {
    #[serde(rename = "multiple_image_base64")]
    MultipleImageBase64,
}

impl Default for SourceType {
    fn default() -> SourceType {
        Self::MultipleImageBase64
    }
}
