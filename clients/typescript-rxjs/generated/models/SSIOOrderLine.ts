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
    Currency,
} from './';

/**
 * @export
 * @interface SSIOOrderLine
 */
export interface SSIOOrderLine {
    /**
     * OrderLineId in SFDC
     * @type {string}
     * @memberof SSIOOrderLine
     */
    salesforce_order_line_id?: string | null;
    /**
     * Ads manager OrderLineId
     * @type {string}
     * @memberof SSIOOrderLine
     */
    ads_manager_order_line_id?: string | null;
    /**
     * The pin order id associated with the order line in SFDC
     * @type {string}
     * @memberof SSIOOrderLine
     */
    pin_order_id?: string | null;
    /**
     * Last modified date.
     * @type {string}
     * @memberof SSIOOrderLine
     */
    last_modified_date_time?: string | null;
    /**
     * Start date of the order line.
     * @type {string}
     * @memberof SSIOOrderLine
     */
    start_date?: string | null;
    /**
     * End date of the order line.
     * @type {string}
     * @memberof SSIOOrderLine
     */
    end_date?: string | null;
    /**
     * Bill To Company name
     * @type {string}
     * @memberof SSIOOrderLine
     */
    bill_to_company_name?: string | null;
    /**
     * Billing contact first name
     * @type {string}
     * @memberof SSIOOrderLine
     */
    billing_contact_firstname?: string | null;
    /**
     * Billing contact last name
     * @type {string}
     * @memberof SSIOOrderLine
     */
    billing_contact_lastname?: string | null;
    /**
     * Billing contact email
     * @type {string}
     * @memberof SSIOOrderLine
     */
    billing_contact_email?: string | null;
    /**
     * Billing media email
     * @type {string}
     * @memberof SSIOOrderLine
     */
    media_contact_email?: string | null;
    /**
     * Billing contact first name
     * @type {string}
     * @memberof SSIOOrderLine
     */
    media_contact_firstname?: string | null;
    /**
     * Billing contact first name
     * @type {string}
     * @memberof SSIOOrderLine
     */
    media_contact_lastname?: string | null;
    /**
     * @type {Currency}
     * @memberof SSIOOrderLine
     */
    currency_info?: Currency;
    /**
     * Agency link
     * @type {string}
     * @memberof SSIOOrderLine
     */
    agency_link?: string | null;
    /**
     * The po number
     * @type {string}
     * @memberof SSIOOrderLine
     */
    po_number?: string | null;
    /**
     * The order name
     * @type {string}
     * @memberof SSIOOrderLine
     */
    order_name?: string | null;
    /**
     * The Pinterest marketing partner name
     * @type {string}
     * @memberof SSIOOrderLine
     */
    pmp_name?: string | null;
    /**
     * The SFDC id for the terms
     * @type {string}
     * @memberof SSIOOrderLine
     */
    accepted_terms_id?: string | null;
    /**
     * The UTC timestamp (to the nearest sec) of when terms were accepted
     * @type {string}
     * @memberof SSIOOrderLine
     */
    accepted_terms_time?: string | null;
    /**
     * If Budget order line, the budget amount.
     * @type {number}
     * @memberof SSIOOrderLine
     */
    budget_amount?: number | null;
    /**
     * If Ongoing (perpetual) order line, the estimated monthly spend
     * @type {number}
     * @memberof SSIOOrderLine
     */
    estimated_monthly_spend?: number | null;
}


