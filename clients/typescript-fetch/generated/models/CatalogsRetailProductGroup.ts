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
import type { CatalogsProductGroupFilters } from './CatalogsProductGroupFilters';
import {
    CatalogsProductGroupFiltersFromJSON,
    CatalogsProductGroupFiltersFromJSONTyped,
    CatalogsProductGroupFiltersToJSON,
} from './CatalogsProductGroupFilters';
import type { CatalogsProductGroupStatus } from './CatalogsProductGroupStatus';
import {
    CatalogsProductGroupStatusFromJSON,
    CatalogsProductGroupStatusFromJSONTyped,
    CatalogsProductGroupStatusToJSON,
} from './CatalogsProductGroupStatus';
import type { CatalogsProductGroupType } from './CatalogsProductGroupType';
import {
    CatalogsProductGroupTypeFromJSON,
    CatalogsProductGroupTypeFromJSONTyped,
    CatalogsProductGroupTypeToJSON,
} from './CatalogsProductGroupType';

/**
 * 
 * @export
 * @interface CatalogsRetailProductGroup
 */
export interface CatalogsRetailProductGroup {
    /**
     * 
     * @type {string}
     * @memberof CatalogsRetailProductGroup
     */
    catalogType: CatalogsRetailProductGroupCatalogTypeEnum;
    /**
     * ID of the catalog product group.
     * @type {string}
     * @memberof CatalogsRetailProductGroup
     */
    id: string;
    /**
     * Name of catalog product group
     * @type {string}
     * @memberof CatalogsRetailProductGroup
     */
    name?: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsRetailProductGroup
     */
    description?: string;
    /**
     * 
     * @type {CatalogsProductGroupFilters}
     * @memberof CatalogsRetailProductGroup
     */
    filters: CatalogsProductGroupFilters;
    /**
     * boolean indicator of whether the product group is being featured or not
     * @type {boolean}
     * @memberof CatalogsRetailProductGroup
     */
    isFeatured?: boolean;
    /**
     * 
     * @type {CatalogsProductGroupType}
     * @memberof CatalogsRetailProductGroup
     */
    type?: CatalogsProductGroupType;
    /**
     * 
     * @type {CatalogsProductGroupStatus}
     * @memberof CatalogsRetailProductGroup
     */
    status?: CatalogsProductGroupStatus;
    /**
     * Unix timestamp in seconds of when catalog product group was created.
     * @type {number}
     * @memberof CatalogsRetailProductGroup
     */
    createdAt?: number;
    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     * @type {number}
     * @memberof CatalogsRetailProductGroup
     */
    updatedAt?: number;
    /**
     * 
     * @type {string}
     * @memberof CatalogsRetailProductGroup
     */
    feedId: CatalogsRetailProductGroupFeedIdEnum | null;
}


/**
 * @export
 */
export const CatalogsRetailProductGroupCatalogTypeEnum = {
    Retail: 'RETAIL'
} as const;
export type CatalogsRetailProductGroupCatalogTypeEnum = typeof CatalogsRetailProductGroupCatalogTypeEnum[keyof typeof CatalogsRetailProductGroupCatalogTypeEnum];

/**
 * @export
 */
export const CatalogsRetailProductGroupFeedIdEnum = {
    Null: 'null'
} as const;
export type CatalogsRetailProductGroupFeedIdEnum = typeof CatalogsRetailProductGroupFeedIdEnum[keyof typeof CatalogsRetailProductGroupFeedIdEnum];


/**
 * Check if a given object implements the CatalogsRetailProductGroup interface.
 */
export function instanceOfCatalogsRetailProductGroup(value: object): boolean {
    if (!('catalogType' in value)) return false;
    if (!('id' in value)) return false;
    if (!('filters' in value)) return false;
    if (!('feedId' in value)) return false;
    return true;
}

export function CatalogsRetailProductGroupFromJSON(json: any): CatalogsRetailProductGroup {
    return CatalogsRetailProductGroupFromJSONTyped(json, false);
}

export function CatalogsRetailProductGroupFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsRetailProductGroup {
    if (json == null) {
        return json;
    }
    return {
        
        'catalogType': json['catalog_type'],
        'id': json['id'],
        'name': json['name'] == null ? undefined : json['name'],
        'description': json['description'] == null ? undefined : json['description'],
        'filters': CatalogsProductGroupFiltersFromJSON(json['filters']),
        'isFeatured': json['is_featured'] == null ? undefined : json['is_featured'],
        'type': json['type'] == null ? undefined : CatalogsProductGroupTypeFromJSON(json['type']),
        'status': json['status'] == null ? undefined : CatalogsProductGroupStatusFromJSON(json['status']),
        'createdAt': json['created_at'] == null ? undefined : json['created_at'],
        'updatedAt': json['updated_at'] == null ? undefined : json['updated_at'],
        'feedId': json['feed_id'],
    };
}

export function CatalogsRetailProductGroupToJSON(value?: CatalogsRetailProductGroup | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'catalog_type': value['catalogType'],
        'id': value['id'],
        'name': value['name'],
        'description': value['description'],
        'filters': CatalogsProductGroupFiltersToJSON(value['filters']),
        'is_featured': value['isFeatured'],
        'type': CatalogsProductGroupTypeToJSON(value['type']),
        'status': CatalogsProductGroupStatusToJSON(value['status']),
        'created_at': value['createdAt'],
        'updated_at': value['updatedAt'],
        'feed_id': value['feedId'],
    };
}

