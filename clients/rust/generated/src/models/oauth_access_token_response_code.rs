/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// OauthAccessTokenResponseCode : A successful OAuth access token response for the authorization code flow.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct OauthAccessTokenResponseCode {
    #[serde(rename = "response_type", skip_serializing_if = "Option::is_none")]
    pub response_type: Option<ResponseType>,
    #[serde(rename = "access_token")]
    pub access_token: String,
    #[serde(rename = "token_type")]
    pub token_type: String,
    #[serde(rename = "expires_in")]
    pub expires_in: i32,
    #[serde(rename = "scope")]
    pub scope: String,
    #[serde(rename = "refresh_token")]
    pub refresh_token: String,
    #[serde(rename = "refresh_token_expires_in")]
    pub refresh_token_expires_in: i32,
}

impl OauthAccessTokenResponseCode {
    /// A successful OAuth access token response for the authorization code flow.
    pub fn new(access_token: String, token_type: String, expires_in: i32, scope: String, refresh_token: String, refresh_token_expires_in: i32) -> OauthAccessTokenResponseCode {
        OauthAccessTokenResponseCode {
            response_type: None,
            access_token,
            token_type,
            expires_in,
            scope,
            refresh_token,
            refresh_token_expires_in,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ResponseType {
    #[serde(rename = "authorization_code")]
    AuthorizationCode,
    #[serde(rename = "refresh_token")]
    RefreshToken,
}

impl Default for ResponseType {
    fn default() -> ResponseType {
        Self::AuthorizationCode
    }
}

