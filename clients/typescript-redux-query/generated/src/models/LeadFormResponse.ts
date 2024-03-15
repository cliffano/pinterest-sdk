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

import {
    LeadFormQuestion,
    LeadFormQuestionFromJSON,
    LeadFormQuestionToJSON,
    LeadFormStatus,
    LeadFormStatusFromJSON,
    LeadFormStatusToJSON,
} from './';

/**
 * @type LeadFormResponse
 * @export
 */
export interface LeadFormResponse extends LeadFormCommon {
}

export function LeadFormResponseFromJSON(json: any): LeadFormResponse {
    return {
        ...LeadFormCommonFromJSON(json),
    };
}

export function LeadFormResponseToJSON(value?: LeadFormResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...LeadFormCommonToJSON(value),
    };
}
