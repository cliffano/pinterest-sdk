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
import type { OrderLines } from './OrderLines';
import {
    OrderLinesFromJSON,
    OrderLinesFromJSONTyped,
    OrderLinesToJSON,
} from './OrderLines';

/**
 * 
 * @export
 * @interface OrderLinesArrayResponse
 */
export interface OrderLinesArrayResponse {
    /**
     * 
     * @type {Array<OrderLines>}
     * @memberof OrderLinesArrayResponse
     */
    items?: Array<OrderLines>;
}

/**
 * Check if a given object implements the OrderLinesArrayResponse interface.
 */
export function instanceOfOrderLinesArrayResponse(value: object): boolean {
    return true;
}

export function OrderLinesArrayResponseFromJSON(json: any): OrderLinesArrayResponse {
    return OrderLinesArrayResponseFromJSONTyped(json, false);
}

export function OrderLinesArrayResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): OrderLinesArrayResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'items': json['items'] == null ? undefined : ((json['items'] as Array<any>).map(OrderLinesFromJSON)),
    };
}

export function OrderLinesArrayResponseToJSON(value?: OrderLinesArrayResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': value['items'] == null ? undefined : ((value['items'] as Array<any>).map(OrderLinesToJSON)),
    };
}

