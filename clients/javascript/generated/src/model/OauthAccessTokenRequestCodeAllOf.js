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
 * The OauthAccessTokenRequestCodeAllOf model module.
 * @module model/OauthAccessTokenRequestCodeAllOf
 * @version 1.0.1-pre.0
 */
class OauthAccessTokenRequestCodeAllOf {
    /**
     * Constructs a new <code>OauthAccessTokenRequestCodeAllOf</code>.
     * @alias module:model/OauthAccessTokenRequestCodeAllOf
     * @param code {String} 
     * @param redirectUri {String} 
     */
    constructor(code, redirectUri) { 
        
        OauthAccessTokenRequestCodeAllOf.initialize(this, code, redirectUri);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, code, redirectUri) { 
        obj['code'] = code;
        obj['redirect_uri'] = redirectUri;
    }

    /**
     * Constructs a <code>OauthAccessTokenRequestCodeAllOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OauthAccessTokenRequestCodeAllOf} obj Optional instance to populate.
     * @return {module:model/OauthAccessTokenRequestCodeAllOf} The populated <code>OauthAccessTokenRequestCodeAllOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OauthAccessTokenRequestCodeAllOf();

            if (data.hasOwnProperty('code')) {
                obj['code'] = ApiClient.convertToType(data['code'], 'String');
            }
            if (data.hasOwnProperty('redirect_uri')) {
                obj['redirect_uri'] = ApiClient.convertToType(data['redirect_uri'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} code
 */
OauthAccessTokenRequestCodeAllOf.prototype['code'] = undefined;

/**
 * @member {String} redirect_uri
 */
OauthAccessTokenRequestCodeAllOf.prototype['redirect_uri'] = undefined;






export default OauthAccessTokenRequestCodeAllOf;

