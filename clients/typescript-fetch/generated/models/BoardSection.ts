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
 * Sections help organize pins within a board.
 * @export
 * @interface BoardSection
 */
export interface BoardSection {
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
    name: string;
}

/**
 * Check if a given object implements the BoardSection interface.
 */
export function instanceOfBoardSection(value: object): boolean {
    if (!('name' in value)) return false;
    return true;
}

export function BoardSectionFromJSON(json: any): BoardSection {
    return BoardSectionFromJSONTyped(json, false);
}

export function BoardSectionFromJSONTyped(json: any, ignoreDiscriminator: boolean): BoardSection {
    if (json == null) {
        return json;
    }
    return {
        
        'id': json['id'] == null ? undefined : json['id'],
        'name': json['name'],
    };
}

export function BoardSectionToJSON(value?: BoardSection | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'name': value['name'],
    };
}

