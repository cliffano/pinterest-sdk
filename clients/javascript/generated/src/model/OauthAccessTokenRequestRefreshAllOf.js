/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';

/**
 * The OauthAccessTokenRequestRefreshAllOf model module.
 * @module model/OauthAccessTokenRequestRefreshAllOf
 * @version 1.0.0-pre.0
 */
class OauthAccessTokenRequestRefreshAllOf {
    /**
     * Constructs a new <code>OauthAccessTokenRequestRefreshAllOf</code>.
     * @alias module:model/OauthAccessTokenRequestRefreshAllOf
     * @param refreshToken {String} 
     */
    constructor(refreshToken) { 
        
        OauthAccessTokenRequestRefreshAllOf.initialize(this, refreshToken);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, refreshToken) { 
        obj['refresh_token'] = refreshToken;
    }

    /**
     * Constructs a <code>OauthAccessTokenRequestRefreshAllOf</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OauthAccessTokenRequestRefreshAllOf} obj Optional instance to populate.
     * @return {module:model/OauthAccessTokenRequestRefreshAllOf} The populated <code>OauthAccessTokenRequestRefreshAllOf</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OauthAccessTokenRequestRefreshAllOf();

            if (data.hasOwnProperty('refresh_token')) {
                obj['refresh_token'] = ApiClient.convertToType(data['refresh_token'], 'String');
            }
            if (data.hasOwnProperty('scope')) {
                obj['scope'] = ApiClient.convertToType(data['scope'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} refresh_token
 */
OauthAccessTokenRequestRefreshAllOf.prototype['refresh_token'] = undefined;

/**
 * @member {String} scope
 */
OauthAccessTokenRequestRefreshAllOf.prototype['scope'] = undefined;






export default OauthAccessTokenRequestRefreshAllOf;

