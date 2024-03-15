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
pub struct SsioAccountResponse {
    /// Advertiser eligible to create order lines
    #[serde(rename = "eligible", skip_serializing_if = "Option::is_none")]
    pub eligible: Option<bool>,
    /// Advertiser eligible to update order lines
    #[serde(rename = "can_edit", skip_serializing_if = "Option::is_none")]
    pub can_edit: Option<bool>,
    /// An array of Salesforce account information that includes address, io terms, etc.
    #[serde(rename = "billto_infos", skip_serializing_if = "Option::is_none")]
    pub billto_infos: Option<Vec<models::SsioAccountItem>>,
    #[serde(rename = "currency", skip_serializing_if = "Option::is_none")]
    pub currency: Option<String>,
    #[serde(rename = "pmp_names", skip_serializing_if = "Option::is_none")]
    pub pmp_names: Option<Vec<models::SsioAccountPmpName>>,
    /// Error indicator from Salesforce which could be \"No Error\"
    #[serde(rename = "error", skip_serializing_if = "Option::is_none")]
    pub error: Option<String>,
}

impl SsioAccountResponse {
    pub fn new() -> SsioAccountResponse {
        SsioAccountResponse {
            eligible: None,
            can_edit: None,
            billto_infos: None,
            currency: None,
            pmp_names: None,
            error: None,
        }
    }
}

