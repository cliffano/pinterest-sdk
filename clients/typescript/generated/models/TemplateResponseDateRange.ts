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

import { TemplateResponseDateRangeAbsoluteDateRange } from '../models/TemplateResponseDateRangeAbsoluteDateRange';
import { TemplateResponseDateRangeDynamicDateRange } from '../models/TemplateResponseDateRangeDynamicDateRange';
import { TemplateResponseDateRangeRelativeDateRange } from '../models/TemplateResponseDateRangeRelativeDateRange';
import { HttpFile } from '../http/http';

export class TemplateResponseDateRange {
    'dynamicDateRange'?: TemplateResponseDateRangeDynamicDateRange | null;
    'relativeDateRange'?: TemplateResponseDateRangeRelativeDateRange | null;
    'absoluteDateRange'?: TemplateResponseDateRangeAbsoluteDateRange | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "dynamicDateRange",
            "baseName": "dynamic_date_range",
            "type": "TemplateResponseDateRangeDynamicDateRange",
            "format": ""
        },
        {
            "name": "relativeDateRange",
            "baseName": "relative_date_range",
            "type": "TemplateResponseDateRangeRelativeDateRange",
            "format": ""
        },
        {
            "name": "absoluteDateRange",
            "baseName": "absolute_date_range",
            "type": "TemplateResponseDateRangeAbsoluteDateRange",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return TemplateResponseDateRange.attributeTypeMap;
    }

    public constructor() {
    }
}
