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
import type { PinMedia } from './PinMedia';
import {
    PinMediaFromJSON,
    PinMediaFromJSONTyped,
    PinMediaToJSON,
} from './PinMedia';
import type { VideoMetadata } from './VideoMetadata';
import {
    VideoMetadataFromJSON,
    VideoMetadataFromJSONTyped,
    VideoMetadataToJSON,
} from './VideoMetadata';

/**
 * Pin with multiple videos.
 * @export
 * @interface PinMediaWithVideos
 */
export interface PinMediaWithVideos extends PinMedia {
    /**
     * 
     * @type {Array<VideoMetadata>}
     * @memberof PinMediaWithVideos
     */
    items?: Array<VideoMetadata>;
}

/**
 * Check if a given object implements the PinMediaWithVideos interface.
 */
export function instanceOfPinMediaWithVideos(value: object): boolean {
    return true;
}

export function PinMediaWithVideosFromJSON(json: any): PinMediaWithVideos {
    return PinMediaWithVideosFromJSONTyped(json, false);
}

export function PinMediaWithVideosFromJSONTyped(json: any, ignoreDiscriminator: boolean): PinMediaWithVideos {
    if (json == null) {
        return json;
    }
    return {
        ...PinMediaFromJSONTyped(json, ignoreDiscriminator),
        'items': json['items'] == null ? undefined : ((json['items'] as Array<any>).map(VideoMetadataFromJSON)),
    };
}

export function PinMediaWithVideosToJSON(value?: PinMediaWithVideos | null): any {
    if (value == null) {
        return value;
    }
    return {
        ...PinMediaToJSON(value),
        'items': value['items'] == null ? undefined : ((value['items'] as Array<any>).map(VideoMetadataToJSON)),
    };
}

