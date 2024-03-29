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

/// DataOutputFormat : Format of generated report
/// Format of generated report
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DataOutputFormat {
    #[serde(rename = "JSON")]
    Json,
    #[serde(rename = "CSV")]
    Csv,

}

impl ToString for DataOutputFormat {
    fn to_string(&self) -> String {
        match self {
            Self::Json => String::from("JSON"),
            Self::Csv => String::from("CSV"),
        }
    }
}

impl Default for DataOutputFormat {
    fn default() -> DataOutputFormat {
        Self::Json
    }
}

