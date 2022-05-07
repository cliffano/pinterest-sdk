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
    CatalogsDbItem,
    CatalogsDbItemFromJSON,
    CatalogsDbItemFromJSONTyped,
    CatalogsDbItemToJSON,
} from './CatalogsDbItem';
import {
    CatalogsFeedIngestionDetails,
    CatalogsFeedIngestionDetailsFromJSON,
    CatalogsFeedIngestionDetailsFromJSONTyped,
    CatalogsFeedIngestionDetailsToJSON,
} from './CatalogsFeedIngestionDetails';
import {
    CatalogsFeedProcessingResultFields,
    CatalogsFeedProcessingResultFieldsFromJSON,
    CatalogsFeedProcessingResultFieldsFromJSONTyped,
    CatalogsFeedProcessingResultFieldsToJSON,
} from './CatalogsFeedProcessingResultFields';
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
 * @interface CatalogsFeedProcessingResult
 */
export interface CatalogsFeedProcessingResult {
    /**
     * 
     * @type {Date}
     * @memberof CatalogsFeedProcessingResult
     */
    createdAt?: Date;
    /**
     * 
     * @type {string}
     * @memberof CatalogsFeedProcessingResult
     */
    id?: string;
    /**
     * 
     * @type {Date}
     * @memberof CatalogsFeedProcessingResult
     */
    updatedAt?: Date;
    /**
     * 
     * @type {CatalogsFeedIngestionDetails}
     * @memberof CatalogsFeedProcessingResult
     */
    ingestionDetails: CatalogsFeedIngestionDetails;
    /**
     * 
     * @type {CatalogsFeedProcessingStatus}
     * @memberof CatalogsFeedProcessingResult
     */
    status: CatalogsFeedProcessingStatus;
    /**
     * 
     * @type {CatalogsFeedProductCounts}
     * @memberof CatalogsFeedProcessingResult
     */
    productCounts: CatalogsFeedProductCounts | null;
    /**
     * 
     * @type {CatalogsFeedValidationDetails}
     * @memberof CatalogsFeedProcessingResult
     */
    validationDetails: CatalogsFeedValidationDetails;
}

export function CatalogsFeedProcessingResultFromJSON(json: any): CatalogsFeedProcessingResult {
    return CatalogsFeedProcessingResultFromJSONTyped(json, false);
}

export function CatalogsFeedProcessingResultFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsFeedProcessingResult {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'createdAt': !exists(json, 'created_at') ? undefined : (new Date(json['created_at'])),
        'id': !exists(json, 'id') ? undefined : json['id'],
        'updatedAt': !exists(json, 'updated_at') ? undefined : (new Date(json['updated_at'])),
        'ingestionDetails': CatalogsFeedIngestionDetailsFromJSON(json['ingestion_details']),
        'status': CatalogsFeedProcessingStatusFromJSON(json['status']),
        'productCounts': CatalogsFeedProductCountsFromJSON(json['product_counts']),
        'validationDetails': CatalogsFeedValidationDetailsFromJSON(json['validation_details']),
    };
}

export function CatalogsFeedProcessingResultToJSON(value?: CatalogsFeedProcessingResult | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'created_at': value.createdAt === undefined ? undefined : (value.createdAt.toISOString()),
        'id': value.id,
        'updated_at': value.updatedAt === undefined ? undefined : (value.updatedAt.toISOString()),
        'ingestion_details': CatalogsFeedIngestionDetailsToJSON(value.ingestionDetails),
        'status': CatalogsFeedProcessingStatusToJSON(value.status),
        'product_counts': CatalogsFeedProductCountsToJSON(value.productCounts),
        'validation_details': CatalogsFeedValidationDetailsToJSON(value.validationDetails),
    };
}

