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
import { MatchTypeResponse } from './matchTypeResponse';

export class AdGroupAudienceSizingRequestKeywordsInner {
    'matchType': MatchTypeResponse | null;
    /**
    * Keyword value (120 chars max).
    */
    'value': string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "matchType",
            "baseName": "match_type",
            "type": "MatchTypeResponse"
        },
        {
            "name": "value",
            "baseName": "value",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return AdGroupAudienceSizingRequestKeywordsInner.attributeTypeMap;
    }
}

export namespace AdGroupAudienceSizingRequestKeywordsInner {
}