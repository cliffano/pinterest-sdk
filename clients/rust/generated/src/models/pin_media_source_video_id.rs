/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// PinMediaSourceVideoId : Video ID-based media source



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PinMediaSourceVideoId {
    #[serde(rename = "source_type")]
    pub source_type: SourceType,
    #[serde(rename = "cover_image_url")]
    pub cover_image_url: String,
    #[serde(rename = "media_id")]
    pub media_id: String,
}

impl PinMediaSourceVideoId {
    /// Video ID-based media source
    pub fn new(source_type: SourceType, cover_image_url: String, media_id: String) -> PinMediaSourceVideoId {
        PinMediaSourceVideoId {
            source_type,
            cover_image_url,
            media_id,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SourceType {
    #[serde(rename = "video_id")]
    VideoId,
}

impl Default for SourceType {
    fn default() -> SourceType {
        Self::VideoId
    }
}

