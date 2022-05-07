// tslint:disable
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

/**
 * @export
 * @interface CatalogsFeedIngestionErrors
 */
export interface CatalogsFeedIngestionErrors {
    /**
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    image_download_error?: number;
    /**
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    image_download_connection_timeout?: number;
    /**
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    image_format_unrecognize?: number;
    /**
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    line_level_internal_error?: number;
    /**
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    large_product_count_decrease?: CatalogsFeedIngestionErrorsLargeProductCountDecreaseEnum;
}

/**
 * @export
 * @enum {string}
 */
export enum CatalogsFeedIngestionErrorsLargeProductCountDecreaseEnum {
    NUMBER_1 = 1
}

