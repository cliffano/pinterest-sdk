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

/// ConversionReportTimeType : Conversion report time type
/// Conversion report time type
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ConversionReportTimeType {
    #[serde(rename = "TIME_OF_AD_ACTION")]
    AdAction,
    #[serde(rename = "TIME_OF_CONVERSION")]
    Conversion,

}

impl ToString for ConversionReportTimeType {
    fn to_string(&self) -> String {
        match self {
            Self::AdAction => String::from("TIME_OF_AD_ACTION"),
            Self::Conversion => String::from("TIME_OF_CONVERSION"),
        }
    }
}

impl Default for ConversionReportTimeType {
    fn default() -> ConversionReportTimeType {
        Self::AdAction
    }
}
