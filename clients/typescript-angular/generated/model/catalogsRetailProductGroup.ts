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
import { CatalogsProductGroupStatus } from './catalogsProductGroupStatus';
import { CatalogsProductGroupType } from './catalogsProductGroupType';
import { CatalogsProductGroupFilters } from './catalogsProductGroupFilters';


export interface CatalogsRetailProductGroup { 
    catalog_type: CatalogsRetailProductGroup.CatalogTypeEnum;
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
    /**
     * boolean indicator of whether the product group is being featured or not
     */
    is_featured?: boolean;
    type?: CatalogsProductGroupType;
    status?: CatalogsProductGroupStatus;
    /**
     * Unix timestamp in seconds of when catalog product group was created.
     */
    created_at?: number;
    /**
     * Unix timestamp in seconds of last time catalog product group was updated.
     */
    updated_at?: number;
    feed_id: CatalogsRetailProductGroup.FeedIdEnum | null;
}
export namespace CatalogsRetailProductGroup {
    export type CatalogTypeEnum = 'RETAIL';
    export const CatalogTypeEnum = {
        Retail: 'RETAIL' as CatalogTypeEnum
    };
    export type FeedIdEnum = 'null';
    export const FeedIdEnum = {
        Null: 'null' as FeedIdEnum
    };
}


