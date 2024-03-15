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
* The absolute date range of the template
*/
export class TemplateResponseDateRangeAbsoluteDateRange {
    /**
    * The date range type
    */
    'type'?: string;
    /**
    * The start date of the date range
    */
    'startDate'?: number;
    /**
    * The end date of the date range
    */
    'endDate'?: number;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "type",
            "baseName": "type",
            "type": "string",
            "format": ""
        },
        {
            "name": "startDate",
            "baseName": "start_date",
            "type": "number",
            "format": ""
        },
        {
            "name": "endDate",
            "baseName": "end_date",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return TemplateResponseDateRangeAbsoluteDateRange.attributeTypeMap;
    }

    public constructor() {
    }
}

