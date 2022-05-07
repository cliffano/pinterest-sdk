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

export interface CatalogsFeedProcessingResult {
    "created_at"?: string;
    "id"?: string;
    "updated_at"?: string;
    "ingestion_details": models.CatalogsFeedIngestionDetails;
    "status": models.CatalogsFeedProcessingStatus;
    "product_counts": models.CatalogsFeedProductCounts;
    "validation_details": models.CatalogsFeedValidationDetails;
}

