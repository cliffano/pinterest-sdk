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

import {
    ImageDetails,
    ImageDetailsFromJSON,
    ImageDetailsToJSON,
    PinMedia,
    PinMediaFromJSON,
    PinMediaToJSON,
    PinMediaWithImageAllOf,
    PinMediaWithImageAllOfFromJSON,
    PinMediaWithImageAllOfToJSON,
} from './';

/**
 * @type PinMediaWithImage
 * Pin with image.
 * @export
 */
export interface PinMediaWithImage extends PinMedia, PinMediaWithImageAllOf {
}

export function PinMediaWithImageFromJSON(json: any): PinMediaWithImage {
    return {
        ...PinMediaFromJSON(json),
        ...PinMediaWithImageAllOfFromJSON(json),
    };
}

export function PinMediaWithImageToJSON(value?: PinMediaWithImage): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...PinMediaToJSON(value),
        ...PinMediaWithImageAllOfToJSON(value),
    };
}
