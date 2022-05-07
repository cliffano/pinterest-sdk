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

import {
    OauthAccessTokenRequest,
    OauthAccessTokenRequestFromJSON,
    OauthAccessTokenRequestToJSON,
    OauthAccessTokenRequestCodeAllOf,
    OauthAccessTokenRequestCodeAllOfFromJSON,
    OauthAccessTokenRequestCodeAllOfToJSON,
} from './';

/**
 * @type OauthAccessTokenRequestCode
 * A request to exchange an authorization code for an access token.
 * @export
 */
export interface OauthAccessTokenRequestCode extends OauthAccessTokenRequest, OauthAccessTokenRequestCodeAllOf {
}

export function OauthAccessTokenRequestCodeFromJSON(json: any): OauthAccessTokenRequestCode {
    return {
        ...OauthAccessTokenRequestFromJSON(json),
        ...OauthAccessTokenRequestCodeAllOfFromJSON(json),
    };
}

export function OauthAccessTokenRequestCodeToJSON(value?: OauthAccessTokenRequestCode): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...OauthAccessTokenRequestToJSON(value),
        ...OauthAccessTokenRequestCodeAllOfToJSON(value),
    };
}
