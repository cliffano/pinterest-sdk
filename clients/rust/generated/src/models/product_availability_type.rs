/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

/// ProductAvailabilityType : Default availability for products in a feed.

/// Default availability for products in a feed.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ProductAvailabilityType {
    #[serde(rename = "IN_STOCK")]
    INSTOCK,
    #[serde(rename = "OUT_OF_STOCK")]
    OUTOFSTOCK,
    #[serde(rename = "PREORDER")]
    PREORDER,
    #[serde(rename = "null")]
    Null,

}

impl ToString for ProductAvailabilityType {
    fn to_string(&self) -> String {
        match self {
            Self::INSTOCK => String::from("IN_STOCK"),
            Self::OUTOFSTOCK => String::from("OUT_OF_STOCK"),
            Self::PREORDER => String::from("PREORDER"),
            Self::Null => String::from("null"),
        }
    }
}

impl Default for ProductAvailabilityType {
    fn default() -> ProductAvailabilityType {
        Self::INSTOCK
    }
}




