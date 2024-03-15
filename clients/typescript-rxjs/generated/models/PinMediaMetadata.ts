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

import type {
    ImageMetadata,
    ImageMetadataImages,
    VideoMetadata,
} from './';

/**
 * @export
 * @interface PinMediaMetadata
 */
export interface PinMediaMetadata {
    /**
     * @type {string}
     * @memberof PinMediaMetadata
     */
    item_type?: string;
    /**
     * @type {string}
     * @memberof PinMediaMetadata
     */
    title?: string | null;
    /**
     * @type {string}
     * @memberof PinMediaMetadata
     */
    description?: string | null;
    /**
     * @type {string}
     * @memberof PinMediaMetadata
     */
    link?: string | null;
    /**
     * @type {ImageMetadataImages}
     * @memberof PinMediaMetadata
     */
    images?: ImageMetadataImages;
    /**
     * @type {string}
     * @memberof PinMediaMetadata
     */
    cover_image_url?: string;
    /**
     * Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
     * @type {string}
     * @memberof PinMediaMetadata
     */
    video_url?: string | null;
    /**
     * Duration (in milliseconds)
     * @type {number}
     * @memberof PinMediaMetadata
     */
    duration?: number;
    /**
     * Height (in pixels)
     * @type {number}
     * @memberof PinMediaMetadata
     */
    height?: number;
    /**
     * Width (in pixels)
     * @type {number}
     * @memberof PinMediaMetadata
     */
    width?: number;
}
