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
 * @interface CatalogsRetailItemsFilter
 */
export interface CatalogsRetailItemsFilter {
    /**
     * 
     * @type {string}
     * @memberof CatalogsRetailItemsFilter
     */
    catalogType: CatalogsRetailItemsFilterCatalogTypeEnum;
    /**
     * 
     * @type {Array<string>}
     * @memberof CatalogsRetailItemsFilter
     */
    itemIds: Array<string>;
    /**
     * Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog
     * @type {string}
     * @memberof CatalogsRetailItemsFilter
     */
    catalogId?: string;
}


/**
 * @export
 */
export const CatalogsRetailItemsFilterCatalogTypeEnum = {
    Retail: 'RETAIL'
} as const;
export type CatalogsRetailItemsFilterCatalogTypeEnum = typeof CatalogsRetailItemsFilterCatalogTypeEnum[keyof typeof CatalogsRetailItemsFilterCatalogTypeEnum];


/**
 * Check if a given object implements the CatalogsRetailItemsFilter interface.
 */
export function instanceOfCatalogsRetailItemsFilter(value: object): boolean {
    if (!('catalogType' in value)) return false;
    if (!('itemIds' in value)) return false;
    return true;
}

export function CatalogsRetailItemsFilterFromJSON(json: any): CatalogsRetailItemsFilter {
    return CatalogsRetailItemsFilterFromJSONTyped(json, false);
}

export function CatalogsRetailItemsFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsRetailItemsFilter {
    if (json == null) {
        return json;
    }
    return {
        
        'catalogType': json['catalog_type'],
        'itemIds': json['item_ids'],
        'catalogId': json['catalog_id'] == null ? undefined : json['catalog_id'],
    };
}

export function CatalogsRetailItemsFilterToJSON(value?: CatalogsRetailItemsFilter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'catalog_type': value['catalogType'],
        'item_ids': value['itemIds'],
        'catalog_id': value['catalogId'],
    };
}

