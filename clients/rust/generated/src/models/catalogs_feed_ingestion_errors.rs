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
pub struct CatalogsFeedIngestionErrors {
    /// We experienced a technical difficulty and were unable to ingest this some items. The next ingestion will happen in 24 hours.
    #[serde(rename = "LINE_LEVEL_INTERNAL_ERROR", skip_serializing_if = "Option::is_none")]
    pub line_level_internal_error: Option<i32>,
    /// The product count has decreased by more than 99% compared to the last successful ingestion.
    #[serde(rename = "LARGE_PRODUCT_COUNT_DECREASE", skip_serializing_if = "Option::is_none")]
    pub large_product_count_decrease: Option<LargeProductCountDecrease>,
    /// We detected an issue with your account and are not currently ingesting your items. Please review our policies at policy.pinterest.com/community-guidelines#section-spam or contact us at help.pinterest.com/contact for more information.
    #[serde(rename = "ACCOUNT_FLAGGED", skip_serializing_if = "Option::is_none")]
    pub account_flagged: Option<i32>,
    /// We experienced a technical difficulty and were unable to download some images. The next download attempt will happen in 24 hours.
    #[serde(rename = "IMAGE_LEVEL_INTERNAL_ERROR", skip_serializing_if = "Option::is_none")]
    pub image_level_internal_error: Option<i32>,
    /// Image files are unreadable. Please upload new files to continue.
    #[serde(rename = "IMAGE_FILE_NOT_ACCESSIBLE", skip_serializing_if = "Option::is_none")]
    pub image_file_not_accessible: Option<i32>,
    /// Image files are unreadable. Please check your link and upload new files to continue.
    #[serde(rename = "IMAGE_MALFORMED_URL", skip_serializing_if = "Option::is_none")]
    pub image_malformed_url: Option<i32>,
    /// Image files are unreadable. Please upload new files to continue.
    #[serde(rename = "IMAGE_FILE_NOT_FOUND", skip_serializing_if = "Option::is_none")]
    pub image_file_not_found: Option<i32>,
    /// Image files are unreadable. Please upload new files to continue.
    #[serde(rename = "IMAGE_INVALID_FILE", skip_serializing_if = "Option::is_none")]
    pub image_invalid_file: Option<i32>,
}

impl CatalogsFeedIngestionErrors {
    pub fn new() -> CatalogsFeedIngestionErrors {
        CatalogsFeedIngestionErrors {
            line_level_internal_error: None,
            large_product_count_decrease: None,
            account_flagged: None,
            image_level_internal_error: None,
            image_file_not_accessible: None,
            image_malformed_url: None,
            image_file_not_found: None,
            image_invalid_file: None,
        }
    }
}
/// The product count has decreased by more than 99% compared to the last successful ingestion.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum LargeProductCountDecrease {
    #[serde(rename = "1")]
    Variant1,
}

impl Default for LargeProductCountDecrease {
    fn default() -> LargeProductCountDecrease {
        Self::Variant1
    }
}

