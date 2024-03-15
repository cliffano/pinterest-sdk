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

/// BatchOperation : The operation performed by the batch. The DELETE_DISCONTINUED operation only updates availablity to \"Out of Stock\".
/// The operation performed by the batch. The DELETE_DISCONTINUED operation only updates availablity to \"Out of Stock\".
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum BatchOperation {
    #[serde(rename = "UPDATE")]
    Update,
    #[serde(rename = "UPSERT")]
    Upsert,
    #[serde(rename = "CREATE")]
    Create,
    #[serde(rename = "DELETE_DISCONTINUED")]
    DeleteDiscontinued,
    #[serde(rename = "DELETE")]
    Delete,

}

impl ToString for BatchOperation {
    fn to_string(&self) -> String {
        match self {
            Self::Update => String::from("UPDATE"),
            Self::Upsert => String::from("UPSERT"),
            Self::Create => String::from("CREATE"),
            Self::DeleteDiscontinued => String::from("DELETE_DISCONTINUED"),
            Self::Delete => String::from("DELETE"),
        }
    }
}

impl Default for BatchOperation {
    fn default() -> BatchOperation {
        Self::Update
    }
}

