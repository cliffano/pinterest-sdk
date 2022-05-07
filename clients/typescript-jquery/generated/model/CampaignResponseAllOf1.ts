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

import * as models from './models';

export interface CampaignResponseAllOf1 {
    objective_type?: models.ObjectiveType;

    /**
     * Campaign creation time. Unix timestamp in seconds.
     */
    created_time?: number;

    /**
     * UTC timestamp. Last update time.
     */
    updated_time?: number;

    /**
     * Always \"campaign\".
     */
    type?: string;

}
