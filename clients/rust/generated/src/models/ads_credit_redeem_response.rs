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
pub struct AdsCreditRedeemResponse {
    /// Returns true if the offer code was successfully applied(validateOnly=false) or can be applied(validateOnly=true).
    #[serde(rename = "success", skip_serializing_if = "Option::is_none")]
    pub success: Option<bool>,
    /// Error code type if error occurs
    #[serde(rename = "errorCode", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub error_code: Option<Option<i32>>,
    /// Reason for failure
    #[serde(rename = "errorMessage", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub error_message: Option<Option<String>>,
}

impl AdsCreditRedeemResponse {
    pub fn new() -> AdsCreditRedeemResponse {
        AdsCreditRedeemResponse {
            success: None,
            error_code: None,
            error_message: None,
        }
    }
}

