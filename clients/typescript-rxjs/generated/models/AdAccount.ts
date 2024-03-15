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
    AdAccountOwner,
    BusinessAccessRole,
    Country,
    Currency,
} from './';

/**
 * @export
 * @interface AdAccount
 */
export interface AdAccount {
    /**
     * @type {string}
     * @memberof AdAccount
     */
    id?: string;
    /**
     * @type {string}
     * @memberof AdAccount
     */
    name?: string;
    /**
     * @type {AdAccountOwner}
     * @memberof AdAccount
     */
    owner?: AdAccountOwner;
    /**
     * @type {Country}
     * @memberof AdAccount
     */
    country?: Country;
    /**
     * @type {Currency}
     * @memberof AdAccount
     */
    currency?: Currency;
    /**
     * @type {Array<BusinessAccessRole>}
     * @memberof AdAccount
     */
    permissions?: Array<BusinessAccessRole>;
    /**
     * Creation time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdAccount
     */
    created_time?: number | null;
    /**
     * Last update time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdAccount
     */
    updated_time?: number | null;
}


