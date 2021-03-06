/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// MediaUploadDetails : Media upload details



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct MediaUploadDetails {
    #[serde(rename = "media_id", skip_serializing_if = "Option::is_none")]
    pub media_id: Option<String>,
    #[serde(rename = "media_type", skip_serializing_if = "Option::is_none")]
    pub media_type: Option<Box<crate::models::MediaUploadType>>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<Box<crate::models::MediaUploadStatus>>,
}

impl MediaUploadDetails {
    /// Media upload details
    pub fn new() -> MediaUploadDetails {
        MediaUploadDetails {
            media_id: None,
            media_type: None,
            status: None,
        }
    }
}


