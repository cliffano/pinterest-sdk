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
 * The UserWebsiteVerifyRequest model module.
 * @module model/UserWebsiteVerifyRequest
 * @version 1.1.1-pre.0
 */
class UserWebsiteVerifyRequest {
    /**
     * Constructs a new <code>UserWebsiteVerifyRequest</code>.
     * User website verification request
     * @alias module:model/UserWebsiteVerifyRequest
     */
    constructor() { 
        
        UserWebsiteVerifyRequest.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>UserWebsiteVerifyRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/UserWebsiteVerifyRequest} obj Optional instance to populate.
     * @return {module:model/UserWebsiteVerifyRequest} The populated <code>UserWebsiteVerifyRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new UserWebsiteVerifyRequest();

            if (data.hasOwnProperty('website')) {
                obj['website'] = ApiClient.convertToType(data['website'], 'String');
            }
            if (data.hasOwnProperty('verification_method')) {
                obj['verification_method'] = ApiClient.convertToType(data['verification_method'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>UserWebsiteVerifyRequest</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>UserWebsiteVerifyRequest</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['website'] && !(typeof data['website'] === 'string' || data['website'] instanceof String)) {
            throw new Error("Expected the field `website` to be a primitive type in the JSON string but got " + data['website']);
        }
        // ensure the json data is a string
        if (data['verification_method'] && !(typeof data['verification_method'] === 'string' || data['verification_method'] instanceof String)) {
            throw new Error("Expected the field `verification_method` to be a primitive type in the JSON string but got " + data['verification_method']);
        }

        return true;
    }


}



/**
 * @member {String} website
 */
UserWebsiteVerifyRequest.prototype['website'] = undefined;

/**
 * @member {module:model/UserWebsiteVerifyRequest.VerificationMethodEnum} verification_method
 * @default 'METATAG'
 */
UserWebsiteVerifyRequest.prototype['verification_method'] = 'METATAG';





/**
 * Allowed values for the <code>verification_method</code> property.
 * @enum {String}
 * @readonly
 */
UserWebsiteVerifyRequest['VerificationMethodEnum'] = {

    /**
     * value: "FILENAME"
     * @const
     */
    "FILENAME": "FILENAME",

    /**
     * value: "METATAG"
     * @const
     */
    "METATAG": "METATAG",

    /**
     * value: "DNSTXT"
     * @const
     */
    "DNSTXT": "DNSTXT"
};



export default UserWebsiteVerifyRequest;
