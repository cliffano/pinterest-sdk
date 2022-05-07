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

import { RequestFile } from './models';
import { OauthAccessTokenResponse } from './oauthAccessTokenResponse';
import { OauthAccessTokenResponseCodeAllOf } from './oauthAccessTokenResponseCodeAllOf';

/**
* A successful OAuth access token response for the authorization code flow.
*/
export class OauthAccessTokenResponseCode extends OauthAccessTokenResponse {
    'refreshToken': string;
    'refreshTokenExpiresIn': number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "refreshToken",
            "baseName": "refresh_token",
            "type": "string"
        },
        {
            "name": "refreshTokenExpiresIn",
            "baseName": "refresh_token_expires_in",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return super.getAttributeTypeMap().concat(OauthAccessTokenResponseCode.attributeTypeMap);
    }
}

export namespace OauthAccessTokenResponseCode {
}
