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

import { exists, mapValues } from '../runtime';
/**
 * The relative date range of the template
 * @export
 * @interface TemplateResponseDateRangeRelativeDateRange
 */
export interface TemplateResponseDateRangeRelativeDateRange  {
    /**
     * The date range type
     * @type {string}
     * @memberof TemplateResponseDateRangeRelativeDateRange
     */
    type?: string;
    /**
     * The start date of the date range
     * @type {number}
     * @memberof TemplateResponseDateRangeRelativeDateRange
     */
    startDaysInPast?: number;
    /**
     * The end date of the date range
     * @type {number}
     * @memberof TemplateResponseDateRangeRelativeDateRange
     */
    endDaysInPast?: number;
}

export function TemplateResponseDateRangeRelativeDateRangeFromJSON(json: any): TemplateResponseDateRangeRelativeDateRange {
    return {
        'type': !exists(json, 'type') ? undefined : json['type'],
        'startDaysInPast': !exists(json, 'start_days_in_past') ? undefined : json['start_days_in_past'],
        'endDaysInPast': !exists(json, 'end_days_in_past') ? undefined : json['end_days_in_past'],
    };
}

export function TemplateResponseDateRangeRelativeDateRangeToJSON(value?: TemplateResponseDateRangeRelativeDateRange): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'type': value.type,
        'start_days_in_past': value.startDaysInPast,
        'end_days_in_past': value.endDaysInPast,
    };
}


