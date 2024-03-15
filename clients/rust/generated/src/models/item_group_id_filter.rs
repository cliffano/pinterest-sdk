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
pub struct ItemGroupIdFilter {
    #[serde(rename = "ITEM_GROUP_ID")]
    pub item_group_id: models::CatalogsProductGroupMultipleStringCriteria,
}

impl ItemGroupIdFilter {
    pub fn new(item_group_id: models::CatalogsProductGroupMultipleStringCriteria) -> ItemGroupIdFilter {
        ItemGroupIdFilter {
            item_group_id,
        }
    }
}

