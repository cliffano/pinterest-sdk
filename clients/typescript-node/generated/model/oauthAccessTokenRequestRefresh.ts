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

import { RequestFile } from './models';
import { OauthAccessTokenRequest } from './oauthAccessTokenRequest';
import { OauthAccessTokenRequestRefreshAllOf } from './oauthAccessTokenRequestRefreshAllOf';

/**
* A request to exchange a refresh token for a new access token.
*/
export class OauthAccessTokenRequestRefresh extends OauthAccessTokenRequest {
    'refreshToken': string;
    'scope'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "refreshToken",
            "baseName": "refresh_token",
            "type": "string"
        },
        {
            "name": "scope",
            "baseName": "scope",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return super.getAttributeTypeMap().concat(OauthAccessTokenRequestRefresh.attributeTypeMap);
    }
}

export namespace OauthAccessTokenRequestRefresh {
}
