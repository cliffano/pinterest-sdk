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


export interface CatalogsHotelItemsFilter { 
    catalog_type: CatalogsHotelItemsFilter.CatalogTypeEnum;
    hotel_ids: Array<string>;
    /**
     * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
     */
    catalog_id?: string;
}
export namespace CatalogsHotelItemsFilter {
    export type CatalogTypeEnum = 'HOTEL';
    export const CatalogTypeEnum = {
        Hotel: 'HOTEL' as CatalogTypeEnum
    };
}


