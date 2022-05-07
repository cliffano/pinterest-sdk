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
 * 
 * @export
 * @enum {string}
 */
export enum CatalogsFeedProcessingStatus {
    Completed = 'COMPLETED',
    CompletedEarly = 'COMPLETED_EARLY',
    Disapproved = 'DISAPPROVED',
    Failed = 'FAILED',
    Processing = 'PROCESSING',
    QueuedForProcessing = 'QUEUED_FOR_PROCESSING',
    UnderAppeal = 'UNDER_APPEAL',
    UnderReview = 'UNDER_REVIEW'
}

export function CatalogsFeedProcessingStatusFromJSON(json: any): CatalogsFeedProcessingStatus {
    return json as CatalogsFeedProcessingStatus;
}

export function CatalogsFeedProcessingStatusToJSON(value?: CatalogsFeedProcessingStatus): any {
    return value as any;
}

