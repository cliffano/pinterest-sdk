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
import { CatalogsFeedProductCounts } from './catalogsFeedProductCounts';
import { CatalogsFeedValidationDetails } from './catalogsFeedValidationDetails';
import { CatalogsFeedProcessingStatus } from './catalogsFeedProcessingStatus';
import { CatalogsFeedIngestionDetails } from './catalogsFeedIngestionDetails';


export interface CatalogsFeedProcessingResultFields { 
    ingestion_details: CatalogsFeedIngestionDetails;
    status: CatalogsFeedProcessingStatus;
    product_counts: CatalogsFeedProductCounts | null;
    validation_details: CatalogsFeedValidationDetails;
}

