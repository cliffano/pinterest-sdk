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

export interface AdAccount {
    id?: string;

    name?: string;

    owner?: models.AdAccountOwner;

    country?: models.Country;

    currency?: models.Currency;

    permissions?: Array<models.BusinessAccessRole>;

    /**
     * Creation time. Unix timestamp in seconds.
     */
    created_time?: number;

    /**
     * Last update time. Unix timestamp in seconds.
     */
    updated_time?: number;

}
export namespace AdAccount {
}