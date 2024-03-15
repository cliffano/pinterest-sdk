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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface SSIOAccountPMPName
 */
export interface SSIOAccountPMPName  {
    /**
     * Display name
     * @type {string}
     * @memberof SSIOAccountPMPName
     */
    name?: string;
    /**
     * Salesforce id for PMP
     * @type {string}
     * @memberof SSIOAccountPMPName
     */
    id?: string;
}

export function SSIOAccountPMPNameFromJSON(json: any): SSIOAccountPMPName {
    return {
        'name': !exists(json, 'name') ? undefined : json['name'],
        'id': !exists(json, 'id') ? undefined : json['id'],
    };
}

export function SSIOAccountPMPNameToJSON(value?: SSIOAccountPMPName): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'name': value.name,
        'id': value.id,
    };
}

