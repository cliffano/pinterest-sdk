/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The CatalogsFeedValidationErrors model module.
 * @module model/CatalogsFeedValidationErrors
 * @version 5.3.0
 */
class CatalogsFeedValidationErrors {
    /**
     * @member {Number} fetch_error
     * @type {Number}
     */
    fetch_error;
    /**
     * @member {Number} fetch_inactive_feed_error
     * @type {Number}
     */
    fetch_inactive_feed_error;
    /**
     * @member {Number} encoding_error
     * @type {Number}
     */
    encoding_error;
    /**
     * @member {Number} delimiter_error
     * @type {Number}
     */
    delimiter_error;
    /**
     * @member {Number} required_columns_missing
     * @type {Number}
     */
    required_columns_missing;
    /**
     * @member {Number} image_link_invalid
     * @type {Number}
     */
    image_link_invalid;
    /**
     * @member {Number} itemid_missing
     * @type {Number}
     */
    itemid_missing;
    /**
     * @member {Number} title_missing
     * @type {Number}
     */
    title_missing;
    /**
     * @member {Number} description_missing
     * @type {Number}
     */
    description_missing;
    /**
     * @member {Number} product_category_invalid
     * @type {Number}
     */
    product_category_invalid;
    /**
     * @member {Number} product_link_missing
     * @type {Number}
     */
    product_link_missing;
    /**
     * @member {Number} image_link_missing
     * @type {Number}
     */
    image_link_missing;
    /**
     * @member {Number} availability_invalid
     * @type {Number}
     */
    availability_invalid;
    /**
     * @member {Number} product_price_invalid
     * @type {Number}
     */
    product_price_invalid;
    /**
     * @member {Number} link_format_invalid
     * @type {Number}
     */
    link_format_invalid;
    /**
     * @member {Number} parse_line_error
     * @type {Number}
     */
    parse_line_error;
    /**
     * @member {Number} adwords_format_invalid
     * @type {Number}
     */
    adwords_format_invalid;
    /**
     * @member {Number} product_category_missing
     * @type {Number}
     */
    product_category_missing;
    /**
     * @member {Number} internal_service_error
     * @type {Number}
     */
    internal_service_error;
    /**
     * @member {Number} no_verified_domain
     * @type {Number}
     */
    no_verified_domain;
    /**
     * @member {Number} adult_invalid
     * @type {Number}
     */
    adult_invalid;
    /**
     * @member {Number} invalid_domain
     * @type {Number}
     */
    invalid_domain;
    /**
     * @member {Number} feed_length_too_long
     * @type {Number}
     */
    feed_length_too_long;
    /**
     * @member {Number} link_length_too_long
     * @type {Number}
     */
    link_length_too_long;
    /**
     * @member {Number} malformed_xml
     * @type {Number}
     */
    malformed_xml;
    /**
     * @member {Number} redirect_invalid
     * @type {Number}
     */
    redirect_invalid;
    /**
     * @member {Number} price_missing
     * @type {Number}
     */
    price_missing;
    /**
     * @member {Number} feed_too_small
     * @type {Number}
     */
    feed_too_small;
    /**
     * @member {Number} condition_invalid
     * @type {Number}
     */
    condition_invalid;
    /**
     * @member {Number} shopify_no_products
     * @type {Number}
     */
    shopify_no_products;
    /**
     * @member {Number} max_items_per_item_group_exceeded
     * @type {Number}
     */
    max_items_per_item_group_exceeded;
    /**
     * @member {Number} item_main_image_download_failure
     * @type {Number}
     */
    item_main_image_download_failure;
    /**
     * @member {Number} pinjoin_content_unsafe
     * @type {Number}
     */
    pinjoin_content_unsafe;
    /**
     * @member {Number} blocklisted_image_signature
     * @type {Number}
     */
    blocklisted_image_signature;

    

    /**
     * Constructs a new <code>CatalogsFeedValidationErrors</code>.
     * @alias module:model/CatalogsFeedValidationErrors
     */
    constructor() { 
        
        CatalogsFeedValidationErrors.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsFeedValidationErrors</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsFeedValidationErrors} obj Optional instance to populate.
     * @return {module:model/CatalogsFeedValidationErrors} The populated <code>CatalogsFeedValidationErrors</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsFeedValidationErrors();

            if (data.hasOwnProperty('fetch_error')) {
                obj['fetch_error'] = ApiClient.convertToType(data['fetch_error'], 'Number');
            }
            if (data.hasOwnProperty('fetch_inactive_feed_error')) {
                obj['fetch_inactive_feed_error'] = ApiClient.convertToType(data['fetch_inactive_feed_error'], 'Number');
            }
            if (data.hasOwnProperty('encoding_error')) {
                obj['encoding_error'] = ApiClient.convertToType(data['encoding_error'], 'Number');
            }
            if (data.hasOwnProperty('delimiter_error')) {
                obj['delimiter_error'] = ApiClient.convertToType(data['delimiter_error'], 'Number');
            }
            if (data.hasOwnProperty('required_columns_missing')) {
                obj['required_columns_missing'] = ApiClient.convertToType(data['required_columns_missing'], 'Number');
            }
            if (data.hasOwnProperty('image_link_invalid')) {
                obj['image_link_invalid'] = ApiClient.convertToType(data['image_link_invalid'], 'Number');
            }
            if (data.hasOwnProperty('itemid_missing')) {
                obj['itemid_missing'] = ApiClient.convertToType(data['itemid_missing'], 'Number');
            }
            if (data.hasOwnProperty('title_missing')) {
                obj['title_missing'] = ApiClient.convertToType(data['title_missing'], 'Number');
            }
            if (data.hasOwnProperty('description_missing')) {
                obj['description_missing'] = ApiClient.convertToType(data['description_missing'], 'Number');
            }
            if (data.hasOwnProperty('product_category_invalid')) {
                obj['product_category_invalid'] = ApiClient.convertToType(data['product_category_invalid'], 'Number');
            }
            if (data.hasOwnProperty('product_link_missing')) {
                obj['product_link_missing'] = ApiClient.convertToType(data['product_link_missing'], 'Number');
            }
            if (data.hasOwnProperty('image_link_missing')) {
                obj['image_link_missing'] = ApiClient.convertToType(data['image_link_missing'], 'Number');
            }
            if (data.hasOwnProperty('availability_invalid')) {
                obj['availability_invalid'] = ApiClient.convertToType(data['availability_invalid'], 'Number');
            }
            if (data.hasOwnProperty('product_price_invalid')) {
                obj['product_price_invalid'] = ApiClient.convertToType(data['product_price_invalid'], 'Number');
            }
            if (data.hasOwnProperty('link_format_invalid')) {
                obj['link_format_invalid'] = ApiClient.convertToType(data['link_format_invalid'], 'Number');
            }
            if (data.hasOwnProperty('parse_line_error')) {
                obj['parse_line_error'] = ApiClient.convertToType(data['parse_line_error'], 'Number');
            }
            if (data.hasOwnProperty('adwords_format_invalid')) {
                obj['adwords_format_invalid'] = ApiClient.convertToType(data['adwords_format_invalid'], 'Number');
            }
            if (data.hasOwnProperty('product_category_missing')) {
                obj['product_category_missing'] = ApiClient.convertToType(data['product_category_missing'], 'Number');
            }
            if (data.hasOwnProperty('internal_service_error')) {
                obj['internal_service_error'] = ApiClient.convertToType(data['internal_service_error'], 'Number');
            }
            if (data.hasOwnProperty('no_verified_domain')) {
                obj['no_verified_domain'] = ApiClient.convertToType(data['no_verified_domain'], 'Number');
            }
            if (data.hasOwnProperty('adult_invalid')) {
                obj['adult_invalid'] = ApiClient.convertToType(data['adult_invalid'], 'Number');
            }
            if (data.hasOwnProperty('invalid_domain')) {
                obj['invalid_domain'] = ApiClient.convertToType(data['invalid_domain'], 'Number');
            }
            if (data.hasOwnProperty('feed_length_too_long')) {
                obj['feed_length_too_long'] = ApiClient.convertToType(data['feed_length_too_long'], 'Number');
            }
            if (data.hasOwnProperty('link_length_too_long')) {
                obj['link_length_too_long'] = ApiClient.convertToType(data['link_length_too_long'], 'Number');
            }
            if (data.hasOwnProperty('malformed_xml')) {
                obj['malformed_xml'] = ApiClient.convertToType(data['malformed_xml'], 'Number');
            }
            if (data.hasOwnProperty('redirect_invalid')) {
                obj['redirect_invalid'] = ApiClient.convertToType(data['redirect_invalid'], 'Number');
            }
            if (data.hasOwnProperty('price_missing')) {
                obj['price_missing'] = ApiClient.convertToType(data['price_missing'], 'Number');
            }
            if (data.hasOwnProperty('feed_too_small')) {
                obj['feed_too_small'] = ApiClient.convertToType(data['feed_too_small'], 'Number');
            }
            if (data.hasOwnProperty('condition_invalid')) {
                obj['condition_invalid'] = ApiClient.convertToType(data['condition_invalid'], 'Number');
            }
            if (data.hasOwnProperty('shopify_no_products')) {
                obj['shopify_no_products'] = ApiClient.convertToType(data['shopify_no_products'], 'Number');
            }
            if (data.hasOwnProperty('max_items_per_item_group_exceeded')) {
                obj['max_items_per_item_group_exceeded'] = ApiClient.convertToType(data['max_items_per_item_group_exceeded'], 'Number');
            }
            if (data.hasOwnProperty('item_main_image_download_failure')) {
                obj['item_main_image_download_failure'] = ApiClient.convertToType(data['item_main_image_download_failure'], 'Number');
            }
            if (data.hasOwnProperty('pinjoin_content_unsafe')) {
                obj['pinjoin_content_unsafe'] = ApiClient.convertToType(data['pinjoin_content_unsafe'], 'Number');
            }
            if (data.hasOwnProperty('blocklisted_image_signature')) {
                obj['blocklisted_image_signature'] = ApiClient.convertToType(data['blocklisted_image_signature'], 'Number');
            }
        }
        return obj;
    }
}



export default CatalogsFeedValidationErrors;

