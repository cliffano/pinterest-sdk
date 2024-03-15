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

#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct CatalogsHotelAddress {
    /// Primary street address of hotel.
    #[serde(rename = "addr1", skip_serializing_if = "Option::is_none")]
    pub addr1: Option<String>,
    /// City where the hotel is located.
    #[serde(rename = "city", skip_serializing_if = "Option::is_none")]
    pub city: Option<String>,
    /// State, county, province, where the hotel is located.
    #[serde(rename = "region", skip_serializing_if = "Option::is_none")]
    pub region: Option<String>,
    /// Country where the hotel is located.
    #[serde(rename = "country", skip_serializing_if = "Option::is_none")]
    pub country: Option<String>,
    /// Required for countries with a postal code system. Postal or zip code of the hotel.
    #[serde(rename = "postal_code", skip_serializing_if = "Option::is_none")]
    pub postal_code: Option<String>,
}

impl CatalogsHotelAddress {
    pub fn new() -> CatalogsHotelAddress {
        CatalogsHotelAddress {
            addr1: None,
            city: None,
            region: None,
            country: None,
            postal_code: None,
        }
    }
}

