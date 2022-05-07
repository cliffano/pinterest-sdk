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

import { exists, mapValues } from '../runtime';
/**
 * Video ID-based media source
 * @export
 * @interface PinMediaSourceVideoID
 */
export interface PinMediaSourceVideoID  {
    /**
     * 
     * @type {string}
     * @memberof PinMediaSourceVideoID
     */
    sourceType: PinMediaSourceVideoIDSourceTypeEnum;
    /**
     * 
     * @type {string}
     * @memberof PinMediaSourceVideoID
     */
    coverImageUrl: string;
    /**
     * 
     * @type {string}
     * @memberof PinMediaSourceVideoID
     */
    mediaId: string;
}

export function PinMediaSourceVideoIDFromJSON(json: any): PinMediaSourceVideoID {
    return {
        'sourceType': json['source_type'],
        'coverImageUrl': json['cover_image_url'],
        'mediaId': json['media_id'],
    };
}

export function PinMediaSourceVideoIDToJSON(value?: PinMediaSourceVideoID): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'source_type': value.sourceType,
        'cover_image_url': value.coverImageUrl,
        'media_id': value.mediaId,
    };
}

/**
* @export
* @enum {string}
*/
export enum PinMediaSourceVideoIDSourceTypeEnum {
    VideoId = 'video_id'
}


