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
 * Describes the valid schema for possible OAuth access token requests.
 * @export
 * @interface OauthAccessTokenRequest
 */
export interface OauthAccessTokenRequest  {
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenRequest
     */
    grantType: OauthAccessTokenRequestGrantTypeEnum;
}

export function OauthAccessTokenRequestFromJSON(json: any): OauthAccessTokenRequest {
    return {
        'grantType': json['grant_type'],
    };
}

export function OauthAccessTokenRequestToJSON(value?: OauthAccessTokenRequest): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'grant_type': value.grantType,
    };
}

/**
* @export
* @enum {string}
*/
export enum OauthAccessTokenRequestGrantTypeEnum {
    AuthorizationCode = 'authorization_code',
    RefreshToken = 'refresh_token'
}


