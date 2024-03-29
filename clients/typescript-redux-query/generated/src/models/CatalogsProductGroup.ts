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
import {
    CatalogsProductGroupFilters,
    CatalogsProductGroupFiltersFromJSON,
    CatalogsProductGroupFiltersToJSON,
    CatalogsProductGroupStatus,
    CatalogsProductGroupStatusFromJSON,
    CatalogsProductGroupStatusToJSON,
    CatalogsProductGroupType,
    CatalogsProductGroupTypeFromJSON,
    CatalogsProductGroupTypeToJSON,
} from './';

/**
 * catalog product group entity
 * @export
 * @interface CatalogsProductGroup
 */
export interface CatalogsProductGroup  {
    /**
     * ID of the catalog product group.
     * @type {string}
     * @memberof CatalogsProductGroup
     */
    id: string;
    /**
     * Name of catalog product group
     * @type {string}
     * @memberof CatalogsProductGroup
     */
    name?: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsProductGroup
     */
    description?: string;
    /**
     * 
     * @type {CatalogsProductGroupFilters}
     * @memberof CatalogsProductGroup
     */
    filters: CatalogsProductGroupFilters;
    /**
     * boolean indicator of whether the product group is being featured or not
     * @type {boolean}
     * @memberof CatalogsProductGroup
     */
    isFeatured?: boolean;
    /**
     * 
     * @type {CatalogsProductGroupType}
     * @memberof CatalogsProductGroup
     */
    type?: CatalogsProductGroupType;
    /**
     * 
     * @type {CatalogsProductGroupStatus}
     * @memberof CatalogsProductGroup
     */
    status?: CatalogsProductGroupStatus;
    /**
     * Unix timestamp in seconds of when catalog product group was created.
     * @type {number}
     * @memberof CatalogsProductGroup
     */
    createdAt?: number;
    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     * @type {number}
     * @memberof CatalogsProductGroup
     */
    updatedAt?: number;
    /**
     * id of the catalogs feed belonging to this catalog product group
     * @type {string}
     * @memberof CatalogsProductGroup
     */
    feedId: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsProductGroup
     */
    catalogType?: CatalogsProductGroupCatalogTypeEnum;
}

export function CatalogsProductGroupFromJSON(json: any): CatalogsProductGroup {
    return {
        'id': json['id'],
        'name': !exists(json, 'name') ? undefined : json['name'],
        'description': !exists(json, 'description') ? undefined : json['description'],
        'filters': CatalogsProductGroupFiltersFromJSON(json['filters']),
        'isFeatured': !exists(json, 'is_featured') ? undefined : json['is_featured'],
        'type': !exists(json, 'type') ? undefined : CatalogsProductGroupTypeFromJSON(json['type']),
        'status': !exists(json, 'status') ? undefined : CatalogsProductGroupStatusFromJSON(json['status']),
        'createdAt': !exists(json, 'created_at') ? undefined : json['created_at'],
        'updatedAt': !exists(json, 'updated_at') ? undefined : json['updated_at'],
        'feedId': json['feed_id'],
        'catalogType': !exists(json, 'catalog_type') ? undefined : json['catalog_type'],
    };
}

export function CatalogsProductGroupToJSON(value?: CatalogsProductGroup): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'id': value.id,
        'name': value.name,
        'description': value.description,
        'filters': CatalogsProductGroupFiltersToJSON(value.filters),
        'is_featured': value.isFeatured,
        'type': CatalogsProductGroupTypeToJSON(value.type),
        'status': CatalogsProductGroupStatusToJSON(value.status),
        'created_at': value.createdAt,
        'updated_at': value.updatedAt,
        'feed_id': value.feedId,
        'catalog_type': value.catalogType,
    };
}

/**
* @export
* @enum {string}
*/
export enum CatalogsProductGroupCatalogTypeEnum {
    Retail = 'RETAIL'
}


