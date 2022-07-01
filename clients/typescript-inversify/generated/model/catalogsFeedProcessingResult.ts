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
import { CatalogsDbItem } from './catalogsDbItem';
import { CatalogsFeedIngestionDetails } from './catalogsFeedIngestionDetails';
import { CatalogsFeedProcessingResultFields } from './catalogsFeedProcessingResultFields';
import { CatalogsFeedProcessingStatus } from './catalogsFeedProcessingStatus';
import { CatalogsFeedProductCounts } from './catalogsFeedProductCounts';
import { CatalogsFeedValidationDetails } from './catalogsFeedValidationDetails';


export interface CatalogsFeedProcessingResult { 
    created_at?: string;
    id?: string;
    updated_at?: string;
    ingestion_details: CatalogsFeedIngestionDetails;
    status: CatalogsFeedProcessingStatus;
    product_counts: CatalogsFeedProductCounts | null;
    validation_details: CatalogsFeedValidationDetails;
}
