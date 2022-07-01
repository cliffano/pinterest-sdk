/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface OauthAccessTokenRequestCodeAllOf
 */
export interface OauthAccessTokenRequestCodeAllOf {
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenRequestCodeAllOf
     */
    code: string;
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenRequestCodeAllOf
     */
    redirectUri: string;
}

export function OauthAccessTokenRequestCodeAllOfFromJSON(json: any): OauthAccessTokenRequestCodeAllOf {
    return OauthAccessTokenRequestCodeAllOfFromJSONTyped(json, false);
}

export function OauthAccessTokenRequestCodeAllOfFromJSONTyped(json: any, ignoreDiscriminator: boolean): OauthAccessTokenRequestCodeAllOf {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'code': json['code'],
        'redirectUri': json['redirect_uri'],
    };
}

export function OauthAccessTokenRequestCodeAllOfToJSON(value?: OauthAccessTokenRequestCodeAllOf | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'code': value.code,
        'redirect_uri': value.redirectUri,
    };
}

