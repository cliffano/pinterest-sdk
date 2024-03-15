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

/**
* Possible status for a bulk reporting job
*/
export enum BulkReportingJobStatus {
    DoesNotExist = 'DOES_NOT_EXIST',
    Finished = 'FINISHED',
    InProgress = 'IN_PROGRESS',
    Expired = 'EXPIRED',
    Failed = 'FAILED',
    Cancelled = 'CANCELLED'
}
