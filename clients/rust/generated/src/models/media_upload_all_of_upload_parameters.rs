/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

/// MediaUploadAllOfUploadParameters : The list of parameter key/value pairs you will need to send with your POST request to upload your media file.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct MediaUploadAllOfUploadParameters {
    #[serde(rename = "x-amz-date", skip_serializing_if = "Option::is_none")]
    pub x_amz_date: Option<String>,
    #[serde(rename = "x-amz-signature", skip_serializing_if = "Option::is_none")]
    pub x_amz_signature: Option<String>,
    #[serde(rename = "x-amz-security-token", skip_serializing_if = "Option::is_none")]
    pub x_amz_security_token: Option<String>,
    #[serde(rename = "x-amz-algorithm", skip_serializing_if = "Option::is_none")]
    pub x_amz_algorithm: Option<String>,
    #[serde(rename = "key", skip_serializing_if = "Option::is_none")]
    pub key: Option<String>,
    #[serde(rename = "policy", skip_serializing_if = "Option::is_none")]
    pub policy: Option<String>,
    #[serde(rename = "x-amz-credential", skip_serializing_if = "Option::is_none")]
    pub x_amz_credential: Option<String>,
    #[serde(rename = "Content-Type", skip_serializing_if = "Option::is_none")]
    pub content_type: Option<String>,
}

impl MediaUploadAllOfUploadParameters {
    /// The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
    pub fn new() -> MediaUploadAllOfUploadParameters {
        MediaUploadAllOfUploadParameters {
            x_amz_date: None,
            x_amz_signature: None,
            x_amz_security_token: None,
            x_amz_algorithm: None,
            key: None,
            policy: None,
            x_amz_credential: None,
            content_type: None,
        }
    }
}


