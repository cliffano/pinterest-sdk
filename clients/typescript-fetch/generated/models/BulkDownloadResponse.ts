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
/**
 * 
 * @export
 * @interface BulkDownloadResponse
 */
export interface BulkDownloadResponse {
    /**
     * ID of the bulk request.
     * @type {string}
     * @memberof BulkDownloadResponse
     */
    requestId?: string;
}

/**
 * Check if a given object implements the BulkDownloadResponse interface.
 */
export function instanceOfBulkDownloadResponse(value: object): boolean {
    return true;
}

export function BulkDownloadResponseFromJSON(json: any): BulkDownloadResponse {
    return BulkDownloadResponseFromJSONTyped(json, false);
}

export function BulkDownloadResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): BulkDownloadResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'requestId': json['request_id'] == null ? undefined : json['request_id'],
    };
}

export function BulkDownloadResponseToJSON(value?: BulkDownloadResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'request_id': value['requestId'],
    };
}

