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

export interface SSIOInsertionOrderCommon {
    /**
     * Starting date of time period. Format: YYYY-MM-DD
     */
    start_date?: string;

    /**
     * End date of time period. Format: YYYY-MM-DD
     */
    end_date?: string;

    /**
     * The po number
     */
    po_number?: string;

    /**
     * If Budget order line, the budget amount.
     */
    budget_amount?: number;

    /**
     * The billing contact first name
     */
    billing_contact_firstname?: string;

    /**
     * The billing contact last name
     */
    billing_contact_lastname?: string;

    /**
     * The billing contact email
     */
    billing_contact_email?: string;

    /**
     * The media contact first name
     */
    media_contact_firstname?: string;

    /**
     * The media contact last name
     */
    media_contact_lastname?: string;

    /**
     * The media contact email
     */
    media_contact_email?: string;

    /**
     * URL link for agency
     */
    agency_link?: string;

    /**
     * The email of user submitting the insertion order
     */
    user_email?: string;

}
