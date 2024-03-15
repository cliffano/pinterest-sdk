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

/// BulkEntityType : Refers ads entity type
/// Refers ads entity type
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum BulkEntityType {
    #[serde(rename = "CAMPAIGN")]
    Campaign,
    #[serde(rename = "AD_GROUP")]
    AdGroup,
    #[serde(rename = "PRODUCT_GROUP")]
    ProductGroup,
    #[serde(rename = "AD")]
    Ad,
    #[serde(rename = "KEYWORD")]
    Keyword,

}

impl ToString for BulkEntityType {
    fn to_string(&self) -> String {
        match self {
            Self::Campaign => String::from("CAMPAIGN"),
            Self::AdGroup => String::from("AD_GROUP"),
            Self::ProductGroup => String::from("PRODUCT_GROUP"),
            Self::Ad => String::from("AD"),
            Self::Keyword => String::from("KEYWORD"),
        }
    }
}

impl Default for BulkEntityType {
    fn default() -> BulkEntityType {
        Self::Campaign
    }
}

