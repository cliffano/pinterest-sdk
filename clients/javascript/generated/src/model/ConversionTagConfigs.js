/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The ConversionTagConfigs model module.
 * @module model/ConversionTagConfigs
 * @version 1.1.1-pre.0
 */
class ConversionTagConfigs {
    /**
     * Constructs a new <code>ConversionTagConfigs</code>.
     * @alias module:model/ConversionTagConfigs
     */
    constructor() { 
        
        ConversionTagConfigs.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ConversionTagConfigs</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ConversionTagConfigs} obj Optional instance to populate.
     * @return {module:model/ConversionTagConfigs} The populated <code>ConversionTagConfigs</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ConversionTagConfigs();

            if (data.hasOwnProperty('aem_enabled')) {
                obj['aem_enabled'] = ApiClient.convertToType(data['aem_enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('md_frequency')) {
                obj['md_frequency'] = ApiClient.convertToType(data['md_frequency'], 'Number');
            }
            if (data.hasOwnProperty('aem_fnln_enabled')) {
                obj['aem_fnln_enabled'] = ApiClient.convertToType(data['aem_fnln_enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('aem_ph_enabled')) {
                obj['aem_ph_enabled'] = ApiClient.convertToType(data['aem_ph_enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('aem_ge_enabled')) {
                obj['aem_ge_enabled'] = ApiClient.convertToType(data['aem_ge_enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('aem_db_enabled')) {
                obj['aem_db_enabled'] = ApiClient.convertToType(data['aem_db_enabled'], 'Boolean');
            }
            if (data.hasOwnProperty('aem_loc_enabled')) {
                obj['aem_loc_enabled'] = ApiClient.convertToType(data['aem_loc_enabled'], 'Boolean');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>ConversionTagConfigs</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>ConversionTagConfigs</code>.
     */
    static validateJSON(data) {

        return true;
    }


}



/**
 * Whether Automatic Enhanced Match email is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
 * @member {Boolean} aem_enabled
 * @default false
 */
ConversionTagConfigs.prototype['aem_enabled'] = false;

/**
 * Metadata ingestion frequency.
 * @member {Number} md_frequency
 * @default 1
 */
ConversionTagConfigs.prototype['md_frequency'] = 1;

/**
 * Whether Automatic Enhanced Match name is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
 * @member {Boolean} aem_fnln_enabled
 * @default false
 */
ConversionTagConfigs.prototype['aem_fnln_enabled'] = false;

/**
 * Whether Automatic Enhanced Match phone is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
 * @member {Boolean} aem_ph_enabled
 * @default false
 */
ConversionTagConfigs.prototype['aem_ph_enabled'] = false;

/**
 * Whether Automatic Enhanced Match gender is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
 * @member {Boolean} aem_ge_enabled
 * @default false
 */
ConversionTagConfigs.prototype['aem_ge_enabled'] = false;

/**
 * Whether Automatic Enhanced Match birthdate is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
 * @member {Boolean} aem_db_enabled
 * @default false
 */
ConversionTagConfigs.prototype['aem_db_enabled'] = false;

/**
 * Whether Automatic Enhanced Match location is enabled. See <a href=\"https://help.pinterest.com/en/business/article/enhanced-match\" target=\"_blank\">Enhanced match</a> for more information.
 * @member {Boolean} aem_loc_enabled
 * @default false
 */
ConversionTagConfigs.prototype['aem_loc_enabled'] = false;






export default ConversionTagConfigs;

