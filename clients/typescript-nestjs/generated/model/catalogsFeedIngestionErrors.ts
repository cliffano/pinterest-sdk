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


export interface CatalogsFeedIngestionErrors { 
    image_download_error?: number;
    image_download_connection_timeout?: number;
    image_format_unrecognize?: number;
    line_level_internal_error?: number;
    large_product_count_decrease?: CatalogsFeedIngestionErrors.LargeProductCountDecreaseEnum;
}
export namespace CatalogsFeedIngestionErrors {
    export type LargeProductCountDecreaseEnum = 1;
    export const LargeProductCountDecreaseEnum = {
        NUMBER_1: 1 as LargeProductCountDecreaseEnum
    };
}


