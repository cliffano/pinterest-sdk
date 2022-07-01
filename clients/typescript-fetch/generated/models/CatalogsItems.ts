/* tslint:disable */
/* eslint-disable */
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
import {
    ItemBatchRecord,
    ItemBatchRecordFromJSON,
    ItemBatchRecordFromJSONTyped,
    ItemBatchRecordToJSON,
} from './ItemBatchRecord';

/**
 * Response object of catalogs items
 * @export
 * @interface CatalogsItems
 */
export interface CatalogsItems {
    /**
     * Array with catalogs items
     * @type {Array<ItemBatchRecord>}
     * @memberof CatalogsItems
     */
    items?: Array<ItemBatchRecord>;
}

export function CatalogsItemsFromJSON(json: any): CatalogsItems {
    return CatalogsItemsFromJSONTyped(json, false);
}

export function CatalogsItemsFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsItems {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'items': !exists(json, 'items') ? undefined : ((json['items'] as Array<any>).map(ItemBatchRecordFromJSON)),
    };
}

export function CatalogsItemsToJSON(value?: CatalogsItems | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'items': value.items === undefined ? undefined : ((value.items as Array<any>).map(ItemBatchRecordToJSON)),
    };
}

