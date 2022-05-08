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
pub struct CatalogsFeedValidationWarnings {
    #[serde(rename = "title_length_too_long", skip_serializing_if = "Option::is_none")]
    pub title_length_too_long: Option<i32>,
    #[serde(rename = "description_length_too_long", skip_serializing_if = "Option::is_none")]
    pub description_length_too_long: Option<i32>,
    #[serde(rename = "gender_invalid", skip_serializing_if = "Option::is_none")]
    pub gender_invalid: Option<i32>,
    #[serde(rename = "age_group_invalid", skip_serializing_if = "Option::is_none")]
    pub age_group_invalid: Option<i32>,
    #[serde(rename = "size_type_invalid", skip_serializing_if = "Option::is_none")]
    pub size_type_invalid: Option<i32>,
    #[serde(rename = "link_format_warning", skip_serializing_if = "Option::is_none")]
    pub link_format_warning: Option<i32>,
    #[serde(rename = "duplicate_products", skip_serializing_if = "Option::is_none")]
    pub duplicate_products: Option<i32>,
    #[serde(rename = "duplicate_links", skip_serializing_if = "Option::is_none")]
    pub duplicate_links: Option<i32>,
    #[serde(rename = "sales_price_invalid", skip_serializing_if = "Option::is_none")]
    pub sales_price_invalid: Option<i32>,
    #[serde(rename = "product_category_depth_warning", skip_serializing_if = "Option::is_none")]
    pub product_category_depth_warning: Option<i32>,
    #[serde(rename = "adwords_same_as_link", skip_serializing_if = "Option::is_none")]
    pub adwords_same_as_link: Option<i32>,
    #[serde(rename = "duplicate_headers", skip_serializing_if = "Option::is_none")]
    pub duplicate_headers: Option<i32>,
    #[serde(rename = "fetch_same_signature", skip_serializing_if = "Option::is_none")]
    pub fetch_same_signature: Option<i32>,
    #[serde(rename = "adwords_format_warning", skip_serializing_if = "Option::is_none")]
    pub adwords_format_warning: Option<i32>,
    #[serde(rename = "additional_image_link_warning", skip_serializing_if = "Option::is_none")]
    pub additional_image_link_warning: Option<i32>,
    #[serde(rename = "image_link_warning", skip_serializing_if = "Option::is_none")]
    pub image_link_warning: Option<i32>,
    #[serde(rename = "shipping_invalid", skip_serializing_if = "Option::is_none")]
    pub shipping_invalid: Option<i32>,
    #[serde(rename = "tax_invalid", skip_serializing_if = "Option::is_none")]
    pub tax_invalid: Option<i32>,
    #[serde(rename = "shipping_weight_invalid", skip_serializing_if = "Option::is_none")]
    pub shipping_weight_invalid: Option<i32>,
    #[serde(rename = "expiration_date_invalid", skip_serializing_if = "Option::is_none")]
    pub expiration_date_invalid: Option<i32>,
    #[serde(rename = "availability_date_invalid", skip_serializing_if = "Option::is_none")]
    pub availability_date_invalid: Option<i32>,
    #[serde(rename = "sale_date_invalid", skip_serializing_if = "Option::is_none")]
    pub sale_date_invalid: Option<i32>,
    #[serde(rename = "weight_unit_invalid", skip_serializing_if = "Option::is_none")]
    pub weight_unit_invalid: Option<i32>,
    #[serde(rename = "is_bundle_invalid", skip_serializing_if = "Option::is_none")]
    pub is_bundle_invalid: Option<i32>,
    #[serde(rename = "updated_time_invalid", skip_serializing_if = "Option::is_none")]
    pub updated_time_invalid: Option<i32>,
    #[serde(rename = "custom_label_length_too_long", skip_serializing_if = "Option::is_none")]
    pub custom_label_length_too_long: Option<i32>,
    #[serde(rename = "product_type_length_too_long", skip_serializing_if = "Option::is_none")]
    pub product_type_length_too_long: Option<i32>,
    #[serde(rename = "too_many_additional_image_links", skip_serializing_if = "Option::is_none")]
    pub too_many_additional_image_links: Option<i32>,
    #[serde(rename = "multipack_invalid", skip_serializing_if = "Option::is_none")]
    pub multipack_invalid: Option<i32>,
    #[serde(rename = "indexed_product_count_large_delta", skip_serializing_if = "Option::is_none")]
    pub indexed_product_count_large_delta: Option<i32>,
    #[serde(rename = "item_additional_image_download_failure", skip_serializing_if = "Option::is_none")]
    pub item_additional_image_download_failure: Option<i32>,
    #[serde(rename = "optional_product_category_missing", skip_serializing_if = "Option::is_none")]
    pub optional_product_category_missing: Option<i32>,
    #[serde(rename = "optional_product_category_invalid", skip_serializing_if = "Option::is_none")]
    pub optional_product_category_invalid: Option<i32>,
    #[serde(rename = "optional_condition_missing", skip_serializing_if = "Option::is_none")]
    pub optional_condition_missing: Option<i32>,
    #[serde(rename = "optional_condition_invalid", skip_serializing_if = "Option::is_none")]
    pub optional_condition_invalid: Option<i32>,
    #[serde(rename = "ios_deep_link_invalid", skip_serializing_if = "Option::is_none")]
    pub ios_deep_link_invalid: Option<i32>,
    #[serde(rename = "android_deep_link_invalid", skip_serializing_if = "Option::is_none")]
    pub android_deep_link_invalid: Option<i32>,
    #[serde(rename = "availability_normalized", skip_serializing_if = "Option::is_none")]
    pub availability_normalized: Option<i32>,
    #[serde(rename = "condition_normalized", skip_serializing_if = "Option::is_none")]
    pub condition_normalized: Option<i32>,
    #[serde(rename = "gender_normalized", skip_serializing_if = "Option::is_none")]
    pub gender_normalized: Option<i32>,
    #[serde(rename = "size_type_normalized", skip_serializing_if = "Option::is_none")]
    pub size_type_normalized: Option<i32>,
    #[serde(rename = "age_group_normalized", skip_serializing_if = "Option::is_none")]
    pub age_group_normalized: Option<i32>,
    #[serde(rename = "utm_source_auto_corrected", skip_serializing_if = "Option::is_none")]
    pub utm_source_auto_corrected: Option<i32>,
    #[serde(rename = "country_does_not_map_to_currency", skip_serializing_if = "Option::is_none")]
    pub country_does_not_map_to_currency: Option<i32>,
    #[serde(rename = "min_ad_price_invalid", skip_serializing_if = "Option::is_none")]
    pub min_ad_price_invalid: Option<i32>,
}

impl CatalogsFeedValidationWarnings {
    pub fn new() -> CatalogsFeedValidationWarnings {
        CatalogsFeedValidationWarnings {
            title_length_too_long: None,
            description_length_too_long: None,
            gender_invalid: None,
            age_group_invalid: None,
            size_type_invalid: None,
            link_format_warning: None,
            duplicate_products: None,
            duplicate_links: None,
            sales_price_invalid: None,
            product_category_depth_warning: None,
            adwords_same_as_link: None,
            duplicate_headers: None,
            fetch_same_signature: None,
            adwords_format_warning: None,
            additional_image_link_warning: None,
            image_link_warning: None,
            shipping_invalid: None,
            tax_invalid: None,
            shipping_weight_invalid: None,
            expiration_date_invalid: None,
            availability_date_invalid: None,
            sale_date_invalid: None,
            weight_unit_invalid: None,
            is_bundle_invalid: None,
            updated_time_invalid: None,
            custom_label_length_too_long: None,
            product_type_length_too_long: None,
            too_many_additional_image_links: None,
            multipack_invalid: None,
            indexed_product_count_large_delta: None,
            item_additional_image_download_failure: None,
            optional_product_category_missing: None,
            optional_product_category_invalid: None,
            optional_condition_missing: None,
            optional_condition_invalid: None,
            ios_deep_link_invalid: None,
            android_deep_link_invalid: None,
            availability_normalized: None,
            condition_normalized: None,
            gender_normalized: None,
            size_type_normalized: None,
            age_group_normalized: None,
            utm_source_auto_corrected: None,
            country_does_not_map_to_currency: None,
            min_ad_price_invalid: None,
        }
    }
}

