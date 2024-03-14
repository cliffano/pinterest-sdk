/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { BulkUpsertRequestCreate } from './BulkUpsertRequestCreate';
import {
    BulkUpsertRequestCreateFromJSON,
    BulkUpsertRequestCreateFromJSONTyped,
    BulkUpsertRequestCreateToJSON,
} from './BulkUpsertRequestCreate';
import type { BulkUpsertRequestUpdate } from './BulkUpsertRequestUpdate';
import {
    BulkUpsertRequestUpdateFromJSON,
    BulkUpsertRequestUpdateFromJSONTyped,
    BulkUpsertRequestUpdateToJSON,
} from './BulkUpsertRequestUpdate';

/**
 * Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
 * @export
 * @interface BulkUpsertRequest
 */
export interface BulkUpsertRequest {
    /**
     * 
     * @type {BulkUpsertRequestCreate}
     * @memberof BulkUpsertRequest
     */
    create?: BulkUpsertRequestCreate;
    /**
     * 
     * @type {BulkUpsertRequestUpdate}
     * @memberof BulkUpsertRequest
     */
    update?: BulkUpsertRequestUpdate;
}

/**
 * Check if a given object implements the BulkUpsertRequest interface.
 */
export function instanceOfBulkUpsertRequest(value: object): boolean {
    return true;
}

export function BulkUpsertRequestFromJSON(json: any): BulkUpsertRequest {
    return BulkUpsertRequestFromJSONTyped(json, false);
}

export function BulkUpsertRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): BulkUpsertRequest {
    if (json == null) {
        return json;
    }
    return {
        
        'create': json['create'] == null ? undefined : BulkUpsertRequestCreateFromJSON(json['create']),
        'update': json['update'] == null ? undefined : BulkUpsertRequestUpdateFromJSON(json['update']),
    };
}

export function BulkUpsertRequestToJSON(value?: BulkUpsertRequest | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'create': BulkUpsertRequestCreateToJSON(value['create']),
        'update': BulkUpsertRequestUpdateToJSON(value['update']),
    };
}

