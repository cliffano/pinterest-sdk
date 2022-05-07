/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct AdAccount {
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "owner", skip_serializing_if = "Option::is_none")]
    pub owner: Option<Box<crate::models::AdAccountOwner>>,
    #[serde(rename = "country", skip_serializing_if = "Option::is_none")]
    pub country: Option<crate::models::Country>,
    #[serde(rename = "currency", skip_serializing_if = "Option::is_none")]
    pub currency: Option<crate::models::Currency>,
}

impl AdAccount {
    pub fn new() -> AdAccount {
        AdAccount {
            id: None,
            name: None,
            owner: None,
            country: None,
            currency: None,
        }
    }
}


