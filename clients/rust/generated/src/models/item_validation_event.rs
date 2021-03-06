/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// ItemValidationEvent : Object describing an item validation event



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ItemValidationEvent {
    /// The attribute that the item validation event references
    #[serde(rename = "attribute", skip_serializing_if = "Option::is_none")]
    pub attribute: Option<String>,
    /// The event code that the item validation event references
    #[serde(rename = "code", skip_serializing_if = "Option::is_none")]
    pub code: Option<i32>,
    /// Title message describing the item validation event
    #[serde(rename = "message", skip_serializing_if = "Option::is_none")]
    pub message: Option<String>,
}

impl ItemValidationEvent {
    /// Object describing an item validation event
    pub fn new() -> ItemValidationEvent {
        ItemValidationEvent {
            attribute: None,
            code: None,
            message: None,
        }
    }
}


