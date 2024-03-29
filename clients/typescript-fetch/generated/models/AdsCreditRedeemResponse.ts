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
 * @interface AdsCreditRedeemResponse
 */
export interface AdsCreditRedeemResponse {
    /**
     * Returns true if the offer code was successfully applied(validateOnly=false) or can be applied(validateOnly=true).
     * @type {boolean}
     * @memberof AdsCreditRedeemResponse
     */
    success?: boolean;
    /**
     * Error code type if error occurs
     * @type {number}
     * @memberof AdsCreditRedeemResponse
     */
    errorCode?: number;
    /**
     * Reason for failure
     * @type {string}
     * @memberof AdsCreditRedeemResponse
     */
    errorMessage?: string;
}

/**
 * Check if a given object implements the AdsCreditRedeemResponse interface.
 */
export function instanceOfAdsCreditRedeemResponse(value: object): boolean {
    return true;
}

export function AdsCreditRedeemResponseFromJSON(json: any): AdsCreditRedeemResponse {
    return AdsCreditRedeemResponseFromJSONTyped(json, false);
}

export function AdsCreditRedeemResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdsCreditRedeemResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'success': json['success'] == null ? undefined : json['success'],
        'errorCode': json['errorCode'] == null ? undefined : json['errorCode'],
        'errorMessage': json['errorMessage'] == null ? undefined : json['errorMessage'],
    };
}

export function AdsCreditRedeemResponseToJSON(value?: AdsCreditRedeemResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'success': value['success'],
        'errorCode': value['errorCode'],
        'errorMessage': value['errorMessage'],
    };
}

