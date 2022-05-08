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
import OauthAccessTokenResponse from './OauthAccessTokenResponse';

/**
 * The OauthAccessTokenResponseRefresh model module.
 * @module model/OauthAccessTokenResponseRefresh
 * @version 5.3.0
 */
class OauthAccessTokenResponseRefresh {

    /**
     * @member {OauthAccessTokenResponse.ResponseTypeEnum} response_type
     * @type {OauthAccessTokenResponse.ResponseTypeEnum}
     */
    #response_type;
    /**
     * @member {String} access_token
     * @type {String}
     */
    #access_token;
    /**
     * @member {String} token_type
     * @type {String}
     */
    #token_type;
    /**
     * @member {Number} expires_in
     * @type {Number}
     */
    #expires_in;
    /**
     * @member {String} scope
     * @type {String}
     */
    #scope;
    

    /**
     * Constructs a new <code>OauthAccessTokenResponseRefresh</code>.
     * A successful OAuth access token response for the refresh token flow.
     * @alias module:model/OauthAccessTokenResponseRefresh
     * @extends module:model/OauthAccessTokenResponse
     * @implements module:model/OauthAccessTokenResponse
     * @param accessToken {String} 
     * @param tokenType {String} 
     * @param expiresIn {Number} 
     * @param scope {String} 
     */
    constructor(accessToken, tokenType, expiresIn, scope) { 
        OauthAccessTokenResponse.initialize(this, accessToken, tokenType, expiresIn, scope);
        OauthAccessTokenResponseRefresh.initialize(this, accessToken, tokenType, expiresIn, scope);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, accessToken, tokenType, expiresIn, scope) { 
    }

    /**
     * Constructs a <code>OauthAccessTokenResponseRefresh</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OauthAccessTokenResponseRefresh} obj Optional instance to populate.
     * @return {module:model/OauthAccessTokenResponseRefresh} The populated <code>OauthAccessTokenResponseRefresh</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OauthAccessTokenResponseRefresh();
            OauthAccessTokenResponse.constructFromObject(data, obj);
            OauthAccessTokenResponse.constructFromObject(data, obj);

        }
        return obj;
    }
}



export default OauthAccessTokenResponseRefresh;
