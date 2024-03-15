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
 * The result, and link out, based on the user’s choice.
 * @export
 * @interface QuizPinResult
 */
export interface QuizPinResult {
    /**
     * 
     * @type {string}
     * @memberof QuizPinResult
     */
    organicPinId?: string;
    /**
     * 
     * @type {string}
     * @memberof QuizPinResult
     */
    androidDeepLink?: string;
    /**
     * 
     * @type {string}
     * @memberof QuizPinResult
     */
    iosDeepLink?: string;
    /**
     * 
     * @type {string}
     * @memberof QuizPinResult
     */
    destinationUrl?: string;
    /**
     * 
     * @type {number}
     * @memberof QuizPinResult
     */
    resultId?: number;
}

/**
 * Check if a given object implements the QuizPinResult interface.
 */
export function instanceOfQuizPinResult(value: object): boolean {
    return true;
}

export function QuizPinResultFromJSON(json: any): QuizPinResult {
    return QuizPinResultFromJSONTyped(json, false);
}

export function QuizPinResultFromJSONTyped(json: any, ignoreDiscriminator: boolean): QuizPinResult {
    if (json == null) {
        return json;
    }
    return {
        
        'organicPinId': json['organic_pin_id'] == null ? undefined : json['organic_pin_id'],
        'androidDeepLink': json['android_deep_link'] == null ? undefined : json['android_deep_link'],
        'iosDeepLink': json['ios_deep_link'] == null ? undefined : json['ios_deep_link'],
        'destinationUrl': json['destination_url'] == null ? undefined : json['destination_url'],
        'resultId': json['result_id'] == null ? undefined : json['result_id'],
    };
}

export function QuizPinResultToJSON(value?: QuizPinResult | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'organic_pin_id': value['organicPinId'],
        'android_deep_link': value['androidDeepLink'],
        'ios_deep_link': value['iosDeepLink'],
        'destination_url': value['destinationUrl'],
        'result_id': value['resultId'],
    };
}
