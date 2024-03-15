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

import { RequestFile } from './models';
import { Currency } from './currency';

export class SSIOCreateInsertionOrderRequest {
    /**
    * Starting date of time period. Format: YYYY-MM-DD
    */
    'startDate': string;
    /**
    * End date of time period. Format: YYYY-MM-DD
    */
    'endDate'?: string;
    /**
    * The po number
    */
    'poNumber': string;
    /**
    * If Budget order line, the budget amount.
    */
    'budgetAmount'?: number;
    /**
    * The billing contact first name
    */
    'billingContactFirstname': string;
    /**
    * The billing contact last name
    */
    'billingContactLastname': string;
    /**
    * The billing contact email
    */
    'billingContactEmail': string;
    /**
    * The media contact first name
    */
    'mediaContactFirstname': string;
    /**
    * The media contact last name
    */
    'mediaContactLastname': string;
    /**
    * The media contact email
    */
    'mediaContactEmail': string;
    /**
    * URL link for agency
    */
    'agencyLink'?: string;
    /**
    * The email of user submitting the insertion order
    */
    'userEmail'?: string;
    /**
    * The UTC timestamp (to the nearest sec) of when terms were accepted
    */
    'acceptedTermsTime'?: number;
    /**
    * The pmp id
    */
    'pmpId': string;
    /**
    * The order name
    */
    'orderName': string;
    /**
    * Type can be Budget or Perpetual
    */
    'orderLineType': SSIOCreateInsertionOrderRequest.OrderLineTypeEnum;
    /**
    * The SFDC id for the terms
    */
    'acceptedTermsId': string;
    /**
    * The bill-to company id
    */
    'billtoCompanyId': string;
    /**
    * The bill-to business address id
    */
    'billtoBusinessAddressId': string;
    /**
    * The bill-to billing address id
    */
    'billtoBillingAddressId': string;
    /**
    * If Ongoing (perpetual) order line, the estimated monthly spend
    */
    'estimatedMonthlySpend'?: number;
    'currencyInfo': Currency;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "startDate",
            "baseName": "start_date",
            "type": "string"
        },
        {
            "name": "endDate",
            "baseName": "end_date",
            "type": "string"
        },
        {
            "name": "poNumber",
            "baseName": "po_number",
            "type": "string"
        },
        {
            "name": "budgetAmount",
            "baseName": "budget_amount",
            "type": "number"
        },
        {
            "name": "billingContactFirstname",
            "baseName": "billing_contact_firstname",
            "type": "string"
        },
        {
            "name": "billingContactLastname",
            "baseName": "billing_contact_lastname",
            "type": "string"
        },
        {
            "name": "billingContactEmail",
            "baseName": "billing_contact_email",
            "type": "string"
        },
        {
            "name": "mediaContactFirstname",
            "baseName": "media_contact_firstname",
            "type": "string"
        },
        {
            "name": "mediaContactLastname",
            "baseName": "media_contact_lastname",
            "type": "string"
        },
        {
            "name": "mediaContactEmail",
            "baseName": "media_contact_email",
            "type": "string"
        },
        {
            "name": "agencyLink",
            "baseName": "agency_link",
            "type": "string"
        },
        {
            "name": "userEmail",
            "baseName": "user_email",
            "type": "string"
        },
        {
            "name": "acceptedTermsTime",
            "baseName": "accepted_terms_time",
            "type": "number"
        },
        {
            "name": "pmpId",
            "baseName": "pmp_id",
            "type": "string"
        },
        {
            "name": "orderName",
            "baseName": "order_name",
            "type": "string"
        },
        {
            "name": "orderLineType",
            "baseName": "order_line_type",
            "type": "SSIOCreateInsertionOrderRequest.OrderLineTypeEnum"
        },
        {
            "name": "acceptedTermsId",
            "baseName": "accepted_terms_id",
            "type": "string"
        },
        {
            "name": "billtoCompanyId",
            "baseName": "billto_company_id",
            "type": "string"
        },
        {
            "name": "billtoBusinessAddressId",
            "baseName": "billto_business_address_id",
            "type": "string"
        },
        {
            "name": "billtoBillingAddressId",
            "baseName": "billto_billing_address_id",
            "type": "string"
        },
        {
            "name": "estimatedMonthlySpend",
            "baseName": "estimated_monthly_spend",
            "type": "number"
        },
        {
            "name": "currencyInfo",
            "baseName": "currency_info",
            "type": "Currency"
        }    ];

    static getAttributeTypeMap() {
        return SSIOCreateInsertionOrderRequest.attributeTypeMap;
    }
}

export namespace SSIOCreateInsertionOrderRequest {
    export enum OrderLineTypeEnum {
        Budget = <any> 'BUDGET',
        Perpetuals = <any> 'PERPETUALS'
    }
}