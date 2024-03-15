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

import * as models from './models';

export interface CatalogsFeedIngestionWarnings {
    /**
     * We experienced a technical difficulty and were unable to download some additional images. The next download attempt will happen in 24 hours.
     */
    ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR?: number;

    /**
     * Additional image files are unreadable. Please upload new files to continue.
     */
    ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE?: number;

    /**
     * Additional image files are unreadable. Please check your link and upload new files to continue.
     */
    ADDITIONAL_IMAGE_MALFORMED_URL?: number;

    /**
     * Additional image files are unreadable. Please upload new files to continue.
     */
    ADDITIONAL_IMAGE_FILE_NOT_FOUND?: number;

    /**
     * Additional image files are unreadable. Please upload new files to continue.
     */
    ADDITIONAL_IMAGE_INVALID_FILE?: number;

    /**
     * price is not a supported column. Use base_price and sale_price instead.
     */
    HOTEL_PRICE_HEADER_IS_PRESENT?: number;

}
