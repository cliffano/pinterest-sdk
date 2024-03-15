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

/// BoardMedia : Board media.
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct BoardMedia {
    /// Board cover image.
    #[serde(rename = "image_cover_url", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub image_cover_url: Option<Option<String>>,
    /// Board pin thumbnail urls.
    #[serde(rename = "pin_thumbnail_urls", skip_serializing_if = "Option::is_none")]
    pub pin_thumbnail_urls: Option<Vec<String>>,
}

impl BoardMedia {
    /// Board media.
    pub fn new() -> BoardMedia {
        BoardMedia {
            image_cover_url: None,
            pin_thumbnail_urls: None,
        }
    }
}

