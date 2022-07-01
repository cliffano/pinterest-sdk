/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


export interface CatalogsFeedValidationErrors { 
    fetch_error?: number;
    fetch_inactive_feed_error?: number;
    encoding_error?: number;
    delimiter_error?: number;
    required_columns_missing?: number;
    image_link_invalid?: number;
    itemid_missing?: number;
    title_missing?: number;
    description_missing?: number;
    product_category_invalid?: number;
    product_link_missing?: number;
    image_link_missing?: number;
    availability_invalid?: number;
    product_price_invalid?: number;
    link_format_invalid?: number;
    parse_line_error?: number;
    adwords_format_invalid?: number;
    product_category_missing?: number;
    internal_service_error?: number;
    no_verified_domain?: number;
    adult_invalid?: number;
    invalid_domain?: number;
    feed_length_too_long?: number;
    link_length_too_long?: number;
    malformed_xml?: number;
    redirect_invalid?: number;
    price_missing?: number;
    feed_too_small?: number;
    condition_invalid?: number;
    shopify_no_products?: number;
    max_items_per_item_group_exceeded?: number;
    item_main_image_download_failure?: number;
    pinjoin_content_unsafe?: number;
    blocklisted_image_signature?: number;
}

