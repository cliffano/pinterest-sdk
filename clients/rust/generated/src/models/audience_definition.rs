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

/// AudienceDefinition : Queryable audience representation.
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct AudienceDefinition {
    /// Generation date
    #[serde(rename = "date", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub date: Option<Option<String>>,
    /// Generated audience type to request.
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub r#type: Option<String>,
    /// Generated audience scope to request.
    #[serde(rename = "scope", skip_serializing_if = "Option::is_none")]
    pub scope: Option<String>,
}

impl AudienceDefinition {
    /// Queryable audience representation.
    pub fn new() -> AudienceDefinition {
        AudienceDefinition {
            date: None,
            r#type: None,
            scope: None,
        }
    }
}

