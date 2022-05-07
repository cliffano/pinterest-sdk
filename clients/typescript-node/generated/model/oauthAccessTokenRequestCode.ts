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
import { OauthAccessTokenRequest } from './oauthAccessTokenRequest';
import { OauthAccessTokenRequestCodeAllOf } from './oauthAccessTokenRequestCodeAllOf';

/**
* A request to exchange an authorization code for an access token.
*/
export class OauthAccessTokenRequestCode extends OauthAccessTokenRequest {
    'code': string;
    'redirectUri': string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "code",
            "baseName": "code",
            "type": "string"
        },
        {
            "name": "redirectUri",
            "baseName": "redirect_uri",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return super.getAttributeTypeMap().concat(OauthAccessTokenRequestCode.attributeTypeMap);
    }
}

export namespace OauthAccessTokenRequestCode {
}
