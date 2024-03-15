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
import DataStatus from './DataStatus';

/**
 * The TopPinsAnalyticsResponsePinsInner model module.
 * @module model/TopPinsAnalyticsResponsePinsInner
 * @version 1.1.1-pre.0
 */
class TopPinsAnalyticsResponsePinsInner {
    /**
     * Constructs a new <code>TopPinsAnalyticsResponsePinsInner</code>.
     * Array with metrics, status, and pin id for the requested metric
     * @alias module:model/TopPinsAnalyticsResponsePinsInner
     */
    constructor() { 
        
        TopPinsAnalyticsResponsePinsInner.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TopPinsAnalyticsResponsePinsInner</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TopPinsAnalyticsResponsePinsInner} obj Optional instance to populate.
     * @return {module:model/TopPinsAnalyticsResponsePinsInner} The populated <code>TopPinsAnalyticsResponsePinsInner</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TopPinsAnalyticsResponsePinsInner();

            if (data.hasOwnProperty('metrics')) {
                obj['metrics'] = ApiClient.convertToType(data['metrics'], {'String': 'Number'});
            }
            if (data.hasOwnProperty('data_status')) {
                obj['data_status'] = ApiClient.convertToType(data['data_status'], {'String': DataStatus});
            }
            if (data.hasOwnProperty('pin_id')) {
                obj['pin_id'] = ApiClient.convertToType(data['pin_id'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>TopPinsAnalyticsResponsePinsInner</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>TopPinsAnalyticsResponsePinsInner</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['pin_id'] && !(typeof data['pin_id'] === 'string' || data['pin_id'] instanceof String)) {
            throw new Error("Expected the field `pin_id` to be a primitive type in the JSON string but got " + data['pin_id']);
        }

        return true;
    }


}



/**
 * The metric name and daily value for each requested metric
 * @member {Object.<String, Number>} metrics
 */
TopPinsAnalyticsResponsePinsInner.prototype['metrics'] = undefined;

/**
 * @member {Object.<String, module:model/DataStatus>} data_status
 */
TopPinsAnalyticsResponsePinsInner.prototype['data_status'] = undefined;

/**
 * The pin id
 * @member {String} pin_id
 */
TopPinsAnalyticsResponsePinsInner.prototype['pin_id'] = undefined;






export default TopPinsAnalyticsResponsePinsInner;
