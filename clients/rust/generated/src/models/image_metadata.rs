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
pub struct ImageMetadata {
    #[serde(rename = "item_type", skip_serializing_if = "Option::is_none")]
    pub item_type: Option<String>,
    #[serde(rename = "title", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub title: Option<Option<String>>,
    #[serde(rename = "description", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub description: Option<Option<String>>,
    #[serde(rename = "link", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub link: Option<Option<String>>,
    #[serde(rename = "images", skip_serializing_if = "Option::is_none")]
    pub images: Option<Box<models::ImageMetadataImages>>,
}

impl ImageMetadata {
    pub fn new() -> ImageMetadata {
        ImageMetadata {
            item_type: None,
            title: None,
            description: None,
            link: None,
            images: None,
        }
    }
}

