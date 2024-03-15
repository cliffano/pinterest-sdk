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
 * @interface AdAccountCreateSubscriptionResponse
 */
export interface AdAccountCreateSubscriptionResponse {
    /**
     * Subscription ID.
     * @type {string}
     * @memberof AdAccountCreateSubscriptionResponse
     */
    id?: string;
    /**
     * Base64 encoded key for client to decrypt lead data.
     * @type {string}
     * @memberof AdAccountCreateSubscriptionResponse
     */
    cryptographicKey?: string;
    /**
     * Lead data encryption algorithm.
     * @type {string}
     * @memberof AdAccountCreateSubscriptionResponse
     */
    cryptographicAlgorithm?: string;
    /**
     * Subscription creation time. Unix timestamp in milliseconds.
     * @type {number}
     * @memberof AdAccountCreateSubscriptionResponse
     */
    createdTime?: number;
}

/**
 * Check if a given object implements the AdAccountCreateSubscriptionResponse interface.
 */
export function instanceOfAdAccountCreateSubscriptionResponse(value: object): boolean {
    return true;
}

export function AdAccountCreateSubscriptionResponseFromJSON(json: any): AdAccountCreateSubscriptionResponse {
    return AdAccountCreateSubscriptionResponseFromJSONTyped(json, false);
}

export function AdAccountCreateSubscriptionResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdAccountCreateSubscriptionResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'id': json['id'] == null ? undefined : json['id'],
        'cryptographicKey': json['cryptographic_key'] == null ? undefined : json['cryptographic_key'],
        'cryptographicAlgorithm': json['cryptographic_algorithm'] == null ? undefined : json['cryptographic_algorithm'],
        'createdTime': json['created_time'] == null ? undefined : json['created_time'],
    };
}

export function AdAccountCreateSubscriptionResponseToJSON(value?: AdAccountCreateSubscriptionResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'id': value['id'],
        'cryptographic_key': value['cryptographicKey'],
        'cryptographic_algorithm': value['cryptographicAlgorithm'],
        'created_time': value['createdTime'],
    };
}
