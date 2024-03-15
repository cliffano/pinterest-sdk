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
pub struct CatalogsProduct {
    #[serde(rename = "metadata")]
    pub metadata: Box<models::CatalogsProductMetadata>,
    #[serde(rename = "pin", deserialize_with = "Option::deserialize")]
    pub pin: Option<Box<models::Pin>>,
}

impl CatalogsProduct {
    pub fn new(metadata: models::CatalogsProductMetadata, pin: Option<models::Pin>) -> CatalogsProduct {
        CatalogsProduct {
            metadata: Box::new(metadata),
            pin: if let Some(x) = pin {Some(Box::new(x))} else {None},
        }
    }
}

