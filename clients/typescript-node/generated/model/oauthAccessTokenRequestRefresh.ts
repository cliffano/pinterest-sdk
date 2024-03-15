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

import { RequestFile } from './models';
import { OauthAccessTokenRequest } from './oauthAccessTokenRequest';

/**
* A request to exchange a refresh token for a new access token.
*/
export class OauthAccessTokenRequestRefresh extends OauthAccessTokenRequest {
    'refreshToken': string;
    'scope'?: string;
    /**
    * Setting this field to <code>true</code> will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to \"everlasting_refresh\".
    */
    'refreshOn'?: boolean;

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
        },
        {
            "name": "refreshOn",
            "baseName": "refresh_on",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return super.getAttributeTypeMap().concat(OauthAccessTokenRequestRefresh.attributeTypeMap);
    }
}

export namespace OauthAccessTokenRequestRefresh {
}