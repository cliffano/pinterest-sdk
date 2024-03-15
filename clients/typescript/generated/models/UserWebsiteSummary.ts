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

import { HttpFile } from '../http/http';

export class UserWebsiteSummary {
    /**
    * Website with path or domain only
    */
    'website'?: string;
    /**
    * Status of the verification process
    */
    'status'?: string;
    /**
    * UTC timestamp when the verification happened - sometimes missing
    */
    'verifiedAt'?: string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "website",
            "baseName": "website",
            "type": "string",
            "format": ""
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "string",
            "format": ""
        },
        {
            "name": "verifiedAt",
            "baseName": "verified_at",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return UserWebsiteSummary.attributeTypeMap;
    }

    public constructor() {
    }
}

