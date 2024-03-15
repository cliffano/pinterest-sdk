/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { OauthAccessTokenRequest } from '../models/OauthAccessTokenRequest';
import { HttpFile } from '../http/http';

/**
* A request to exchange an authorization code for an access token.
*/
export class OauthAccessTokenRequestCode extends OauthAccessTokenRequest {
    'code': string;
    'redirectUri': string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "code",
            "baseName": "code",
            "type": "string",
            "format": ""
        },
        {
            "name": "redirectUri",
            "baseName": "redirect_uri",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return super.getAttributeTypeMap().concat(OauthAccessTokenRequestCode.attributeTypeMap);
    }

    public constructor() {
        super();
    }
}



