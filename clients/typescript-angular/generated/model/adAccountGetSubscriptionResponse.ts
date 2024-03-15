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


export interface AdAccountGetSubscriptionResponse { 
    /**
     * Lead form ID.
     */
    lead_form_id?: string | null;
    /**
     * Standard HTTPS webhook URL.
     */
    webhook_url?: string;
    /**
     * Subscription ID.
     */
    id?: string;
    /**
     * User account used to subscribe lead data.
     */
    user_account_id?: string;
    /**
     * The Ad Account ID that this lead form belongs to.
     */
    ad_account_id?: string;
    /**
     * API version.
     */
    api_version?: string;
    /**
     * Base64 encoded key for client to decrypt lead data.
     */
    cryptographic_key?: string;
    /**
     * Lead data encryption algorithm.
     */
    cryptographic_algorithm?: string;
    /**
     * Lead form creation time. Unix timestamp in milliseconds.
     */
    created_time?: number;
}

