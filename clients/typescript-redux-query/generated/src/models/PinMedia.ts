// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
/**
 * Pin media objects.
 * @export
 * @interface PinMedia
 */
export interface PinMedia  {
    /**
     * 
     * @type {string}
     * @memberof PinMedia
     */
    mediaType?: string;
}

export function PinMediaFromJSON(json: any): PinMedia {
    return {
        'mediaType': !exists(json, 'media_type') ? undefined : json['media_type'],
    };
}

export function PinMediaToJSON(value?: PinMedia): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'media_type': value.mediaType,
    };
}


