// tslint:disable
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

import {
    OauthAccessTokenResponse,
    OauthAccessTokenResponseFromJSON,
    OauthAccessTokenResponseToJSON,
} from './';

/**
 * @type OauthAccessTokenResponseEverlastingRefresh
 * A successful OAuth access token response for the refresh token flow, with an added everlasting refresh token.
 * @export
 */
export interface OauthAccessTokenResponseEverlastingRefresh extends OauthAccessTokenResponse {
}

export function OauthAccessTokenResponseEverlastingRefreshFromJSON(json: any): OauthAccessTokenResponseEverlastingRefresh {
    return {
        ...OauthAccessTokenResponseFromJSON(json),
    };
}

export function OauthAccessTokenResponseEverlastingRefreshToJSON(value?: OauthAccessTokenResponseEverlastingRefresh): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...OauthAccessTokenResponseToJSON(value),
    };
}
