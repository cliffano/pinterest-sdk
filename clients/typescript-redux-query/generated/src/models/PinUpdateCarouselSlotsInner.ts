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
 * @interface PinUpdateCarouselSlotsInner
 */
export interface PinUpdateCarouselSlotsInner  {
    /**
     * Carousel Pin slot title.
     * @type {string}
     * @memberof PinUpdateCarouselSlotsInner
     */
    title?: string;
    /**
     * Carousel Pin slot description.
     * @type {string}
     * @memberof PinUpdateCarouselSlotsInner
     */
    description?: string;
    /**
     * Carousel Pin slot link.
     * @type {string}
     * @memberof PinUpdateCarouselSlotsInner
     */
    link?: string;
}

export function PinUpdateCarouselSlotsInnerFromJSON(json: any): PinUpdateCarouselSlotsInner {
    return {
        'title': !exists(json, 'title') ? undefined : json['title'],
        'description': !exists(json, 'description') ? undefined : json['description'],
        'link': !exists(json, 'link') ? undefined : json['link'],
    };
}

export function PinUpdateCarouselSlotsInnerToJSON(value?: PinUpdateCarouselSlotsInner): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'title': value.title,
        'description': value.description,
        'link': value.link,
    };
}

