/* tslint:disable */
/* eslint-disable */
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

import { mapValues } from '../runtime';
import type { SummaryPinMedia } from './SummaryPinMedia';
import {
    SummaryPinMediaFromJSON,
    SummaryPinMediaFromJSONTyped,
    SummaryPinMediaToJSON,
} from './SummaryPinMedia';

/**
 * Summarized pin information
 * @export
 * @interface SummaryPin
 */
export interface SummaryPin {
    /**
     * 
     * @type {SummaryPinMedia}
     * @memberof SummaryPin
     */
    media?: SummaryPinMedia;
    /**
     * 
     * @type {string}
     * @memberof SummaryPin
     */
    altText?: string;
    /**
     * 
     * @type {string}
     * @memberof SummaryPin
     */
    link?: string;
    /**
     * 
     * @type {string}
     * @memberof SummaryPin
     */
    title?: string;
    /**
     * 
     * @type {string}
     * @memberof SummaryPin
     */
    description?: string;
}

/**
 * Check if a given object implements the SummaryPin interface.
 */
export function instanceOfSummaryPin(value: object): boolean {
    return true;
}

export function SummaryPinFromJSON(json: any): SummaryPin {
    return SummaryPinFromJSONTyped(json, false);
}

export function SummaryPinFromJSONTyped(json: any, ignoreDiscriminator: boolean): SummaryPin {
    if (json == null) {
        return json;
    }
    return {
        
        'media': json['media'] == null ? undefined : SummaryPinMediaFromJSON(json['media']),
        'altText': json['alt_text'] == null ? undefined : json['alt_text'],
        'link': json['link'] == null ? undefined : json['link'],
        'title': json['title'] == null ? undefined : json['title'],
        'description': json['description'] == null ? undefined : json['description'],
    };
}

export function SummaryPinToJSON(value?: SummaryPin | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'media': SummaryPinMediaToJSON(value['media']),
        'alt_text': value['altText'],
        'link': value['link'],
        'title': value['title'],
        'description': value['description'],
    };
}

