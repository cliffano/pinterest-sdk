// tslint:disable
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

import {
    OauthAccessTokenRequest,
    OauthAccessTokenRequestFromJSON,
    OauthAccessTokenRequestToJSON,
    OauthAccessTokenRequestRefreshAllOf,
    OauthAccessTokenRequestRefreshAllOfFromJSON,
    OauthAccessTokenRequestRefreshAllOfToJSON,
} from './';

/**
 * @type OauthAccessTokenRequestRefresh
 * A request to exchange a refresh token for a new access token.
 * @export
 */
export interface OauthAccessTokenRequestRefresh extends OauthAccessTokenRequest, OauthAccessTokenRequestRefreshAllOf {
}

export function OauthAccessTokenRequestRefreshFromJSON(json: any): OauthAccessTokenRequestRefresh {
    return {
        ...OauthAccessTokenRequestFromJSON(json),
        ...OauthAccessTokenRequestRefreshAllOfFromJSON(json),
    };
}

export function OauthAccessTokenRequestRefreshToJSON(value?: OauthAccessTokenRequestRefresh): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...OauthAccessTokenRequestToJSON(value),
        ...OauthAccessTokenRequestRefreshAllOfToJSON(value),
    };
}
