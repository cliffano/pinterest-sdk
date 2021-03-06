// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
/**
 * Sections help organize pins within a board.
 * @export
 * @interface BoardSection
 */
export interface BoardSection  {
    /**
     * 
     * @type {string}
     * @memberof BoardSection
     */
    readonly id?: string;
    /**
     * 
     * @type {string}
     * @memberof BoardSection
     */
    name?: string;
}

export function BoardSectionFromJSON(json: any): BoardSection {
    return {
        'id': !exists(json, 'id') ? undefined : json['id'],
        'name': !exists(json, 'name') ? undefined : json['name'],
    };
}

export function BoardSectionToJSON(value?: BoardSection): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'name': value.name,
    };
}


