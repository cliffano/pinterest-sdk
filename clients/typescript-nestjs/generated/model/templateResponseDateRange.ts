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
import { TemplateResponseDateRangeRelativeDateRange } from './templateResponseDateRangeRelativeDateRange';
import { TemplateResponseDateRangeAbsoluteDateRange } from './templateResponseDateRangeAbsoluteDateRange';
import { TemplateResponseDateRangeDynamicDateRange } from './templateResponseDateRangeDynamicDateRange';


export interface TemplateResponseDateRange { 
    dynamic_date_range?: TemplateResponseDateRangeDynamicDateRange | null;
    relative_date_range?: TemplateResponseDateRangeRelativeDateRange | null;
    absolute_date_range?: TemplateResponseDateRangeAbsoluteDateRange | null;
}

