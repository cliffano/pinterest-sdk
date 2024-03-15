/* tslint:disable */
/* eslint-disable */
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
 * 
 * @export
 */
export const CatalogsFeedProcessingStatus = {
    Completed: 'COMPLETED',
    CompletedEarly: 'COMPLETED_EARLY',
    Disapproved: 'DISAPPROVED',
    Failed: 'FAILED',
    Processing: 'PROCESSING',
    QueuedForProcessing: 'QUEUED_FOR_PROCESSING',
    UnderAppeal: 'UNDER_APPEAL',
    UnderReview: 'UNDER_REVIEW'
} as const;
export type CatalogsFeedProcessingStatus = typeof CatalogsFeedProcessingStatus[keyof typeof CatalogsFeedProcessingStatus];


export function CatalogsFeedProcessingStatusFromJSON(json: any): CatalogsFeedProcessingStatus {
    return CatalogsFeedProcessingStatusFromJSONTyped(json, false);
}

export function CatalogsFeedProcessingStatusFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsFeedProcessingStatus {
    return json as CatalogsFeedProcessingStatus;
}

export function CatalogsFeedProcessingStatusToJSON(value?: CatalogsFeedProcessingStatus | null): any {
    return value as any;
}

