/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// OauthAccessTokenResponse : A successful OAuth access token response.


#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
#[serde(tag = "responsetype")]
pub enum OauthAccessTokenResponse {
    #[serde(rename="authorization_code")]
    OauthAccessTokenResponseCode {
        #[serde(rename = "access_token")]
        access_token: String,
        #[serde(rename = "token_type")]
        token_type: String,
        #[serde(rename = "expires_in")]
        expires_in: i32,
        #[serde(rename = "scope")]
        scope: String,
        #[serde(rename = "refresh_token")]
        refresh_token: String,
        #[serde(rename = "refresh_token_expires_in")]
        refresh_token_expires_in: i32,
    },
    #[serde(rename="refresh_token")]
    OauthAccessTokenResponseRefresh {
        #[serde(rename = "access_token")]
        access_token: String,
        #[serde(rename = "token_type")]
        token_type: String,
        #[serde(rename = "expires_in")]
        expires_in: i32,
        #[serde(rename = "scope")]
        scope: String,
    },
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

