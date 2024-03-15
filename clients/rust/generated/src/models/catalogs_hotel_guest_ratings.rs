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

/// CatalogsHotelGuestRatings : If specified, you must provide all properties
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct CatalogsHotelGuestRatings {
    /// Your hotel's rating.
    #[serde(rename = "score", skip_serializing_if = "Option::is_none")]
    pub score: Option<f64>,
    /// Total number of people who have rated this hotel.
    #[serde(rename = "number_of_reviewers", skip_serializing_if = "Option::is_none")]
    pub number_of_reviewers: Option<i32>,
    /// Max value for the hotel rating score.
    #[serde(rename = "max_score", skip_serializing_if = "Option::is_none")]
    pub max_score: Option<f64>,
    /// System you use for guest reviews.
    #[serde(rename = "rating_system", skip_serializing_if = "Option::is_none")]
    pub rating_system: Option<String>,
}

impl CatalogsHotelGuestRatings {
    /// If specified, you must provide all properties
    pub fn new() -> CatalogsHotelGuestRatings {
        CatalogsHotelGuestRatings {
            score: None,
            number_of_reviewers: None,
            max_score: None,
            rating_system: None,
        }
    }
}

