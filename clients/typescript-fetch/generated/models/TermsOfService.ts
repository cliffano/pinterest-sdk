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
/**
 * 
 * @export
 * @interface TermsOfService
 */
export interface TermsOfService {
    /**
     * The ID of the terms of service
     * @type {string}
     * @memberof TermsOfService
     */
    id?: string;
    /**
     * The terms of service content
     * @type {string}
     * @memberof TermsOfService
     */
    html?: string;
    /**
     * Whether the ad account has accepted terms of service.
     * @type {boolean}
     * @memberof TermsOfService
     */
    hasAccepted?: boolean;
    /**
     * The ID of the ad account.
     * @type {string}
     * @memberof TermsOfService
     */
    adAccountId?: string;
}

/**
 * Check if a given object implements the TermsOfService interface.
 */
export function instanceOfTermsOfService(value: object): boolean {
    return true;
}

export function TermsOfServiceFromJSON(json: any): TermsOfService {
    return TermsOfServiceFromJSONTyped(json, false);
}

export function TermsOfServiceFromJSONTyped(json: any, ignoreDiscriminator: boolean): TermsOfService {
    if (json == null) {
        return json;
    }
    return {
        
        'id': json['id'] == null ? undefined : json['id'],
        'html': json['html'] == null ? undefined : json['html'],
        'hasAccepted': json['has_accepted'] == null ? undefined : json['has_accepted'],
        'adAccountId': json['ad_account_id'] == null ? undefined : json['ad_account_id'],
    };
}

export function TermsOfServiceToJSON(value?: TermsOfService | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'id': value['id'],
        'html': value['html'],
        'has_accepted': value['hasAccepted'],
        'ad_account_id': value['adAccountId'],
    };
}

