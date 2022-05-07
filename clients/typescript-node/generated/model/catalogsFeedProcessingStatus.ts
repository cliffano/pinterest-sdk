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

import { RequestFile } from './models';

export enum CatalogsFeedProcessingStatus {
    Completed = <any> 'COMPLETED',
    CompletedEarly = <any> 'COMPLETED_EARLY',
    Disapproved = <any> 'DISAPPROVED',
    Failed = <any> 'FAILED',
    Processing = <any> 'PROCESSING',
    QueuedForProcessing = <any> 'QUEUED_FOR_PROCESSING',
    UnderAppeal = <any> 'UNDER_APPEAL',
    UnderReview = <any> 'UNDER_REVIEW'
}
