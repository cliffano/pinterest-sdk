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

import * as models from './models';

export interface ConversionTagResponse {
    /**
     * Ad account ID.
     */
    ad_account_id?: string;

    /**
     * Tag code snippet.
     */
    code_snippet?: string;

    enhanced_match_status?: models.EnhancedMatchStatusType;

    /**
     * Tag ID.
     */
    id?: string;

    /**
     * Time for the last event fired.
     */
    last_fired_time_ms?: number;

    /**
     * Conversion tag name.
     */
    name?: string;

    status?: models.EntityStatus;

    /**
     * Version number.
     */
    version?: string;

    configs?: models.ConversionTagConfigs;

}
export namespace ConversionTagResponse {
}
