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
import {
     PinMediaWithImageFromJSONTyped,
     PinMediaWithImagesFromJSONTyped,
     PinMediaWithImageAndVideoFromJSONTyped,
     PinMediaWithVideosFromJSONTyped,
     PinMediaWithVideoFromJSONTyped
} from './index';

/**
 * Pin media objects.
 * @export
 * @interface PinMedia
 */
export interface PinMedia {
    /**
     * 
     * @type {string}
     * @memberof PinMedia
     */
    mediaType?: string;
}

/**
 * Check if a given object implements the PinMedia interface.
 */
export function instanceOfPinMedia(value: object): boolean {
    return true;
}

export function PinMediaFromJSON(json: any): PinMedia {
    return PinMediaFromJSONTyped(json, false);
}

export function PinMediaFromJSONTyped(json: any, ignoreDiscriminator: boolean): PinMedia {
    if (json == null) {
        return json;
    }
    if (!ignoreDiscriminator) {
        if (json['media_type'] === 'image') {
            return PinMediaWithImageFromJSONTyped(json, true);
        }
        if (json['media_type'] === 'multiple_images') {
            return PinMediaWithImagesFromJSONTyped(json, true);
        }
        if (json['media_type'] === 'multiple_mixed') {
            return PinMediaWithImageAndVideoFromJSONTyped(json, true);
        }
        if (json['media_type'] === 'multiple_videos') {
            return PinMediaWithVideosFromJSONTyped(json, true);
        }
        if (json['media_type'] === 'video') {
            return PinMediaWithVideoFromJSONTyped(json, true);
        }
    }
    return {
        
        'mediaType': json['media_type'] == null ? undefined : json['media_type'],
    };
}

export function PinMediaToJSON(value?: PinMedia | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'media_type': value['mediaType'],
    };
}

