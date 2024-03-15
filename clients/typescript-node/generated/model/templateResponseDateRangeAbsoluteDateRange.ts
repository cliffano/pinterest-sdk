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

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "type",
            "baseName": "type",
            "type": "string"
        },
        {
            "name": "startDate",
            "baseName": "start_date",
            "type": "number"
        },
        {
            "name": "endDate",
            "baseName": "end_date",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return TemplateResponseDateRangeAbsoluteDateRange.attributeTypeMap;
    }
}

