/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// MediaUploadRequest : Media upload request



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct MediaUploadRequest {
    #[serde(rename = "media_type")]
    pub media_type: Box<crate::models::MediaUploadType>,
}

impl MediaUploadRequest {
    /// Media upload request
    pub fn new(media_type: crate::models::MediaUploadType) -> MediaUploadRequest {
        MediaUploadRequest {
            media_type: Box::new(media_type),
        }
    }
}


