// tslint:disable
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

/**
 * The dynamic date range of the template
 * @export
 * @interface TemplateResponseDateRangeDynamicDateRange
 */
export interface TemplateResponseDateRangeDynamicDateRange {
    /**
     * The date range type
     * @type {string}
     * @memberof TemplateResponseDateRangeDynamicDateRange
     */
    type?: string;
    /**
     * The dynamic range type
     * @type {string}
     * @memberof TemplateResponseDateRangeDynamicDateRange
     */
    range?: TemplateResponseDateRangeDynamicDateRangeRangeEnum;
}

/**
 * @export
 * @enum {string}
 */
export enum TemplateResponseDateRangeDynamicDateRangeRangeEnum {
    YearToDate = 'YEAR_TO_DATE',
    QuarterToDate = 'QUARTER_TO_DATE',
    MonthToDate = 'MONTH_TO_DATE',
    LastMonth = 'LAST_MONTH'
}

