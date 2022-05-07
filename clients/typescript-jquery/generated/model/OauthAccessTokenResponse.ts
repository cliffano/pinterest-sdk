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

import * as models from './models';

/**
 * A successful OAuth access token response.
 */
export interface OauthAccessTokenResponse {
    response_type?: OauthAccessTokenResponse.ResponseTypeEnum;

    access_token: string;

    token_type: string;

    expires_in: number;

    scope: string;

}
export namespace OauthAccessTokenResponse {
    export enum ResponseTypeEnum {
        AuthorizationCode = <any> 'authorization_code',
        RefreshToken = <any> 'refresh_token'
    }
}
