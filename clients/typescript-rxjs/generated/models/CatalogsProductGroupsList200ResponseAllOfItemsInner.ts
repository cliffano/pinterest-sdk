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

import type {
    CatalogsProductGroup,
    CatalogsProductGroupFilters,
    CatalogsProductGroupStatus,
    CatalogsProductGroupType,
    CatalogsVerticalProductGroup,
} from './';

/**
 * @export
 * @interface CatalogsProductGroupsList200ResponseAllOfItemsInner
 */
export interface CatalogsProductGroupsList200ResponseAllOfItemsInner {
    /**
     * ID of the catalog product group.
     * @type {string}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    id: string;
    /**
     * Name of catalog product group
     * @type {string}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    name?: string;
    /**
     * @type {string}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    description?: string | null;
    /**
     * @type {CatalogsProductGroupFilters}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    filters: CatalogsProductGroupFilters;
    /**
     * boolean indicator of whether the product group is being featured or not
     * @type {boolean}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    is_featured?: boolean;
    /**
     * @type {CatalogsProductGroupType}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    type?: CatalogsProductGroupType;
    /**
     * @type {CatalogsProductGroupStatus}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    status?: CatalogsProductGroupStatus;
    /**
     * Unix timestamp in seconds of when catalog product group was created.
     * @type {number}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    created_at?: number;
    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     * @type {number}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    updated_at?: number;
    /**
     * id of the catalogs feed belonging to this catalog product group
     * @type {string}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    feed_id: string;
    /**
     * @type {string}
     * @memberof CatalogsProductGroupsList200ResponseAllOfItemsInner
     */
    catalog_type?: CatalogsProductGroupsList200ResponseAllOfItemsInnerCatalogTypeEnum;
}

/**
 * @export
 * @enum {string}
 */
export enum CatalogsProductGroupsList200ResponseAllOfItemsInnerCatalogTypeEnum {
    Retail = 'RETAIL'
}
