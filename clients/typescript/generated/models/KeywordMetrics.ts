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

/**
* Keyword metrics JSON
*/
export class KeywordMetrics {
    /**
    * Average cost per click
    */
    'avgCpcInMicroCurrency'?: number;
    /**
    * Keyword\'s search frequency. This value is based on keyword frequency in pepsi client response
    */
    'keywordQueryVolume'?: string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "avgCpcInMicroCurrency",
            "baseName": "avg_cpc_in_micro_currency",
            "type": "number",
            "format": ""
        },
        {
            "name": "keywordQueryVolume",
            "baseName": "keyword_query_volume",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return KeywordMetrics.attributeTypeMap;
    }

    public constructor() {
    }
}
