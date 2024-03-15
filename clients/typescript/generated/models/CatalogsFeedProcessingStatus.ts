/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { HttpFile } from '../http/http';

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
