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

import type { CatalogsHotelItemsBatch } from './CatalogsHotelItemsBatch';
import {
    instanceOfCatalogsHotelItemsBatch,
    CatalogsHotelItemsBatchFromJSON,
    CatalogsHotelItemsBatchFromJSONTyped,
    CatalogsHotelItemsBatchToJSON,
} from './CatalogsHotelItemsBatch';
import type { CatalogsRetailItemsBatch } from './CatalogsRetailItemsBatch';
import {
    instanceOfCatalogsRetailItemsBatch,
    CatalogsRetailItemsBatchFromJSON,
    CatalogsRetailItemsBatchFromJSONTyped,
    CatalogsRetailItemsBatchToJSON,
} from './CatalogsRetailItemsBatch';

/**
 * @type CatalogsItemsBatch
 * Object describing the catalogs items batch
 * @export
 */
export type CatalogsItemsBatch = { catalogType: 'HOTEL' } & CatalogsHotelItemsBatch | { catalogType: 'RETAIL' } & CatalogsRetailItemsBatch;

export function CatalogsItemsBatchFromJSON(json: any): CatalogsItemsBatch {
    return CatalogsItemsBatchFromJSONTyped(json, false);
}

export function CatalogsItemsBatchFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsItemsBatch {
    if (json == null) {
        return json;
    }
    switch (json['catalog_type']) {
        case 'HOTEL':
            return {...CatalogsHotelItemsBatchFromJSONTyped(json, true), catalogType: 'HOTEL'};
        case 'RETAIL':
            return {...CatalogsRetailItemsBatchFromJSONTyped(json, true), catalogType: 'RETAIL'};
        default:
            throw new Error(`No variant of CatalogsItemsBatch exists with 'catalogType=${json['catalogType']}'`);
    }
}

export function CatalogsItemsBatchToJSON(value?: CatalogsItemsBatch | null): any {
    if (value == null) {
        return value;
    }
    switch (value['catalogType']) {
        case 'HOTEL':
            return CatalogsHotelItemsBatchToJSON(value);
        case 'RETAIL':
            return CatalogsRetailItemsBatchToJSON(value);
        default:
            throw new Error(`No variant of CatalogsItemsBatch exists with 'catalogType=${value['catalogType']}'`);
    }

}

