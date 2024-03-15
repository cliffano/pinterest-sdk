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
import { CatalogsHotelProductGroupFilters } from './catalogsHotelProductGroupFilters';


/**
 * Request object for updating a hotel product group.
 */
export interface CatalogsHotelProductGroupUpdateRequest { 
    catalog_type?: CatalogsHotelProductGroupUpdateRequest.CatalogTypeEnum;
    name?: string;
    description?: string | null;
    filters?: CatalogsHotelProductGroupFilters;
}
export namespace CatalogsHotelProductGroupUpdateRequest {
    export type CatalogTypeEnum = 'HOTEL';
    export const CatalogTypeEnum = {
        Hotel: 'HOTEL' as CatalogTypeEnum
    }
}
