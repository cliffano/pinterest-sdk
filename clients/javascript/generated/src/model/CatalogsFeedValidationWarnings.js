/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The CatalogsFeedValidationWarnings model module.
 * @module model/CatalogsFeedValidationWarnings
 * @version 1.0.1-pre.0
 */
class CatalogsFeedValidationWarnings {
    /**
     * Constructs a new <code>CatalogsFeedValidationWarnings</code>.
     * @alias module:model/CatalogsFeedValidationWarnings
     */
    constructor() { 
        
        CatalogsFeedValidationWarnings.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsFeedValidationWarnings</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsFeedValidationWarnings} obj Optional instance to populate.
     * @return {module:model/CatalogsFeedValidationWarnings} The populated <code>CatalogsFeedValidationWarnings</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsFeedValidationWarnings();

            if (data.hasOwnProperty('title_length_too_long')) {
                obj['title_length_too_long'] = ApiClient.convertToType(data['title_length_too_long'], 'Number');
            }
            if (data.hasOwnProperty('description_length_too_long')) {
                obj['description_length_too_long'] = ApiClient.convertToType(data['description_length_too_long'], 'Number');
            }
            if (data.hasOwnProperty('gender_invalid')) {
                obj['gender_invalid'] = ApiClient.convertToType(data['gender_invalid'], 'Number');
            }
            if (data.hasOwnProperty('age_group_invalid')) {
                obj['age_group_invalid'] = ApiClient.convertToType(data['age_group_invalid'], 'Number');
            }
            if (data.hasOwnProperty('size_type_invalid')) {
                obj['size_type_invalid'] = ApiClient.convertToType(data['size_type_invalid'], 'Number');
            }
            if (data.hasOwnProperty('link_format_warning')) {
                obj['link_format_warning'] = ApiClient.convertToType(data['link_format_warning'], 'Number');
            }
            if (data.hasOwnProperty('duplicate_products')) {
                obj['duplicate_products'] = ApiClient.convertToType(data['duplicate_products'], 'Number');
            }
            if (data.hasOwnProperty('duplicate_links')) {
                obj['duplicate_links'] = ApiClient.convertToType(data['duplicate_links'], 'Number');
            }
            if (data.hasOwnProperty('sales_price_invalid')) {
                obj['sales_price_invalid'] = ApiClient.convertToType(data['sales_price_invalid'], 'Number');
            }
            if (data.hasOwnProperty('product_category_depth_warning')) {
                obj['product_category_depth_warning'] = ApiClient.convertToType(data['product_category_depth_warning'], 'Number');
            }
            if (data.hasOwnProperty('adwords_same_as_link')) {
                obj['adwords_same_as_link'] = ApiClient.convertToType(data['adwords_same_as_link'], 'Number');
            }
            if (data.hasOwnProperty('duplicate_headers')) {
                obj['duplicate_headers'] = ApiClient.convertToType(data['duplicate_headers'], 'Number');
            }
            if (data.hasOwnProperty('fetch_same_signature')) {
                obj['fetch_same_signature'] = ApiClient.convertToType(data['fetch_same_signature'], 'Number');
            }
            if (data.hasOwnProperty('adwords_format_warning')) {
                obj['adwords_format_warning'] = ApiClient.convertToType(data['adwords_format_warning'], 'Number');
            }
            if (data.hasOwnProperty('additional_image_link_warning')) {
                obj['additional_image_link_warning'] = ApiClient.convertToType(data['additional_image_link_warning'], 'Number');
            }
            if (data.hasOwnProperty('image_link_warning')) {
                obj['image_link_warning'] = ApiClient.convertToType(data['image_link_warning'], 'Number');
            }
            if (data.hasOwnProperty('shipping_invalid')) {
                obj['shipping_invalid'] = ApiClient.convertToType(data['shipping_invalid'], 'Number');
            }
            if (data.hasOwnProperty('tax_invalid')) {
                obj['tax_invalid'] = ApiClient.convertToType(data['tax_invalid'], 'Number');
            }
            if (data.hasOwnProperty('shipping_weight_invalid')) {
                obj['shipping_weight_invalid'] = ApiClient.convertToType(data['shipping_weight_invalid'], 'Number');
            }
            if (data.hasOwnProperty('expiration_date_invalid')) {
                obj['expiration_date_invalid'] = ApiClient.convertToType(data['expiration_date_invalid'], 'Number');
            }
            if (data.hasOwnProperty('availability_date_invalid')) {
                obj['availability_date_invalid'] = ApiClient.convertToType(data['availability_date_invalid'], 'Number');
            }
            if (data.hasOwnProperty('sale_date_invalid')) {
                obj['sale_date_invalid'] = ApiClient.convertToType(data['sale_date_invalid'], 'Number');
            }
            if (data.hasOwnProperty('weight_unit_invalid')) {
                obj['weight_unit_invalid'] = ApiClient.convertToType(data['weight_unit_invalid'], 'Number');
            }
            if (data.hasOwnProperty('is_bundle_invalid')) {
                obj['is_bundle_invalid'] = ApiClient.convertToType(data['is_bundle_invalid'], 'Number');
            }
            if (data.hasOwnProperty('updated_time_invalid')) {
                obj['updated_time_invalid'] = ApiClient.convertToType(data['updated_time_invalid'], 'Number');
            }
            if (data.hasOwnProperty('custom_label_length_too_long')) {
                obj['custom_label_length_too_long'] = ApiClient.convertToType(data['custom_label_length_too_long'], 'Number');
            }
            if (data.hasOwnProperty('product_type_length_too_long')) {
                obj['product_type_length_too_long'] = ApiClient.convertToType(data['product_type_length_too_long'], 'Number');
            }
            if (data.hasOwnProperty('too_many_additional_image_links')) {
                obj['too_many_additional_image_links'] = ApiClient.convertToType(data['too_many_additional_image_links'], 'Number');
            }
            if (data.hasOwnProperty('multipack_invalid')) {
                obj['multipack_invalid'] = ApiClient.convertToType(data['multipack_invalid'], 'Number');
            }
            if (data.hasOwnProperty('indexed_product_count_large_delta')) {
                obj['indexed_product_count_large_delta'] = ApiClient.convertToType(data['indexed_product_count_large_delta'], 'Number');
            }
            if (data.hasOwnProperty('item_additional_image_download_failure')) {
                obj['item_additional_image_download_failure'] = ApiClient.convertToType(data['item_additional_image_download_failure'], 'Number');
            }
            if (data.hasOwnProperty('optional_product_category_missing')) {
                obj['optional_product_category_missing'] = ApiClient.convertToType(data['optional_product_category_missing'], 'Number');
            }
            if (data.hasOwnProperty('optional_product_category_invalid')) {
                obj['optional_product_category_invalid'] = ApiClient.convertToType(data['optional_product_category_invalid'], 'Number');
            }
            if (data.hasOwnProperty('optional_condition_missing')) {
                obj['optional_condition_missing'] = ApiClient.convertToType(data['optional_condition_missing'], 'Number');
            }
            if (data.hasOwnProperty('optional_condition_invalid')) {
                obj['optional_condition_invalid'] = ApiClient.convertToType(data['optional_condition_invalid'], 'Number');
            }
            if (data.hasOwnProperty('ios_deep_link_invalid')) {
                obj['ios_deep_link_invalid'] = ApiClient.convertToType(data['ios_deep_link_invalid'], 'Number');
            }
            if (data.hasOwnProperty('android_deep_link_invalid')) {
                obj['android_deep_link_invalid'] = ApiClient.convertToType(data['android_deep_link_invalid'], 'Number');
            }
            if (data.hasOwnProperty('availability_normalized')) {
                obj['availability_normalized'] = ApiClient.convertToType(data['availability_normalized'], 'Number');
            }
            if (data.hasOwnProperty('condition_normalized')) {
                obj['condition_normalized'] = ApiClient.convertToType(data['condition_normalized'], 'Number');
            }
            if (data.hasOwnProperty('gender_normalized')) {
                obj['gender_normalized'] = ApiClient.convertToType(data['gender_normalized'], 'Number');
            }
            if (data.hasOwnProperty('size_type_normalized')) {
                obj['size_type_normalized'] = ApiClient.convertToType(data['size_type_normalized'], 'Number');
            }
            if (data.hasOwnProperty('age_group_normalized')) {
                obj['age_group_normalized'] = ApiClient.convertToType(data['age_group_normalized'], 'Number');
            }
            if (data.hasOwnProperty('utm_source_auto_corrected')) {
                obj['utm_source_auto_corrected'] = ApiClient.convertToType(data['utm_source_auto_corrected'], 'Number');
            }
            if (data.hasOwnProperty('country_does_not_map_to_currency')) {
                obj['country_does_not_map_to_currency'] = ApiClient.convertToType(data['country_does_not_map_to_currency'], 'Number');
            }
            if (data.hasOwnProperty('min_ad_price_invalid')) {
                obj['min_ad_price_invalid'] = ApiClient.convertToType(data['min_ad_price_invalid'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {Number} title_length_too_long
 */
CatalogsFeedValidationWarnings.prototype['title_length_too_long'] = undefined;

/**
 * @member {Number} description_length_too_long
 */
CatalogsFeedValidationWarnings.prototype['description_length_too_long'] = undefined;

/**
 * @member {Number} gender_invalid
 */
CatalogsFeedValidationWarnings.prototype['gender_invalid'] = undefined;

/**
 * @member {Number} age_group_invalid
 */
CatalogsFeedValidationWarnings.prototype['age_group_invalid'] = undefined;

/**
 * @member {Number} size_type_invalid
 */
CatalogsFeedValidationWarnings.prototype['size_type_invalid'] = undefined;

/**
 * @member {Number} link_format_warning
 */
CatalogsFeedValidationWarnings.prototype['link_format_warning'] = undefined;

/**
 * @member {Number} duplicate_products
 */
CatalogsFeedValidationWarnings.prototype['duplicate_products'] = undefined;

/**
 * @member {Number} duplicate_links
 */
CatalogsFeedValidationWarnings.prototype['duplicate_links'] = undefined;

/**
 * @member {Number} sales_price_invalid
 */
CatalogsFeedValidationWarnings.prototype['sales_price_invalid'] = undefined;

/**
 * @member {Number} product_category_depth_warning
 */
CatalogsFeedValidationWarnings.prototype['product_category_depth_warning'] = undefined;

/**
 * @member {Number} adwords_same_as_link
 */
CatalogsFeedValidationWarnings.prototype['adwords_same_as_link'] = undefined;

/**
 * @member {Number} duplicate_headers
 */
CatalogsFeedValidationWarnings.prototype['duplicate_headers'] = undefined;

/**
 * @member {Number} fetch_same_signature
 */
CatalogsFeedValidationWarnings.prototype['fetch_same_signature'] = undefined;

/**
 * @member {Number} adwords_format_warning
 */
CatalogsFeedValidationWarnings.prototype['adwords_format_warning'] = undefined;

/**
 * @member {Number} additional_image_link_warning
 */
CatalogsFeedValidationWarnings.prototype['additional_image_link_warning'] = undefined;

/**
 * @member {Number} image_link_warning
 */
CatalogsFeedValidationWarnings.prototype['image_link_warning'] = undefined;

/**
 * @member {Number} shipping_invalid
 */
CatalogsFeedValidationWarnings.prototype['shipping_invalid'] = undefined;

/**
 * @member {Number} tax_invalid
 */
CatalogsFeedValidationWarnings.prototype['tax_invalid'] = undefined;

/**
 * @member {Number} shipping_weight_invalid
 */
CatalogsFeedValidationWarnings.prototype['shipping_weight_invalid'] = undefined;

/**
 * @member {Number} expiration_date_invalid
 */
CatalogsFeedValidationWarnings.prototype['expiration_date_invalid'] = undefined;

/**
 * @member {Number} availability_date_invalid
 */
CatalogsFeedValidationWarnings.prototype['availability_date_invalid'] = undefined;

/**
 * @member {Number} sale_date_invalid
 */
CatalogsFeedValidationWarnings.prototype['sale_date_invalid'] = undefined;

/**
 * @member {Number} weight_unit_invalid
 */
CatalogsFeedValidationWarnings.prototype['weight_unit_invalid'] = undefined;

/**
 * @member {Number} is_bundle_invalid
 */
CatalogsFeedValidationWarnings.prototype['is_bundle_invalid'] = undefined;

/**
 * @member {Number} updated_time_invalid
 */
CatalogsFeedValidationWarnings.prototype['updated_time_invalid'] = undefined;

/**
 * @member {Number} custom_label_length_too_long
 */
CatalogsFeedValidationWarnings.prototype['custom_label_length_too_long'] = undefined;

/**
 * @member {Number} product_type_length_too_long
 */
CatalogsFeedValidationWarnings.prototype['product_type_length_too_long'] = undefined;

/**
 * @member {Number} too_many_additional_image_links
 */
CatalogsFeedValidationWarnings.prototype['too_many_additional_image_links'] = undefined;

/**
 * @member {Number} multipack_invalid
 */
CatalogsFeedValidationWarnings.prototype['multipack_invalid'] = undefined;

/**
 * @member {Number} indexed_product_count_large_delta
 */
CatalogsFeedValidationWarnings.prototype['indexed_product_count_large_delta'] = undefined;

/**
 * @member {Number} item_additional_image_download_failure
 */
CatalogsFeedValidationWarnings.prototype['item_additional_image_download_failure'] = undefined;

/**
 * @member {Number} optional_product_category_missing
 */
CatalogsFeedValidationWarnings.prototype['optional_product_category_missing'] = undefined;

/**
 * @member {Number} optional_product_category_invalid
 */
CatalogsFeedValidationWarnings.prototype['optional_product_category_invalid'] = undefined;

/**
 * @member {Number} optional_condition_missing
 */
CatalogsFeedValidationWarnings.prototype['optional_condition_missing'] = undefined;

/**
 * @member {Number} optional_condition_invalid
 */
CatalogsFeedValidationWarnings.prototype['optional_condition_invalid'] = undefined;

/**
 * @member {Number} ios_deep_link_invalid
 */
CatalogsFeedValidationWarnings.prototype['ios_deep_link_invalid'] = undefined;

/**
 * @member {Number} android_deep_link_invalid
 */
CatalogsFeedValidationWarnings.prototype['android_deep_link_invalid'] = undefined;

/**
 * @member {Number} availability_normalized
 */
CatalogsFeedValidationWarnings.prototype['availability_normalized'] = undefined;

/**
 * @member {Number} condition_normalized
 */
CatalogsFeedValidationWarnings.prototype['condition_normalized'] = undefined;

/**
 * @member {Number} gender_normalized
 */
CatalogsFeedValidationWarnings.prototype['gender_normalized'] = undefined;

/**
 * @member {Number} size_type_normalized
 */
CatalogsFeedValidationWarnings.prototype['size_type_normalized'] = undefined;

/**
 * @member {Number} age_group_normalized
 */
CatalogsFeedValidationWarnings.prototype['age_group_normalized'] = undefined;

/**
 * @member {Number} utm_source_auto_corrected
 */
CatalogsFeedValidationWarnings.prototype['utm_source_auto_corrected'] = undefined;

/**
 * @member {Number} country_does_not_map_to_currency
 */
CatalogsFeedValidationWarnings.prototype['country_does_not_map_to_currency'] = undefined;

/**
 * @member {Number} min_ad_price_invalid
 */
CatalogsFeedValidationWarnings.prototype['min_ad_price_invalid'] = undefined;






export default CatalogsFeedValidationWarnings;

