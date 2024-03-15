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
pub struct CustomerListRequest {
    /// Customer list name.
    #[serde(rename = "name")]
    pub name: String,
    /// Records list. Can be any combination of emails, MAIDs, or IDFAs. Emails must be lowercase and can be plain text or hashed using SHA1, SHA256, or MD5. MAIDs and IDFAs must be hashed with SHA1, SHA256, or MD5.
    #[serde(rename = "records")]
    pub records: String,
    #[serde(rename = "list_type", skip_serializing_if = "Option::is_none")]
    pub list_type: Option<models::UserListType>,
    /// Customer list errors.
    #[serde(rename = "exceptions", skip_serializing_if = "Option::is_none")]
    pub exceptions: Option<serde_json::Value>,
}

impl CustomerListRequest {
    pub fn new(name: String, records: String) -> CustomerListRequest {
        CustomerListRequest {
            name,
            records,
            list_type: None,
            exceptions: None,
        }
    }
}
