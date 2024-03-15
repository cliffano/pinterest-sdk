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
pub struct BidFloorSpec {
    #[serde(rename = "countries", skip_serializing_if = "Option::is_none")]
    pub countries: Option<Vec<models::Country>>,
    #[serde(rename = "currency")]
    pub currency: models::Currency,
    #[serde(rename = "objective_type", skip_serializing_if = "Option::is_none")]
    pub objective_type: Option<models::ObjectiveType>,
    #[serde(rename = "billable_event")]
    pub billable_event: models::ActionType,
    #[serde(rename = "optimization_goal_metadata", skip_serializing_if = "Option::is_none")]
    pub optimization_goal_metadata: Option<Box<models::OptimizationGoalMetadata>>,
    #[serde(rename = "creative_type", skip_serializing_if = "Option::is_none")]
    pub creative_type: Option<models::CreativeType>,
}

impl BidFloorSpec {
    pub fn new(currency: models::Currency, billable_event: models::ActionType) -> BidFloorSpec {
        BidFloorSpec {
            countries: None,
            currency,
            objective_type: None,
            billable_event,
            optimization_goal_metadata: None,
            creative_type: None,
        }
    }
}

