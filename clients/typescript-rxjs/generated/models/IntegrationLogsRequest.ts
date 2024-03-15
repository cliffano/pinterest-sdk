// tslint:disable
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

import type {
    IntegrationLog,
} from './';

/**
 * Batch of logs sent from an integration application.
 * @export
 * @interface IntegrationLogsRequest
 */
export interface IntegrationLogsRequest {
    /**
     * @type {Array<IntegrationLog>}
     * @memberof IntegrationLogsRequest
     */
    logs: Array<IntegrationLog>;
}
