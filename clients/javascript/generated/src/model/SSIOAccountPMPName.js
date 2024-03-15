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
 * The SSIOAccountPMPName model module.
 * @module model/SSIOAccountPMPName
 * @version 1.1.1-pre.0
 */
class SSIOAccountPMPName {
    /**
     * Constructs a new <code>SSIOAccountPMPName</code>.
     * @alias module:model/SSIOAccountPMPName
     */
    constructor() { 
        
        SSIOAccountPMPName.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SSIOAccountPMPName</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SSIOAccountPMPName} obj Optional instance to populate.
     * @return {module:model/SSIOAccountPMPName} The populated <code>SSIOAccountPMPName</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SSIOAccountPMPName();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('id')) {
                obj['id'] = ApiClient.convertToType(data['id'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>SSIOAccountPMPName</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>SSIOAccountPMPName</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['name'] && !(typeof data['name'] === 'string' || data['name'] instanceof String)) {
            throw new Error("Expected the field `name` to be a primitive type in the JSON string but got " + data['name']);
        }
        // ensure the json data is a string
        if (data['id'] && !(typeof data['id'] === 'string' || data['id'] instanceof String)) {
            throw new Error("Expected the field `id` to be a primitive type in the JSON string but got " + data['id']);
        }

        return true;
    }


}



/**
 * Display name
 * @member {String} name
 */
SSIOAccountPMPName.prototype['name'] = undefined;

/**
 * Salesforce id for PMP
 * @member {String} id
 */
SSIOAccountPMPName.prototype['id'] = undefined;






export default SSIOAccountPMPName;

