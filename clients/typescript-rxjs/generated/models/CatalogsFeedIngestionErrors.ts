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

/**
 * @export
 * @interface CatalogsFeedIngestionErrors
 */
export interface CatalogsFeedIngestionErrors {
    /**
     * We experienced a technical difficulty and were unable to ingest this some items. The next ingestion will happen in 24 hours.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    LINE_LEVEL_INTERNAL_ERROR?: number;
    /**
     * The product count has decreased by more than 99% compared to the last successful ingestion.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    LARGE_PRODUCT_COUNT_DECREASE?: CatalogsFeedIngestionErrorsLARGEPRODUCTCOUNTDECREASEEnum;
    /**
     * We detected an issue with your account and are not currently ingesting your items. Please review our policies at policy.pinterest.com/community-guidelines#section-spam or contact us at help.pinterest.com/contact for more information.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    ACCOUNT_FLAGGED?: number;
    /**
     * We experienced a technical difficulty and were unable to download some images. The next download attempt will happen in 24 hours.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    IMAGE_LEVEL_INTERNAL_ERROR?: number;
    /**
     * Image files are unreadable. Please upload new files to continue.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    IMAGE_FILE_NOT_ACCESSIBLE?: number;
    /**
     * Image files are unreadable. Please check your link and upload new files to continue.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    IMAGE_MALFORMED_URL?: number;
    /**
     * Image files are unreadable. Please upload new files to continue.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    IMAGE_FILE_NOT_FOUND?: number;
    /**
     * Image files are unreadable. Please upload new files to continue.
     * @type {number}
     * @memberof CatalogsFeedIngestionErrors
     */
    IMAGE_INVALID_FILE?: number;
}

/**
 * @export
 * @enum {string}
 */
export enum CatalogsFeedIngestionErrorsLARGEPRODUCTCOUNTDECREASEEnum {
    NUMBER_1 = 1
}

