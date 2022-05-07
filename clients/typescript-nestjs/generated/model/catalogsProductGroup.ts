/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { CatalogsProductGroupStatus } from './catalogsProductGroupStatus';
import { CatalogsProductGroupType } from './catalogsProductGroupType';
import { CatalogsProductGroupFilters } from './catalogsProductGroupFilters';


/**
 * catalog product group entity
 */
export interface CatalogsProductGroup { 
    /**
     * ID of the catalog product group.
     */
    id: string;
    /**
     * Name of catalog product group
     */
    name?: string;
    description?: string | null;
    filters: CatalogsProductGroupFilters;
    type?: CatalogsProductGroupType;
    status?: CatalogsProductGroupStatus;
    /**
     * id of the catalogs feed belonging to this catalog product group
     */
    feed_id?: string;
    /**
     * Unix timestamp in seconds of when catalog product group was created.
     */
    created_at?: number;
    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     */
    updated_at?: number;
}

