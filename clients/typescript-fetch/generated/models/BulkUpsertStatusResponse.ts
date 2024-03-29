/* tslint:disable */
/* eslint-disable */
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

import { mapValues } from '../runtime';
import type { BulkUpsertStatus } from './BulkUpsertStatus';
import {
    BulkUpsertStatusFromJSON,
    BulkUpsertStatusFromJSONTyped,
    BulkUpsertStatusToJSON,
} from './BulkUpsertStatus';

/**
 * ID of the bulk request.
 * @export
 * @interface BulkUpsertStatusResponse
 */
export interface BulkUpsertStatusResponse {
    /**
     * 
     * @type {BulkUpsertStatus}
     * @memberof BulkUpsertStatusResponse
     */
    status?: BulkUpsertStatus;
    /**
     * 
     * @type {string}
     * @memberof BulkUpsertStatusResponse
     */
    resultUrl?: string;
}

/**
 * Check if a given object implements the BulkUpsertStatusResponse interface.
 */
export function instanceOfBulkUpsertStatusResponse(value: object): boolean {
    return true;
}

export function BulkUpsertStatusResponseFromJSON(json: any): BulkUpsertStatusResponse {
    return BulkUpsertStatusResponseFromJSONTyped(json, false);
}

export function BulkUpsertStatusResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): BulkUpsertStatusResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'status': json['status'] == null ? undefined : BulkUpsertStatusFromJSON(json['status']),
        'resultUrl': json['result_url'] == null ? undefined : json['result_url'],
    };
}

export function BulkUpsertStatusResponseToJSON(value?: BulkUpsertStatusResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'status': BulkUpsertStatusToJSON(value['status']),
        'result_url': value['resultUrl'],
    };
}

