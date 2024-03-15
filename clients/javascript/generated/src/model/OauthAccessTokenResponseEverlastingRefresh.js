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
import OauthAccessTokenResponse from './OauthAccessTokenResponse';

/**
 * The OauthAccessTokenResponseEverlastingRefresh model module.
 * @module model/OauthAccessTokenResponseEverlastingRefresh
 * @version 1.1.1-pre.0
 */
class OauthAccessTokenResponseEverlastingRefresh {
    /**
     * Constructs a new <code>OauthAccessTokenResponseEverlastingRefresh</code>.
     * A successful OAuth access token response for the refresh token flow, with an added everlasting refresh token.
     * @alias module:model/OauthAccessTokenResponseEverlastingRefresh
     * @extends module:model/OauthAccessTokenResponse
     * @implements module:model/OauthAccessTokenResponse
     * @param accessToken {String} 
     * @param tokenType {String} 
     * @param expiresIn {Number} 
     * @param scope {String} 
     * @param refreshToken {String} 
     * @param refreshTokenExpiresIn {Number} 
     * @param refreshTokenExpiresAt {Number} 
     */
    constructor(accessToken, tokenType, expiresIn, scope, refreshToken, refreshTokenExpiresIn, refreshTokenExpiresAt) { 
        OauthAccessTokenResponse.initialize(this, accessToken, tokenType, expiresIn, scope);
        OauthAccessTokenResponseEverlastingRefresh.initialize(this, accessToken, tokenType, expiresIn, scope, refreshToken, refreshTokenExpiresIn, refreshTokenExpiresAt);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, accessToken, tokenType, expiresIn, scope, refreshToken, refreshTokenExpiresIn, refreshTokenExpiresAt) { 
        obj['refresh_token'] = refreshToken;
        obj['refresh_token_expires_in'] = refreshTokenExpiresIn;
        obj['refresh_token_expires_at'] = refreshTokenExpiresAt;
    }

    /**
     * Constructs a <code>OauthAccessTokenResponseEverlastingRefresh</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OauthAccessTokenResponseEverlastingRefresh} obj Optional instance to populate.
     * @return {module:model/OauthAccessTokenResponseEverlastingRefresh} The populated <code>OauthAccessTokenResponseEverlastingRefresh</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OauthAccessTokenResponseEverlastingRefresh();
            OauthAccessTokenResponse.constructFromObject(data, obj);
            OauthAccessTokenResponse.constructFromObject(data, obj);

            if (data.hasOwnProperty('refresh_token')) {
                obj['refresh_token'] = ApiClient.convertToType(data['refresh_token'], 'String');
            }
            if (data.hasOwnProperty('refresh_token_expires_in')) {
                obj['refresh_token_expires_in'] = ApiClient.convertToType(data['refresh_token_expires_in'], 'Number');
            }
            if (data.hasOwnProperty('refresh_token_expires_at')) {
                obj['refresh_token_expires_at'] = ApiClient.convertToType(data['refresh_token_expires_at'], 'Number');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>OauthAccessTokenResponseEverlastingRefresh</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>OauthAccessTokenResponseEverlastingRefresh</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of OauthAccessTokenResponseEverlastingRefresh.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['refresh_token'] && !(typeof data['refresh_token'] === 'string' || data['refresh_token'] instanceof String)) {
            throw new Error("Expected the field `refresh_token` to be a primitive type in the JSON string but got " + data['refresh_token']);
        }

        return true;
    }


}

OauthAccessTokenResponseEverlastingRefresh.RequiredProperties = ["refresh_token", "refresh_token_expires_in", "refresh_token_expires_at", "access_token", "token_type", "expires_in", "scope"];

/**
 * @member {String} refresh_token
 */
OauthAccessTokenResponseEverlastingRefresh.prototype['refresh_token'] = undefined;

/**
 * @member {Number} refresh_token_expires_in
 */
OauthAccessTokenResponseEverlastingRefresh.prototype['refresh_token_expires_in'] = undefined;

/**
 * @member {Number} refresh_token_expires_at
 */
OauthAccessTokenResponseEverlastingRefresh.prototype['refresh_token_expires_at'] = undefined;


// Implement OauthAccessTokenResponse interface:
/**
 * @member {module:model/OauthAccessTokenResponse.ResponseTypeEnum} response_type
 */
OauthAccessTokenResponse.prototype['response_type'] = undefined;
/**
 * @member {String} access_token
 */
OauthAccessTokenResponse.prototype['access_token'] = undefined;
/**
 * @member {String} token_type
 * @default 'bearer'
 */
OauthAccessTokenResponse.prototype['token_type'] = 'bearer';
/**
 * @member {Number} expires_in
 */
OauthAccessTokenResponse.prototype['expires_in'] = undefined;
/**
 * @member {String} scope
 */
OauthAccessTokenResponse.prototype['scope'] = undefined;




export default OauthAccessTokenResponseEverlastingRefresh;

