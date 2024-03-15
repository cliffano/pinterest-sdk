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
pub struct DeliveryMetricsResponseItemsInner {
    /// Metric's name.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    /// Category name
    #[serde(rename = "category", skip_serializing_if = "Option::is_none")]
    pub category: Option<Category>,
    /// How the metric is defined.
    #[serde(rename = "definition", skip_serializing_if = "Option::is_none")]
    pub definition: Option<String>,
    /// Display name, when available. If unavaible it will not be returned. Matches how the metric is named in our native tools like Pinterest Ads Manager.
    #[serde(rename = "display_name", skip_serializing_if = "Option::is_none")]
    pub display_name: Option<String>,
}

impl DeliveryMetricsResponseItemsInner {
    pub fn new() -> DeliveryMetricsResponseItemsInner {
        DeliveryMetricsResponseItemsInner {
            name: None,
            category: None,
            definition: None,
            display_name: None,
        }
    }
}
/// Category name
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Category {
    #[serde(rename = "ADS")]
    Ads,
    #[serde(rename = "ORGANIC")]
    Organic,
}

impl Default for Category {
    fn default() -> Category {
        Self::Ads
    }
}

