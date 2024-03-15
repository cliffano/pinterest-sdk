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

/// UserListOperationType : User list operation type (add or remove)
/// User list operation type (add or remove)
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum UserListOperationType {
    #[serde(rename = "ADD")]
    Add,
    #[serde(rename = "REMOVE")]
    Remove,

}

impl ToString for UserListOperationType {
    fn to_string(&self) -> String {
        match self {
            Self::Add => String::from("ADD"),
            Self::Remove => String::from("REMOVE"),
        }
    }
}

impl Default for UserListOperationType {
    fn default() -> UserListOperationType {
        Self::Add
    }
}

