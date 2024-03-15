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
import type { SSIOAccountItem } from './SSIOAccountItem';
import {
    SSIOAccountItemFromJSON,
    SSIOAccountItemFromJSONTyped,
    SSIOAccountItemToJSON,
} from './SSIOAccountItem';
import type { SSIOAccountPMPName } from './SSIOAccountPMPName';
import {
    SSIOAccountPMPNameFromJSON,
    SSIOAccountPMPNameFromJSONTyped,
    SSIOAccountPMPNameToJSON,
} from './SSIOAccountPMPName';

/**
 * 
 * @export
 * @interface SSIOAccountResponse
 */
export interface SSIOAccountResponse {
    /**
     * Advertiser eligible to create order lines
     * @type {boolean}
     * @memberof SSIOAccountResponse
     */
    eligible?: boolean;
    /**
     * Advertiser eligible to update order lines
     * @type {boolean}
     * @memberof SSIOAccountResponse
     */
    canEdit?: boolean;
    /**
     * An array of Salesforce account information that includes address, io terms, etc.
     * @type {Array<SSIOAccountItem>}
     * @memberof SSIOAccountResponse
     */
    billtoInfos?: Array<SSIOAccountItem>;
    /**
     * 
     * @type {string}
     * @memberof SSIOAccountResponse
     */
    currency?: string;
    /**
     * 
     * @type {Array<SSIOAccountPMPName>}
     * @memberof SSIOAccountResponse
     */
    pmpNames?: Array<SSIOAccountPMPName>;
    /**
     * Error indicator from Salesforce which could be "No Error"
     * @type {string}
     * @memberof SSIOAccountResponse
     */
    error?: string;
}

/**
 * Check if a given object implements the SSIOAccountResponse interface.
 */
export function instanceOfSSIOAccountResponse(value: object): boolean {
    return true;
}

export function SSIOAccountResponseFromJSON(json: any): SSIOAccountResponse {
    return SSIOAccountResponseFromJSONTyped(json, false);
}

export function SSIOAccountResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): SSIOAccountResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'eligible': json['eligible'] == null ? undefined : json['eligible'],
        'canEdit': json['can_edit'] == null ? undefined : json['can_edit'],
        'billtoInfos': json['billto_infos'] == null ? undefined : ((json['billto_infos'] as Array<any>).map(SSIOAccountItemFromJSON)),
        'currency': json['currency'] == null ? undefined : json['currency'],
        'pmpNames': json['pmp_names'] == null ? undefined : ((json['pmp_names'] as Array<any>).map(SSIOAccountPMPNameFromJSON)),
        'error': json['error'] == null ? undefined : json['error'],
    };
}

export function SSIOAccountResponseToJSON(value?: SSIOAccountResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'eligible': value['eligible'],
        'can_edit': value['canEdit'],
        'billto_infos': value['billtoInfos'] == null ? undefined : ((value['billtoInfos'] as Array<any>).map(SSIOAccountItemToJSON)),
        'currency': value['currency'],
        'pmp_names': value['pmpNames'] == null ? undefined : ((value['pmpNames'] as Array<any>).map(SSIOAccountPMPNameToJSON)),
        'error': value['error'],
    };
}
