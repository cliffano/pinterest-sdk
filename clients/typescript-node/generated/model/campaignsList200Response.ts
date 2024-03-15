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
import { CampaignResponse } from './campaignResponse';

export class CampaignsList200Response {
    'items': Array<CampaignResponse>;
    'bookmark'?: string | null;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "items",
            "baseName": "items",
            "type": "Array<CampaignResponse>"
        },
        {
            "name": "bookmark",
            "baseName": "bookmark",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return CampaignsList200Response.attributeTypeMap;
    }
}

