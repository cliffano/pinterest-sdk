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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface AdsCreditDiscountsResponse
 */
export interface AdsCreditDiscountsResponse  {
    /**
     * True if the offer code is currently active.
     * @type {boolean}
     * @memberof AdsCreditDiscountsResponse
     */
    active?: boolean;
    /**
     * Advertiser ID the offer was applied to.
     * @type {string}
     * @memberof AdsCreditDiscountsResponse
     */
    advertiserId?: string;
    /**
     * The type of discount of this credit
     * @type {string}
     * @memberof AdsCreditDiscountsResponse
     */
    discountType?: AdsCreditDiscountsResponseDiscountTypeEnum;
    /**
     * The discount applied in the offer’s currency value.
     * @type {number}
     * @memberof AdsCreditDiscountsResponse
     */
    discountInMicroCurrency?: number;
    /**
     * Currency value for the discount.
     * @type {string}
     * @memberof AdsCreditDiscountsResponse
     */
    discountCurrency?: string;
    /**
     * Human readable title of the offer code.
     * @type {string}
     * @memberof AdsCreditDiscountsResponse
     */
    title?: string;
    /**
     * The credits left to spend.
     * @type {number}
     * @memberof AdsCreditDiscountsResponse
     */
    remainingDiscountInMicroCurrency?: number;
}

export function AdsCreditDiscountsResponseFromJSON(json: any): AdsCreditDiscountsResponse {
    return {
        'active': !exists(json, 'active') ? undefined : json['active'],
        'advertiserId': !exists(json, 'advertiser_id') ? undefined : json['advertiser_id'],
        'discountType': !exists(json, 'discountType') ? undefined : json['discountType'],
        'discountInMicroCurrency': !exists(json, 'discountInMicroCurrency') ? undefined : json['discountInMicroCurrency'],
        'discountCurrency': !exists(json, 'discountCurrency') ? undefined : json['discountCurrency'],
        'title': !exists(json, 'title') ? undefined : json['title'],
        'remainingDiscountInMicroCurrency': !exists(json, 'remainingDiscountInMicroCurrency') ? undefined : json['remainingDiscountInMicroCurrency'],
    };
}

export function AdsCreditDiscountsResponseToJSON(value?: AdsCreditDiscountsResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'active': value.active,
        'advertiser_id': value.advertiserId,
        'discountType': value.discountType,
        'discountInMicroCurrency': value.discountInMicroCurrency,
        'discountCurrency': value.discountCurrency,
        'title': value.title,
        'remainingDiscountInMicroCurrency': value.remainingDiscountInMicroCurrency,
    };
}

/**
* @export
* @enum {string}
*/
export enum AdsCreditDiscountsResponseDiscountTypeEnum {
    Coupon = 'COUPON',
    Credit = 'CREDIT',
    CouponApplied = 'COUPON_APPLIED',
    CreditApplied = 'CREDIT_APPLIED',
    MarketingOfferCredit = 'MARKETING_OFFER_CREDIT',
    MarketingOfferCreditApplied = 'MARKETING_OFFER_CREDIT_APPLIED',
    GoodwillCredit = 'GOODWILL_CREDIT',
    GoodwillCreditApplied = 'GOODWILL_CREDIT_APPLIED',
    InternalCredit = 'INTERNAL_CREDIT',
    InternalCreditApplied = 'INTERNAL_CREDIT_APPLIED',
    PrepaidCredit = 'PREPAID_CREDIT',
    PrepaidCreditApplied = 'PREPAID_CREDIT_APPLIED',
    SalesIncentiveCredit = 'SALES_INCENTIVE_CREDIT',
    SalesIncentiveCreditApplied = 'SALES_INCENTIVE_CREDIT_APPLIED',
    CreditExpired = 'CREDIT_EXPIRED',
    FutureCredit = 'FUTURE_CREDIT',
    ReferralCredit = 'REFERRAL_CREDIT',
    InvoiceSalesIncentiveCredit = 'INVOICE_SALES_INCENTIVE_CREDIT',
    InvoiceSalesIncentiveCreditApplied = 'INVOICE_SALES_INCENTIVE_CREDIT_APPLIED',
    PrepaidCreditRefund = 'PREPAID_CREDIT_REFUND',
    Null = 'null'
}


