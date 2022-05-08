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
import OauthAccessTokenRequest from './OauthAccessTokenRequest';
import OauthAccessTokenRequestRefreshAllOf from './OauthAccessTokenRequestRefreshAllOf';

/**
 * The OauthAccessTokenRequestRefresh model module.
 * @module model/OauthAccessTokenRequestRefresh
 * @version 1.0.0-pre.0
 */
class OauthAccessTokenRequestRefresh {
    /**
     * Constructs a new <code>OauthAccessTokenRequestRefresh</code>.
     * A request to exchange a refresh token for a new access token.
     * @alias module:model/OauthAccessTokenRequestRefresh
     * @extends module:model/OauthAccessTokenRequest
     * @implements module:model/OauthAccessTokenRequest
     * @implements module:model/OauthAccessTokenRequestRefreshAllOf
     * @param grantType {module:model/OauthAccessTokenRequestRefresh.GrantTypeEnum} 
     * @param refreshToken {String} 
     */
    constructor(grantType, refreshToken) { 
        OauthAccessTokenRequest.initialize(this, grantType);OauthAccessTokenRequestRefreshAllOf.initialize(this, refreshToken);
        OauthAccessTokenRequestRefresh.initialize(this, grantType, refreshToken);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, grantType, refreshToken) { 
        obj['refresh_token'] = refreshToken;
    }

    /**
     * Constructs a <code>OauthAccessTokenRequestRefresh</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OauthAccessTokenRequestRefresh} obj Optional instance to populate.
     * @return {module:model/OauthAccessTokenRequestRefresh} The populated <code>OauthAccessTokenRequestRefresh</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OauthAccessTokenRequestRefresh();
            OauthAccessTokenRequest.constructFromObject(data, obj);
            OauthAccessTokenRequest.constructFromObject(data, obj);
            OauthAccessTokenRequestRefreshAllOf.constructFromObject(data, obj);

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
OauthAccessTokenRequestRefresh.prototype['refresh_token'] = undefined;

/**
 * @member {String} scope
 */
OauthAccessTokenRequestRefresh.prototype['scope'] = undefined;


// Implement OauthAccessTokenRequest interface:
/**
 * @member {module:model/OauthAccessTokenRequest.GrantTypeEnum} grant_type
 */
OauthAccessTokenRequest.prototype['grant_type'] = undefined;
// Implement OauthAccessTokenRequestRefreshAllOf interface:
/**
 * @member {String} refresh_token
 */
OauthAccessTokenRequestRefreshAllOf.prototype['refresh_token'] = undefined;
/**
 * @member {String} scope
 */
OauthAccessTokenRequestRefreshAllOf.prototype['scope'] = undefined;




export default OauthAccessTokenRequestRefresh;

