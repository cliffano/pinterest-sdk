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
import {
    ConversionTagType,
    ConversionTagTypeFromJSON,
    ConversionTagTypeToJSON,
} from './';

/**
 * 
 * @export
 * @interface ConversionEventResponse
 */
export interface ConversionEventResponse  {
    /**
     * 
     * @type {ConversionTagType}
     * @memberof ConversionEventResponse
     */
    conversionEvent?: ConversionTagType;
    /**
     * Id of the tag.
     * @type {string}
     * @memberof ConversionEventResponse
     */
    conversionTagId?: string;
    /**
     * Id of the ad account.
     * @type {string}
     * @memberof ConversionEventResponse
     */
    adAccountId?: string;
    /**
     * Creation date in epoch format.
     * @type {number}
     * @memberof ConversionEventResponse
     */
    createdTime?: number;
}

export function ConversionEventResponseFromJSON(json: any): ConversionEventResponse {
    return {
        'conversionEvent': !exists(json, 'conversion_event') ? undefined : ConversionTagTypeFromJSON(json['conversion_event']),
        'conversionTagId': !exists(json, 'conversion_tag_id') ? undefined : json['conversion_tag_id'],
        'adAccountId': !exists(json, 'ad_account_id') ? undefined : json['ad_account_id'],
        'createdTime': !exists(json, 'created_time') ? undefined : json['created_time'],
    };
}

export function ConversionEventResponseToJSON(value?: ConversionEventResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'conversion_event': ConversionTagTypeToJSON(value.conversionEvent),
        'conversion_tag_id': value.conversionTagId,
        'ad_account_id': value.adAccountId,
        'created_time': value.createdTime,
    };
}


