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

import {
    BoardOwner,
    PinMedia,
    PinMediaSource,
} from './';

/**
 * Pin
 * @export
 * @interface Pin
 */
export interface Pin {
    /**
     * @type {string}
     * @memberof Pin
     */
    readonly id?: string;
    /**
     * @type {string}
     * @memberof Pin
     */
    readonly created_at?: string;
    /**
     * @type {string}
     * @memberof Pin
     */
    link?: string | null;
    /**
     * @type {string}
     * @memberof Pin
     */
    title?: string | null;
    /**
     * @type {string}
     * @memberof Pin
     */
    description?: string | null;
    /**
     * @type {string}
     * @memberof Pin
     */
    alt_text?: string | null;
    /**
     * The board to which this Pin belongs.
     * @type {string}
     * @memberof Pin
     */
    board_id?: string;
    /**
     * The board section to which this Pin belongs.
     * @type {string}
     * @memberof Pin
     */
    board_section_id?: string | null;
    /**
     * @type {BoardOwner}
     * @memberof Pin
     */
    readonly board_owner?: BoardOwner;
    /**
     * @type {PinMedia}
     * @memberof Pin
     */
    readonly media?: PinMedia;
    /**
     * @type {PinMediaSource}
     * @memberof Pin
     */
    media_source?: PinMediaSource;
}
