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
import IntegrationLogClientError from './IntegrationLogClientError';
import IntegrationLogClientRequest from './IntegrationLogClientRequest';

/**
 * The IntegrationLog model module.
 * @module model/IntegrationLog
 * @version 1.1.1-pre.0
 */
class IntegrationLog {
    /**
     * Constructs a new <code>IntegrationLog</code>.
     * Schema for log sent from an integration application.
     * @alias module:model/IntegrationLog
     * @param clientTimestamp {Number} Timestamp in milliseconds of when the log was executed at the client.
     * @param eventType {module:model/IntegrationLog.EventTypeEnum} Log event type
     * @param logLevel {module:model/IntegrationLog.LogLevelEnum} Log level type
     */
    constructor(clientTimestamp, eventType, logLevel) { 
        
        IntegrationLog.initialize(this, clientTimestamp, eventType, logLevel);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, clientTimestamp, eventType, logLevel) { 
        obj['client_timestamp'] = clientTimestamp;
        obj['event_type'] = eventType;
        obj['log_level'] = logLevel;
    }

    /**
     * Constructs a <code>IntegrationLog</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/IntegrationLog} obj Optional instance to populate.
     * @return {module:model/IntegrationLog} The populated <code>IntegrationLog</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new IntegrationLog();

            if (data.hasOwnProperty('client_timestamp')) {
                obj['client_timestamp'] = ApiClient.convertToType(data['client_timestamp'], 'Number');
            }
            if (data.hasOwnProperty('event_type')) {
                obj['event_type'] = ApiClient.convertToType(data['event_type'], 'String');
            }
            if (data.hasOwnProperty('log_level')) {
                obj['log_level'] = ApiClient.convertToType(data['log_level'], 'String');
            }
            if (data.hasOwnProperty('external_business_id')) {
                obj['external_business_id'] = ApiClient.convertToType(data['external_business_id'], 'String');
            }
            if (data.hasOwnProperty('advertiser_id')) {
                obj['advertiser_id'] = ApiClient.convertToType(data['advertiser_id'], 'String');
            }
            if (data.hasOwnProperty('merchant_id')) {
                obj['merchant_id'] = ApiClient.convertToType(data['merchant_id'], 'String');
            }
            if (data.hasOwnProperty('tag_id')) {
                obj['tag_id'] = ApiClient.convertToType(data['tag_id'], 'String');
            }
            if (data.hasOwnProperty('feed_profile_id')) {
                obj['feed_profile_id'] = ApiClient.convertToType(data['feed_profile_id'], 'String');
            }
            if (data.hasOwnProperty('message')) {
                obj['message'] = ApiClient.convertToType(data['message'], 'String');
            }
            if (data.hasOwnProperty('app_version_number')) {
                obj['app_version_number'] = ApiClient.convertToType(data['app_version_number'], 'String');
            }
            if (data.hasOwnProperty('platform_version_number')) {
                obj['platform_version_number'] = ApiClient.convertToType(data['platform_version_number'], 'String');
            }
            if (data.hasOwnProperty('error')) {
                obj['error'] = IntegrationLogClientError.constructFromObject(data['error']);
            }
            if (data.hasOwnProperty('request')) {
                obj['request'] = IntegrationLogClientRequest.constructFromObject(data['request']);
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>IntegrationLog</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>IntegrationLog</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of IntegrationLog.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['event_type'] && !(typeof data['event_type'] === 'string' || data['event_type'] instanceof String)) {
            throw new Error("Expected the field `event_type` to be a primitive type in the JSON string but got " + data['event_type']);
        }
        // ensure the json data is a string
        if (data['log_level'] && !(typeof data['log_level'] === 'string' || data['log_level'] instanceof String)) {
            throw new Error("Expected the field `log_level` to be a primitive type in the JSON string but got " + data['log_level']);
        }
        // ensure the json data is a string
        if (data['external_business_id'] && !(typeof data['external_business_id'] === 'string' || data['external_business_id'] instanceof String)) {
            throw new Error("Expected the field `external_business_id` to be a primitive type in the JSON string but got " + data['external_business_id']);
        }
        // ensure the json data is a string
        if (data['advertiser_id'] && !(typeof data['advertiser_id'] === 'string' || data['advertiser_id'] instanceof String)) {
            throw new Error("Expected the field `advertiser_id` to be a primitive type in the JSON string but got " + data['advertiser_id']);
        }
        // ensure the json data is a string
        if (data['merchant_id'] && !(typeof data['merchant_id'] === 'string' || data['merchant_id'] instanceof String)) {
            throw new Error("Expected the field `merchant_id` to be a primitive type in the JSON string but got " + data['merchant_id']);
        }
        // ensure the json data is a string
        if (data['tag_id'] && !(typeof data['tag_id'] === 'string' || data['tag_id'] instanceof String)) {
            throw new Error("Expected the field `tag_id` to be a primitive type in the JSON string but got " + data['tag_id']);
        }
        // ensure the json data is a string
        if (data['feed_profile_id'] && !(typeof data['feed_profile_id'] === 'string' || data['feed_profile_id'] instanceof String)) {
            throw new Error("Expected the field `feed_profile_id` to be a primitive type in the JSON string but got " + data['feed_profile_id']);
        }
        // ensure the json data is a string
        if (data['message'] && !(typeof data['message'] === 'string' || data['message'] instanceof String)) {
            throw new Error("Expected the field `message` to be a primitive type in the JSON string but got " + data['message']);
        }
        // ensure the json data is a string
        if (data['app_version_number'] && !(typeof data['app_version_number'] === 'string' || data['app_version_number'] instanceof String)) {
            throw new Error("Expected the field `app_version_number` to be a primitive type in the JSON string but got " + data['app_version_number']);
        }
        // ensure the json data is a string
        if (data['platform_version_number'] && !(typeof data['platform_version_number'] === 'string' || data['platform_version_number'] instanceof String)) {
            throw new Error("Expected the field `platform_version_number` to be a primitive type in the JSON string but got " + data['platform_version_number']);
        }
        // validate the optional field `error`
        if (data['error']) { // data not null
          IntegrationLogClientError.validateJSON(data['error']);
        }
        // validate the optional field `request`
        if (data['request']) { // data not null
          IntegrationLogClientRequest.validateJSON(data['request']);
        }

        return true;
    }


}

IntegrationLog.RequiredProperties = ["client_timestamp", "event_type", "log_level"];

/**
 * Timestamp in milliseconds of when the log was executed at the client.
 * @member {Number} client_timestamp
 */
IntegrationLog.prototype['client_timestamp'] = undefined;

/**
 * Log event type
 * @member {module:model/IntegrationLog.EventTypeEnum} event_type
 */
IntegrationLog.prototype['event_type'] = undefined;

/**
 * Log level type
 * @member {module:model/IntegrationLog.LogLevelEnum} log_level
 */
IntegrationLog.prototype['log_level'] = undefined;

/**
 * @member {String} external_business_id
 */
IntegrationLog.prototype['external_business_id'] = undefined;

/**
 * @member {String} advertiser_id
 */
IntegrationLog.prototype['advertiser_id'] = undefined;

/**
 * @member {String} merchant_id
 */
IntegrationLog.prototype['merchant_id'] = undefined;

/**
 * @member {String} tag_id
 */
IntegrationLog.prototype['tag_id'] = undefined;

/**
 * @member {String} feed_profile_id
 */
IntegrationLog.prototype['feed_profile_id'] = undefined;

/**
 * Explanation of the event that occured.
 * @member {String} message
 */
IntegrationLog.prototype['message'] = undefined;

/**
 * Version number of the integration application.
 * @member {String} app_version_number
 */
IntegrationLog.prototype['app_version_number'] = undefined;

/**
 * Version number of the platform the integration application is running on.
 * @member {String} platform_version_number
 */
IntegrationLog.prototype['platform_version_number'] = undefined;

/**
 * @member {module:model/IntegrationLogClientError} error
 */
IntegrationLog.prototype['error'] = undefined;

/**
 * @member {module:model/IntegrationLogClientRequest} request
 */
IntegrationLog.prototype['request'] = undefined;





/**
 * Allowed values for the <code>event_type</code> property.
 * @enum {String}
 * @readonly
 */
IntegrationLog['EventTypeEnum'] = {

    /**
     * value: "APP"
     * @const
     */
    "APP": "APP",

    /**
     * value: "API"
     * @const
     */
    "API": "API"
};


/**
 * Allowed values for the <code>log_level</code> property.
 * @enum {String}
 * @readonly
 */
IntegrationLog['LogLevelEnum'] = {

    /**
     * value: "INFO"
     * @const
     */
    "INFO": "INFO",

    /**
     * value: "WARN"
     * @const
     */
    "WARN": "WARN",

    /**
     * value: "ERROR"
     * @const
     */
    "ERROR": "ERROR"
};



export default IntegrationLog;

