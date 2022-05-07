// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
/**
 * A successful OAuth access token response.
 * @export
 * @interface OauthAccessTokenResponse
 */
export interface OauthAccessTokenResponse  {
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenResponse
     */
    responseType?: OauthAccessTokenResponseResponseTypeEnum;
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenResponse
     */
    accessToken: string;
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenResponse
     */
    tokenType: string;
    /**
     * 
     * @type {number}
     * @memberof OauthAccessTokenResponse
     */
    expiresIn: number;
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenResponse
     */
    scope: string;
}

export function OauthAccessTokenResponseFromJSON(json: any): OauthAccessTokenResponse {
    return {
        'responseType': !exists(json, 'response_type') ? undefined : json['response_type'],
        'accessToken': json['access_token'],
        'tokenType': json['token_type'],
        'expiresIn': json['expires_in'],
        'scope': json['scope'],
    };
}

export function OauthAccessTokenResponseToJSON(value?: OauthAccessTokenResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'response_type': value.responseType,
        'access_token': value.accessToken,
        'token_type': value.tokenType,
        'expires_in': value.expiresIn,
        'scope': value.scope,
    };
}

/**
* @export
* @enum {string}
*/
export enum OauthAccessTokenResponseResponseTypeEnum {
    AuthorizationCode = 'authorization_code',
    RefreshToken = 'refresh_token'
}


