/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    CatalogsFeedIngestionDetails,
    CatalogsFeedIngestionDetailsFromJSON,
    CatalogsFeedIngestionDetailsFromJSONTyped,
    CatalogsFeedIngestionDetailsToJSON,
} from './CatalogsFeedIngestionDetails';
import {
    CatalogsFeedProcessingStatus,
    CatalogsFeedProcessingStatusFromJSON,
    CatalogsFeedProcessingStatusFromJSONTyped,
    CatalogsFeedProcessingStatusToJSON,
} from './CatalogsFeedProcessingStatus';
import {
    CatalogsFeedProductCounts,
    CatalogsFeedProductCountsFromJSON,
    CatalogsFeedProductCountsFromJSONTyped,
    CatalogsFeedProductCountsToJSON,
} from './CatalogsFeedProductCounts';
import {
    CatalogsFeedValidationDetails,
    CatalogsFeedValidationDetailsFromJSON,
    CatalogsFeedValidationDetailsFromJSONTyped,
    CatalogsFeedValidationDetailsToJSON,
} from './CatalogsFeedValidationDetails';

/**
 * 
 * @export
 * @interface CatalogsFeedProcessingResultFields
 */
export interface CatalogsFeedProcessingResultFields {
    /**
     * 
     * @type {CatalogsFeedIngestionDetails}
     * @memberof CatalogsFeedProcessingResultFields
     */
    ingestionDetails: CatalogsFeedIngestionDetails;
    /**
     * 
     * @type {CatalogsFeedProcessingStatus}
     * @memberof CatalogsFeedProcessingResultFields
     */
    status: CatalogsFeedProcessingStatus;
    /**
     * 
     * @type {CatalogsFeedProductCounts}
     * @memberof CatalogsFeedProcessingResultFields
     */
    productCounts: CatalogsFeedProductCounts | null;
    /**
     * 
     * @type {CatalogsFeedValidationDetails}
     * @memberof CatalogsFeedProcessingResultFields
     */
    validationDetails: CatalogsFeedValidationDetails;
}

export function CatalogsFeedProcessingResultFieldsFromJSON(json: any): CatalogsFeedProcessingResultFields {
    return CatalogsFeedProcessingResultFieldsFromJSONTyped(json, false);
}

export function CatalogsFeedProcessingResultFieldsFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsFeedProcessingResultFields {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'ingestionDetails': CatalogsFeedIngestionDetailsFromJSON(json['ingestion_details']),
        'status': CatalogsFeedProcessingStatusFromJSON(json['status']),
        'productCounts': CatalogsFeedProductCountsFromJSON(json['product_counts']),
        'validationDetails': CatalogsFeedValidationDetailsFromJSON(json['validation_details']),
    };
}

export function CatalogsFeedProcessingResultFieldsToJSON(value?: CatalogsFeedProcessingResultFields | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'ingestion_details': CatalogsFeedIngestionDetailsToJSON(value.ingestionDetails),
        'status': CatalogsFeedProcessingStatusToJSON(value.status),
        'product_counts': CatalogsFeedProductCountsToJSON(value.productCounts),
        'validation_details': CatalogsFeedValidationDetailsToJSON(value.validationDetails),
    };
}

