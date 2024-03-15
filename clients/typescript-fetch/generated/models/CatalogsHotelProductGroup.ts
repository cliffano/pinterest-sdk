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
import type { CatalogsHotelProductGroupFilters } from './CatalogsHotelProductGroupFilters';
import {
    CatalogsHotelProductGroupFiltersFromJSON,
    CatalogsHotelProductGroupFiltersFromJSONTyped,
    CatalogsHotelProductGroupFiltersToJSON,
} from './CatalogsHotelProductGroupFilters';

/**
 * 
 * @export
 * @interface CatalogsHotelProductGroup
 */
export interface CatalogsHotelProductGroup {
    /**
     * 
     * @type {string}
     * @memberof CatalogsHotelProductGroup
     */
    catalogType: CatalogsHotelProductGroupCatalogTypeEnum;
    /**
     * ID of the hotel product group.
     * @type {string}
     * @memberof CatalogsHotelProductGroup
     */
    id: string;
    /**
     * Name of hotel product group
     * @type {string}
     * @memberof CatalogsHotelProductGroup
     */
    name?: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsHotelProductGroup
     */
    description?: string;
    /**
     * 
     * @type {CatalogsHotelProductGroupFilters}
     * @memberof CatalogsHotelProductGroup
     */
    filters: CatalogsHotelProductGroupFilters;
    /**
     * Unix timestamp in seconds of when catalog product group was created.
     * @type {number}
     * @memberof CatalogsHotelProductGroup
     */
    createdAt?: number;
    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     * @type {number}
     * @memberof CatalogsHotelProductGroup
     */
    updatedAt?: number;
    /**
     * 
     * @type {string}
     * @memberof CatalogsHotelProductGroup
     */
    catalogId: string;
}


/**
 * @export
 */
export const CatalogsHotelProductGroupCatalogTypeEnum = {
    Hotel: 'HOTEL'
} as const;
export type CatalogsHotelProductGroupCatalogTypeEnum = typeof CatalogsHotelProductGroupCatalogTypeEnum[keyof typeof CatalogsHotelProductGroupCatalogTypeEnum];


/**
 * Check if a given object implements the CatalogsHotelProductGroup interface.
 */
export function instanceOfCatalogsHotelProductGroup(value: object): boolean {
    if (!('catalogType' in value)) return false;
    if (!('id' in value)) return false;
    if (!('filters' in value)) return false;
    if (!('catalogId' in value)) return false;
    return true;
}

export function CatalogsHotelProductGroupFromJSON(json: any): CatalogsHotelProductGroup {
    return CatalogsHotelProductGroupFromJSONTyped(json, false);
}

export function CatalogsHotelProductGroupFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsHotelProductGroup {
    if (json == null) {
        return json;
    }
    return {
        
        'catalogType': json['catalog_type'],
        'id': json['id'],
        'name': json['name'] == null ? undefined : json['name'],
        'description': json['description'] == null ? undefined : json['description'],
        'filters': CatalogsHotelProductGroupFiltersFromJSON(json['filters']),
        'createdAt': json['created_at'] == null ? undefined : json['created_at'],
        'updatedAt': json['updated_at'] == null ? undefined : json['updated_at'],
        'catalogId': json['catalog_id'],
    };
}

export function CatalogsHotelProductGroupToJSON(value?: CatalogsHotelProductGroup | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'catalog_type': value['catalogType'],
        'id': value['id'],
        'name': value['name'],
        'description': value['description'],
        'filters': CatalogsHotelProductGroupFiltersToJSON(value['filters']),
        'created_at': value['createdAt'],
        'updated_at': value['updatedAt'],
        'catalog_id': value['catalogId'],
    };
}

