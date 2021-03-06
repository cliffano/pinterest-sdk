/* tslint:disable */
/* eslint-disable */
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
import {
    ImageDetails,
    ImageDetailsFromJSON,
    ImageDetailsFromJSONTyped,
    ImageDetailsToJSON,
} from './ImageDetails';
import {
    PinMedia,
    PinMediaFromJSON,
    PinMediaFromJSONTyped,
    PinMediaToJSON,
} from './PinMedia';
import {
    PinMediaWithImageAllOf,
    PinMediaWithImageAllOfFromJSON,
    PinMediaWithImageAllOfFromJSONTyped,
    PinMediaWithImageAllOfToJSON,
} from './PinMediaWithImageAllOf';

/**
 * Pin with image.
 * @export
 * @interface PinMediaWithImage
 */
export interface PinMediaWithImage extends PinMedia {
    /**
     * 
     * @type {{ [key: string]: ImageDetails; }}
     * @memberof PinMediaWithImage
     */
    images?: { [key: string]: ImageDetails; };
}

export function PinMediaWithImageFromJSON(json: any): PinMediaWithImage {
    return PinMediaWithImageFromJSONTyped(json, false);
}

export function PinMediaWithImageFromJSONTyped(json: any, ignoreDiscriminator: boolean): PinMediaWithImage {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        ...PinMediaFromJSONTyped(json, ignoreDiscriminator),
        'images': !exists(json, 'images') ? undefined : (mapValues(json['images'], ImageDetailsFromJSON)),
    };
}

export function PinMediaWithImageToJSON(value?: PinMediaWithImage | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        ...PinMediaToJSON(value),
        'images': value.images === undefined ? undefined : (mapValues(value.images, ImageDetailsToJSON)),
    };
}

