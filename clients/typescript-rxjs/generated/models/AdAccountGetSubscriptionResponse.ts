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

/**
 * @export
 * @interface AdAccountGetSubscriptionResponse
 */
export interface AdAccountGetSubscriptionResponse {
    /**
     * Lead form ID.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    lead_form_id?: string | null;
    /**
     * Standard HTTPS webhook URL.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    webhook_url?: string;
    /**
     * Subscription ID.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    id?: string;
    /**
     * User account used to subscribe lead data.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    user_account_id?: string;
    /**
     * The Ad Account ID that this lead form belongs to.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    ad_account_id?: string;
    /**
     * API version.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    api_version?: string;
    /**
     * Base64 encoded key for client to decrypt lead data.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    cryptographic_key?: string;
    /**
     * Lead data encryption algorithm.
     * @type {string}
     * @memberof AdAccountGetSubscriptionResponse
     */
    cryptographic_algorithm?: string;
    /**
     * Lead form creation time. Unix timestamp in milliseconds.
     * @type {number}
     * @memberof AdAccountGetSubscriptionResponse
     */
    created_time?: number;
}