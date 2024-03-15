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
pub struct AdPreviewCreateFromImage {
    /// Image URL.
    #[serde(rename = "image_url")]
    pub image_url: String,
    /// Title displayed below ad.
    #[serde(rename = "title")]
    pub title: String,
}

impl AdPreviewCreateFromImage {
    pub fn new(image_url: String, title: String) -> AdPreviewCreateFromImage {
        AdPreviewCreateFromImage {
            image_url,
            title,
        }
    }
}

