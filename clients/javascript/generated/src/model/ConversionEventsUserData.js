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
 * The ConversionEventsUserData model module.
 * @module model/ConversionEventsUserData
 * @version 1.1.1-pre.0
 */
class ConversionEventsUserData {
    /**
     * Constructs a new <code>ConversionEventsUserData</code>.
     * Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.
     * @alias module:model/ConversionEventsUserData
     */
    constructor() { 
        
        ConversionEventsUserData.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ConversionEventsUserData</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ConversionEventsUserData} obj Optional instance to populate.
     * @return {module:model/ConversionEventsUserData} The populated <code>ConversionEventsUserData</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ConversionEventsUserData();

            if (data.hasOwnProperty('ph')) {
                obj['ph'] = ApiClient.convertToType(data['ph'], ['String']);
            }
            if (data.hasOwnProperty('ge')) {
                obj['ge'] = ApiClient.convertToType(data['ge'], ['String']);
            }
            if (data.hasOwnProperty('db')) {
                obj['db'] = ApiClient.convertToType(data['db'], ['String']);
            }
            if (data.hasOwnProperty('ln')) {
                obj['ln'] = ApiClient.convertToType(data['ln'], ['String']);
            }
            if (data.hasOwnProperty('fn')) {
                obj['fn'] = ApiClient.convertToType(data['fn'], ['String']);
            }
            if (data.hasOwnProperty('ct')) {
                obj['ct'] = ApiClient.convertToType(data['ct'], ['String']);
            }
            if (data.hasOwnProperty('st')) {
                obj['st'] = ApiClient.convertToType(data['st'], ['String']);
            }
            if (data.hasOwnProperty('zp')) {
                obj['zp'] = ApiClient.convertToType(data['zp'], ['String']);
            }
            if (data.hasOwnProperty('country')) {
                obj['country'] = ApiClient.convertToType(data['country'], ['String']);
            }
            if (data.hasOwnProperty('external_id')) {
                obj['external_id'] = ApiClient.convertToType(data['external_id'], ['String']);
            }
            if (data.hasOwnProperty('click_id')) {
                obj['click_id'] = ApiClient.convertToType(data['click_id'], 'String');
            }
            if (data.hasOwnProperty('partner_id')) {
                obj['partner_id'] = ApiClient.convertToType(data['partner_id'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>ConversionEventsUserData</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>ConversionEventsUserData</code>.
     */
    static validateJSON(data) {
        // ensure the json data is an array
        if (!Array.isArray(data['ph'])) {
            throw new Error("Expected the field `ph` to be an array in the JSON data but got " + data['ph']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['ge'])) {
            throw new Error("Expected the field `ge` to be an array in the JSON data but got " + data['ge']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['db'])) {
            throw new Error("Expected the field `db` to be an array in the JSON data but got " + data['db']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['ln'])) {
            throw new Error("Expected the field `ln` to be an array in the JSON data but got " + data['ln']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['fn'])) {
            throw new Error("Expected the field `fn` to be an array in the JSON data but got " + data['fn']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['ct'])) {
            throw new Error("Expected the field `ct` to be an array in the JSON data but got " + data['ct']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['st'])) {
            throw new Error("Expected the field `st` to be an array in the JSON data but got " + data['st']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['zp'])) {
            throw new Error("Expected the field `zp` to be an array in the JSON data but got " + data['zp']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['country'])) {
            throw new Error("Expected the field `country` to be an array in the JSON data but got " + data['country']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['external_id'])) {
            throw new Error("Expected the field `external_id` to be an array in the JSON data but got " + data['external_id']);
        }
        // ensure the json data is a string
        if (data['click_id'] && !(typeof data['click_id'] === 'string' || data['click_id'] instanceof String)) {
            throw new Error("Expected the field `click_id` to be a primitive type in the JSON string but got " + data['click_id']);
        }
        // ensure the json data is a string
        if (data['partner_id'] && !(typeof data['partner_id'] === 'string' || data['partner_id'] instanceof String)) {
            throw new Error("Expected the field `partner_id` to be a primitive type in the JSON string but got " + data['partner_id']);
        }

        return true;
    }


}



/**
 * Sha256 hashes of user's phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
 * @member {Array.<String>} ph
 */
ConversionEventsUserData.prototype['ph'] = undefined;

/**
 * Sha256 hashes of user's gender, in lowercase. Either \"f\" or \"m\" or \"n\" for non-binary gender.
 * @member {Array.<String>} ge
 */
ConversionEventsUserData.prototype['ge'] = undefined;

/**
 * Sha256 hashes of user's date of birthday, given as year, month, and day.
 * @member {Array.<String>} db
 */
ConversionEventsUserData.prototype['db'] = undefined;

/**
 * Sha256 hashes of user's last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
 * @member {Array.<String>} ln
 */
ConversionEventsUserData.prototype['ln'] = undefined;

/**
 * Sha256 hashes of user's first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
 * @member {Array.<String>} fn
 */
ConversionEventsUserData.prototype['fn'] = undefined;

/**
 * Sha256 hashes of user's city, in lowercase, and without spaces or punctuation. User residency city (mostly billing).
 * @member {Array.<String>} ct
 */
ConversionEventsUserData.prototype['ct'] = undefined;

/**
 * Sha256 hashes of user's state, given as a two-letter code in lowercase. User residency state (mostly billing).
 * @member {Array.<String>} st
 */
ConversionEventsUserData.prototype['st'] = undefined;

/**
 * Sha256 hashes of user's zipcode, only digits. User residency zipcode (mostly billing).
 * @member {Array.<String>} zp
 */
ConversionEventsUserData.prototype['zp'] = undefined;

/**
 * Sha256 hashes of two-character ISO-3166 country code indicating the user's country, in lowercase.
 * @member {Array.<String>} country
 */
ConversionEventsUserData.prototype['country'] = undefined;

/**
 * Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA.
 * @member {Array.<String>} external_id
 */
ConversionEventsUserData.prototype['external_id'] = undefined;

/**
 * The unique identifier stored in _epik cookie on your domain or &epik= query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA.
 * @member {String} click_id
 */
ConversionEventsUserData.prototype['click_id'] = undefined;

/**
 * A unique identifier of visitors' information defined by third party partners. e.g RampID
 * @member {String} partner_id
 */
ConversionEventsUserData.prototype['partner_id'] = undefined;






export default ConversionEventsUserData;
