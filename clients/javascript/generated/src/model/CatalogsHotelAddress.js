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
 * The CatalogsHotelAddress model module.
 * @module model/CatalogsHotelAddress
 * @version 1.1.1-pre.0
 */
class CatalogsHotelAddress {
    /**
     * Constructs a new <code>CatalogsHotelAddress</code>.
     * @alias module:model/CatalogsHotelAddress
     */
    constructor() { 
        
        CatalogsHotelAddress.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CatalogsHotelAddress</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CatalogsHotelAddress} obj Optional instance to populate.
     * @return {module:model/CatalogsHotelAddress} The populated <code>CatalogsHotelAddress</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CatalogsHotelAddress();

            if (data.hasOwnProperty('addr1')) {
                obj['addr1'] = ApiClient.convertToType(data['addr1'], 'String');
            }
            if (data.hasOwnProperty('city')) {
                obj['city'] = ApiClient.convertToType(data['city'], 'String');
            }
            if (data.hasOwnProperty('region')) {
                obj['region'] = ApiClient.convertToType(data['region'], 'String');
            }
            if (data.hasOwnProperty('country')) {
                obj['country'] = ApiClient.convertToType(data['country'], 'String');
            }
            if (data.hasOwnProperty('postal_code')) {
                obj['postal_code'] = ApiClient.convertToType(data['postal_code'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>CatalogsHotelAddress</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>CatalogsHotelAddress</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['addr1'] && !(typeof data['addr1'] === 'string' || data['addr1'] instanceof String)) {
            throw new Error("Expected the field `addr1` to be a primitive type in the JSON string but got " + data['addr1']);
        }
        // ensure the json data is a string
        if (data['city'] && !(typeof data['city'] === 'string' || data['city'] instanceof String)) {
            throw new Error("Expected the field `city` to be a primitive type in the JSON string but got " + data['city']);
        }
        // ensure the json data is a string
        if (data['region'] && !(typeof data['region'] === 'string' || data['region'] instanceof String)) {
            throw new Error("Expected the field `region` to be a primitive type in the JSON string but got " + data['region']);
        }
        // ensure the json data is a string
        if (data['country'] && !(typeof data['country'] === 'string' || data['country'] instanceof String)) {
            throw new Error("Expected the field `country` to be a primitive type in the JSON string but got " + data['country']);
        }
        // ensure the json data is a string
        if (data['postal_code'] && !(typeof data['postal_code'] === 'string' || data['postal_code'] instanceof String)) {
            throw new Error("Expected the field `postal_code` to be a primitive type in the JSON string but got " + data['postal_code']);
        }

        return true;
    }


}



/**
 * Primary street address of hotel.
 * @member {String} addr1
 */
CatalogsHotelAddress.prototype['addr1'] = undefined;

/**
 * City where the hotel is located.
 * @member {String} city
 */
CatalogsHotelAddress.prototype['city'] = undefined;

/**
 * State, county, province, where the hotel is located.
 * @member {String} region
 */
CatalogsHotelAddress.prototype['region'] = undefined;

/**
 * Country where the hotel is located.
 * @member {String} country
 */
CatalogsHotelAddress.prototype['country'] = undefined;

/**
 * Required for countries with a postal code system. Postal or zip code of the hotel.
 * @member {String} postal_code
 */
CatalogsHotelAddress.prototype['postal_code'] = undefined;






export default CatalogsHotelAddress;

