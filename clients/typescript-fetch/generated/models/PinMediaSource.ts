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

import {
    PinMediaSourceImageBase64,
    PinMediaSourceImageBase64FromJSON,
    PinMediaSourceImageBase64FromJSONTyped,
    PinMediaSourceImageBase64ToJSON,
} from './PinMediaSourceImageBase64';
import {
    PinMediaSourceImageURL,
    PinMediaSourceImageURLFromJSON,
    PinMediaSourceImageURLFromJSONTyped,
    PinMediaSourceImageURLToJSON,
} from './PinMediaSourceImageURL';
import {
    PinMediaSourceVideoID,
    PinMediaSourceVideoIDFromJSON,
    PinMediaSourceVideoIDFromJSONTyped,
    PinMediaSourceVideoIDToJSON,
} from './PinMediaSourceVideoID';

/**
 * @type PinMediaSource
 * Pin media source.
 * @export
 */
export type PinMediaSource = { sourceType: 'image_base64' } & PinMediaSourceImageBase64 | { sourceType: 'image_url' } & PinMediaSourceImageURL | { sourceType: 'video_id' } & PinMediaSourceVideoID;

export function PinMediaSourceFromJSON(json: any): PinMediaSource {
    return PinMediaSourceFromJSONTyped(json, false);
}

export function PinMediaSourceFromJSONTyped(json: any, ignoreDiscriminator: boolean): PinMediaSource {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    switch (json['sourceType']) {
        case 'image_base64':
            return {...PinMediaSourceImageBase64FromJSONTyped(json, true), sourceType: 'image_base64'};
        case 'image_url':
            return {...PinMediaSourceImageURLFromJSONTyped(json, true), sourceType: 'image_url'};
        case 'video_id':
            return {...PinMediaSourceVideoIDFromJSONTyped(json, true), sourceType: 'video_id'};
        default:
            throw new Error(`No variant of PinMediaSource exists with 'sourceType=${json['sourceType']}'`);
    }
}

export function PinMediaSourceToJSON(value?: PinMediaSource | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    switch (value['sourceType']) {
        case 'image_base64':
            return PinMediaSourceImageBase64ToJSON(value);
        case 'image_url':
            return PinMediaSourceImageURLToJSON(value);
        case 'video_id':
            return PinMediaSourceVideoIDToJSON(value);
        default:
            throw new Error(`No variant of PinMediaSource exists with 'sourceType=${value['sourceType']}'`);
    }
}

