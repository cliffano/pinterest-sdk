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
import AudienceRule from './AudienceRule';

/**
 * The Audience model module.
 * @module model/Audience
 * @version 1.1.1-pre.0
 */
class Audience {
    /**
     * Constructs a new <code>Audience</code>.
     * @alias module:model/Audience
     */
    constructor() { 
        
        Audience.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Audience</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Audience} obj Optional instance to populate.
     * @return {module:model/Audience} The populated <code>Audience</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Audience();

            if (data.hasOwnProperty('ad_account_id')) {
                obj['ad_account_id'] = ApiClient.convertToType(data['ad_account_id'], 'String');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('audience_type')) {
                obj['audience_type'] = ApiClient.convertToType(data['audience_type'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('rule')) {
                obj['rule'] = AudienceRule.constructFromObject(data['rule']);
            }
            if (data.hasOwnProperty('size')) {
                obj['size'] = ApiClient.convertToType(data['size'], 'Number');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('created_timestamp')) {
                obj['created_timestamp'] = ApiClient.convertToType(data['created_timestamp'], 'Number');
            }
            if (data.hasOwnProperty('updated_timestamp')) {
                obj['updated_timestamp'] = ApiClient.convertToType(data['updated_timestamp'], 'Number');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>Audience</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>Audience</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['ad_account_id'] && !(typeof data['ad_account_id'] === 'string' || data['ad_account_id'] instanceof String)) {
            throw new Error("Expected the field `ad_account_id` to be a primitive type in the JSON string but got " + data['ad_account_id']);
        }
        // ensure the json data is a string
        if (data['id'] && !(typeof data['id'] === 'string' || data['id'] instanceof String)) {
            throw new Error("Expected the field `id` to be a primitive type in the JSON string but got " + data['id']);
        }
        // ensure the json data is a string
        if (data['name'] && !(typeof data['name'] === 'string' || data['name'] instanceof String)) {
            throw new Error("Expected the field `name` to be a primitive type in the JSON string but got " + data['name']);
        }
        // ensure the json data is a string
        if (data['audience_type'] && !(typeof data['audience_type'] === 'string' || data['audience_type'] instanceof String)) {
            throw new Error("Expected the field `audience_type` to be a primitive type in the JSON string but got " + data['audience_type']);
        }
        // ensure the json data is a string
        if (data['description'] && !(typeof data['description'] === 'string' || data['description'] instanceof String)) {
            throw new Error("Expected the field `description` to be a primitive type in the JSON string but got " + data['description']);
        }
        // validate the optional field `rule`
        if (data['rule']) { // data not null
          AudienceRule.validateJSON(data['rule']);
        }
        // ensure the json data is a string
        if (data['status'] && !(typeof data['status'] === 'string' || data['status'] instanceof String)) {
            throw new Error("Expected the field `status` to be a primitive type in the JSON string but got " + data['status']);
        }
        // ensure the json data is a string
        if (data['type'] && !(typeof data['type'] === 'string' || data['type'] instanceof String)) {
            throw new Error("Expected the field `type` to be a primitive type in the JSON string but got " + data['type']);
        }

        return true;
    }


}



/**
 * Ad account ID.
 * @member {String} ad_account_id
 */
Audience.prototype['ad_account_id'] = undefined;

/**
 * Audience ID.
 * @member {String} id
 */
Audience.prototype['id'] = undefined;

/**
 * Audience name.
 * @member {String} name
 */
Audience.prototype['name'] = undefined;

/**
 * <a href=\"/docs/reference/glossary/#Audience Types\">Audience types</a>: ACTALIKE, ENGAGEMENT, CUSTOMER_LIST and VISITOR
 * @member {String} audience_type
 */
Audience.prototype['audience_type'] = undefined;

/**
 * Audience description.
 * @member {String} description
 */
Audience.prototype['description'] = undefined;

/**
 * @member {module:model/AudienceRule} rule
 */
Audience.prototype['rule'] = undefined;

/**
 * Audience size.
 * @member {Number} size
 */
Audience.prototype['size'] = undefined;

/**
 * Audience status. READY, INITIALIZING, TOO_SMALL - Each audience list needs to have at least 100 people with Pinterest accounts before you can start using it.
 * @member {String} status
 */
Audience.prototype['status'] = undefined;

/**
 * Always \"audience\".
 * @member {String} type
 */
Audience.prototype['type'] = undefined;

/**
 * Creation time. Unix timestamp in seconds.
 * @member {Number} created_timestamp
 */
Audience.prototype['created_timestamp'] = undefined;

/**
 * Last update time. Unix timestamp in seconds.
 * @member {Number} updated_timestamp
 */
Audience.prototype['updated_timestamp'] = undefined;






export default Audience;
