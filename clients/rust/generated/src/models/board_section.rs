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

/// BoardSection : Sections help organize pins within a board.
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct BoardSection {
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    #[serde(rename = "name")]
    pub name: String,
}

impl BoardSection {
    /// Sections help organize pins within a board.
    pub fn new(name: String) -> BoardSection {
        BoardSection {
            id: None,
            name,
        }
    }
}

