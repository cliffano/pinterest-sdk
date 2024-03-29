/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { OauthAccessTokenRequest } from './OauthAccessTokenRequest';
import {
    OauthAccessTokenRequestFromJSON,
    OauthAccessTokenRequestFromJSONTyped,
    OauthAccessTokenRequestToJSON,
} from './OauthAccessTokenRequest';

/**
 * A request to exchange a refresh token for a new access token.
 * @export
 * @interface OauthAccessTokenRequestRefresh
 */
export interface OauthAccessTokenRequestRefresh extends OauthAccessTokenRequest {
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenRequestRefresh
     */
    refreshToken: string;
    /**
     * 
     * @type {string}
     * @memberof OauthAccessTokenRequestRefresh
     */
    scope?: string;
    /**
     * Setting this field to <code>true</code> will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to "everlasting_refresh".
     * @type {boolean}
     * @memberof OauthAccessTokenRequestRefresh
     */
    refreshOn?: boolean;
}



/**
 * Check if a given object implements the OauthAccessTokenRequestRefresh interface.
 */
export function instanceOfOauthAccessTokenRequestRefresh(value: object): boolean {
    if (!('refreshToken' in value)) return false;
    return true;
}

export function OauthAccessTokenRequestRefreshFromJSON(json: any): OauthAccessTokenRequestRefresh {
    return OauthAccessTokenRequestRefreshFromJSONTyped(json, false);
}

export function OauthAccessTokenRequestRefreshFromJSONTyped(json: any, ignoreDiscriminator: boolean): OauthAccessTokenRequestRefresh {
    if (json == null) {
        return json;
    }
    return {
        ...OauthAccessTokenRequestFromJSONTyped(json, ignoreDiscriminator),
        'refreshToken': json['refresh_token'],
        'scope': json['scope'] == null ? undefined : json['scope'],
        'refreshOn': json['refresh_on'] == null ? undefined : json['refresh_on'],
    };
}

export function OauthAccessTokenRequestRefreshToJSON(value?: OauthAccessTokenRequestRefresh | null): any {
    if (value == null) {
        return value;
    }
    return {
        ...OauthAccessTokenRequestToJSON(value),
        'refresh_token': value['refreshToken'],
        'scope': value['scope'],
        'refresh_on': value['refreshOn'],
    };
}

