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
    ConversionTagConfigs,
    ConversionTagConfigsFromJSON,
    ConversionTagConfigsToJSON,
    EnhancedMatchStatusType,
    EnhancedMatchStatusTypeFromJSON,
    EnhancedMatchStatusTypeToJSON,
    EntityStatus,
    EntityStatusFromJSON,
    EntityStatusToJSON,
} from './';

/**
 * @type ConversionTagResponse
 * @export
 */
export interface ConversionTagResponse extends ConversionTagCommon {
}

export function ConversionTagResponseFromJSON(json: any): ConversionTagResponse {
    return {
        ...ConversionTagCommonFromJSON(json),
    };
}

export function ConversionTagResponseToJSON(value?: ConversionTagResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...ConversionTagCommonToJSON(value),
    };
}
