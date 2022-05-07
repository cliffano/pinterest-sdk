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

import * as models from './models';

/**
 * Pin
 */
export interface Pin {
    "id"?: string;
    "created_at"?: string;
    "link"?: string;
    "title"?: string;
    "description"?: string;
    "alt_text"?: string;
    /**
     * The board to which this Pin belongs.
     */
    "board_id"?: string;
    /**
     * The board section to which this Pin belongs.
     */
    "board_section_id"?: string;
    "board_owner"?: models.models.BoardOwner;
    "media"?: models.models.PinMedia;
    "media_source"?: models.models.PinMediaSource;
}

