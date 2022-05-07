// tslint:disable
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

/**
 * Summary status for pin promotions
 * @export
 * @enum {string}
 */
export enum PinPromotionSummaryStatus {
    Approved = 'APPROVED',
    Paused = 'PAUSED',
    Pending = 'PENDING',
    Rejected = 'REJECTED',
    AdvertiserDisabled = 'ADVERTISER_DISABLED',
    Archived = 'ARCHIVED'
}

export function PinPromotionSummaryStatusFromJSON(json: any): PinPromotionSummaryStatus {
    return json as PinPromotionSummaryStatus;
}

export function PinPromotionSummaryStatusToJSON(value?: PinPromotionSummaryStatus): any {
    return value as any;
}

