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
 * The OauthAccessTokenResponse model module.
 * @module model/OauthAccessTokenResponse
 * @version 1.1.1-pre.0
 */
class OauthAccessTokenResponse {
    /**
     * Constructs a new <code>OauthAccessTokenResponse</code>.
     * A successful OAuth access token response.
     * @alias module:model/OauthAccessTokenResponse
     * @param accessToken {String} 
     * @param tokenType {String} 
     * @param expiresIn {Number} 
     * @param scope {String} 
     */
    constructor(accessToken, tokenType, expiresIn, scope) { 
        
        OauthAccessTokenResponse.initialize(this, accessToken, tokenType, expiresIn, scope);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, accessToken, tokenType, expiresIn, scope) { 
        obj['access_token'] = accessToken;
        obj['token_type'] = tokenType || 'bearer';
        obj['expires_in'] = expiresIn;
        obj['scope'] = scope;
    }

    /**
     * Constructs a <code>OauthAccessTokenResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/OauthAccessTokenResponse} obj Optional instance to populate.
     * @return {module:model/OauthAccessTokenResponse} The populated <code>OauthAccessTokenResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new OauthAccessTokenResponse();

            if (data.hasOwnProperty('response_type')) {
                obj['response_type'] = ApiClient.convertToType(data['response_type'], 'String');
            }
            if (data.hasOwnProperty('access_token')) {
                obj['access_token'] = ApiClient.convertToType(data['access_token'], 'String');
            }
            if (data.hasOwnProperty('token_type')) {
                obj['token_type'] = ApiClient.convertToType(data['token_type'], 'String');
            }
            if (data.hasOwnProperty('expires_in')) {
                obj['expires_in'] = ApiClient.convertToType(data['expires_in'], 'Number');
            }
            if (data.hasOwnProperty('scope')) {
                obj['scope'] = ApiClient.convertToType(data['scope'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>OauthAccessTokenResponse</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>OauthAccessTokenResponse</code>.
     */
    static validateJSON(data) {
        // check to make sure all required properties are present in the JSON string
        for (const property of OauthAccessTokenResponse.RequiredProperties) {
            if (!data.hasOwnProperty(property)) {
                throw new Error("The required field `" + property + "` is not found in the JSON data: " + JSON.stringify(data));
            }
        }
        // ensure the json data is a string
        if (data['response_type'] && !(typeof data['response_type'] === 'string' || data['response_type'] instanceof String)) {
            throw new Error("Expected the field `response_type` to be a primitive type in the JSON string but got " + data['response_type']);
        }
        // ensure the json data is a string
        if (data['access_token'] && !(typeof data['access_token'] === 'string' || data['access_token'] instanceof String)) {
            throw new Error("Expected the field `access_token` to be a primitive type in the JSON string but got " + data['access_token']);
        }
        // ensure the json data is a string
        if (data['token_type'] && !(typeof data['token_type'] === 'string' || data['token_type'] instanceof String)) {
            throw new Error("Expected the field `token_type` to be a primitive type in the JSON string but got " + data['token_type']);
        }
        // ensure the json data is a string
        if (data['scope'] && !(typeof data['scope'] === 'string' || data['scope'] instanceof String)) {
            throw new Error("Expected the field `scope` to be a primitive type in the JSON string but got " + data['scope']);
        }

        return true;
    }


}

OauthAccessTokenResponse.RequiredProperties = ["access_token", "token_type", "expires_in", "scope"];

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





/**
 * Allowed values for the <code>response_type</code> property.
 * @enum {String}
 * @readonly
 */
OauthAccessTokenResponse['ResponseTypeEnum'] = {

    /**
     * value: "authorization_code"
     * @const
     */
    "authorization_code": "authorization_code",

    /**
     * value: "refresh_token"
     * @const
     */
    "refresh_token": "refresh_token"
};



export default OauthAccessTokenResponse;
