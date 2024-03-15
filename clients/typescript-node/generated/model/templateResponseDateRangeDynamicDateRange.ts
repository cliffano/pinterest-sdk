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
* The dynamic date range of the template
*/
export class TemplateResponseDateRangeDynamicDateRange {
    /**
    * The date range type
    */
    'type'?: string;
    /**
    * The dynamic range type
    */
    'range'?: TemplateResponseDateRangeDynamicDateRange.RangeEnum;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "type",
            "baseName": "type",
            "type": "string"
        },
        {
            "name": "range",
            "baseName": "range",
            "type": "TemplateResponseDateRangeDynamicDateRange.RangeEnum"
        }    ];

    static getAttributeTypeMap() {
        return TemplateResponseDateRangeDynamicDateRange.attributeTypeMap;
    }
}

export namespace TemplateResponseDateRangeDynamicDateRange {
    export enum RangeEnum {
        YearToDate = <any> 'YEAR_TO_DATE',
        QuarterToDate = <any> 'QUARTER_TO_DATE',
        MonthToDate = <any> 'MONTH_TO_DATE',
        LastMonth = <any> 'LAST_MONTH'
    }
}
