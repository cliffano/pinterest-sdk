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
import TrackingUrls from './TrackingUrls';

/**
 * The AdCommonTrackingUrls model module.
 * @module model/AdCommonTrackingUrls
 * @version 1.1.1-pre.0
 */
class AdCommonTrackingUrls {
    /**
     * Constructs a new <code>AdCommonTrackingUrls</code>.
     * @alias module:model/AdCommonTrackingUrls
     * @implements module:model/TrackingUrls
     */
    constructor() { 
        TrackingUrls.initialize(this);
        AdCommonTrackingUrls.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AdCommonTrackingUrls</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdCommonTrackingUrls} obj Optional instance to populate.
     * @return {module:model/AdCommonTrackingUrls} The populated <code>AdCommonTrackingUrls</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdCommonTrackingUrls();
            TrackingUrls.constructFromObject(data, obj);

            if (data.hasOwnProperty('impression')) {
                obj['impression'] = ApiClient.convertToType(data['impression'], ['String']);
            }
            if (data.hasOwnProperty('click')) {
                obj['click'] = ApiClient.convertToType(data['click'], ['String']);
            }
            if (data.hasOwnProperty('engagement')) {
                obj['engagement'] = ApiClient.convertToType(data['engagement'], ['String']);
            }
            if (data.hasOwnProperty('buyable_button')) {
                obj['buyable_button'] = ApiClient.convertToType(data['buyable_button'], ['String']);
            }
            if (data.hasOwnProperty('audience_verification')) {
                obj['audience_verification'] = ApiClient.convertToType(data['audience_verification'], ['String']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>AdCommonTrackingUrls</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>AdCommonTrackingUrls</code>.
     */
    static validateJSON(data) {
        // ensure the json data is an array
        if (!Array.isArray(data['impression'])) {
            throw new Error("Expected the field `impression` to be an array in the JSON data but got " + data['impression']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['click'])) {
            throw new Error("Expected the field `click` to be an array in the JSON data but got " + data['click']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['engagement'])) {
            throw new Error("Expected the field `engagement` to be an array in the JSON data but got " + data['engagement']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['buyable_button'])) {
            throw new Error("Expected the field `buyable_button` to be an array in the JSON data but got " + data['buyable_button']);
        }
        // ensure the json data is an array
        if (!Array.isArray(data['audience_verification'])) {
            throw new Error("Expected the field `audience_verification` to be an array in the JSON data but got " + data['audience_verification']);
        }

        return true;
    }


}



/**
 * @member {Array.<String>} impression
 */
AdCommonTrackingUrls.prototype['impression'] = undefined;

/**
 * @member {Array.<String>} click
 */
AdCommonTrackingUrls.prototype['click'] = undefined;

/**
 * @member {Array.<String>} engagement
 */
AdCommonTrackingUrls.prototype['engagement'] = undefined;

/**
 * @member {Array.<String>} buyable_button
 */
AdCommonTrackingUrls.prototype['buyable_button'] = undefined;

/**
 * @member {Array.<String>} audience_verification
 */
AdCommonTrackingUrls.prototype['audience_verification'] = undefined;


// Implement TrackingUrls interface:
/**
 * @member {Array.<String>} impression
 */
TrackingUrls.prototype['impression'] = undefined;
/**
 * @member {Array.<String>} click
 */
TrackingUrls.prototype['click'] = undefined;
/**
 * @member {Array.<String>} engagement
 */
TrackingUrls.prototype['engagement'] = undefined;
/**
 * @member {Array.<String>} buyable_button
 */
TrackingUrls.prototype['buyable_button'] = undefined;
/**
 * @member {Array.<String>} audience_verification
 */
TrackingUrls.prototype['audience_verification'] = undefined;




export default AdCommonTrackingUrls;
