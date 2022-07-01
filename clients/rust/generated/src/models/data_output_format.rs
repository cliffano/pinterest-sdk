/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// DataOutputFormat : Format of generated report

/// Format of generated report
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DataOutputFormat {
    #[serde(rename = "JSON")]
    JSON,
    #[serde(rename = "CSV")]
    CSV,

}

impl ToString for DataOutputFormat {
    fn to_string(&self) -> String {
        match self {
            Self::JSON => String::from("JSON"),
            Self::CSV => String::from("CSV"),
        }
    }
}

impl Default for DataOutputFormat {
    fn default() -> DataOutputFormat {
        Self::JSON
    }
}




