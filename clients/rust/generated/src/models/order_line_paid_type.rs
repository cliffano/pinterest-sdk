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

/// OrderLinePaidType : Order Line Paid Type
/// Order Line Paid Type
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum OrderLinePaidType {
    #[serde(rename = "PAID")]
    Paid,
    #[serde(rename = "BONUS")]
    Bonus,
    #[serde(rename = "MAKE_GOOD")]
    MakeGood,
    #[serde(rename = "TEST")]
    Test,
    #[serde(rename = "null")]
    Null,

}

impl ToString for OrderLinePaidType {
    fn to_string(&self) -> String {
        match self {
            Self::Paid => String::from("PAID"),
            Self::Bonus => String::from("BONUS"),
            Self::MakeGood => String::from("MAKE_GOOD"),
            Self::Test => String::from("TEST"),
            Self::Null => String::from("null"),
        }
    }
}

impl Default for OrderLinePaidType {
    fn default() -> OrderLinePaidType {
        Self::Paid
    }
}

