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

import * as models from './models';

/**
 * Request object for creating a feed. Please, be aware that \"default_country\" and \"default_locale\" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 */
export interface CatalogsFeedsCreateRequest {
    "default_country"?: models.Country;
    "default_availability"?: models.ProductAvailabilityType;
    "default_currency"?: models.NullableCurrency;
    /**
     * A human-friendly name associated to a given feed.
     */
    "name": string;
    "format": models.CatalogsFormat;
    /**
     * The locale used within a feed for product descriptions.
     */
    "default_locale"?: string;
    "credentials"?: models.CatalogsFeedCredentials;
    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     */
    "location": string;
    "preferred_processing_schedule"?: models.CatalogsFeedProcessingSchedule;
}

