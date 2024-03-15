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

/// QuizPinData : This field includes all quiz data including questions, options, and results.
#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct QuizPinData {
    #[serde(rename = "questions", skip_serializing_if = "Option::is_none")]
    pub questions: Option<Vec<models::QuizPinQuestion>>,
    #[serde(rename = "results", skip_serializing_if = "Option::is_none")]
    pub results: Option<Vec<models::QuizPinResult>>,
}

impl QuizPinData {
    /// This field includes all quiz data including questions, options, and results.
    pub fn new() -> QuizPinData {
        QuizPinData {
            questions: None,
            results: None,
        }
    }
}

