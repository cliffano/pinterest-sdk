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
import { PinMedia } from './pinMedia';
import { BoardOwner } from './boardOwner';
import { PinMediaSource } from './pinMediaSource';


/**
 * Pin
 */
export interface Pin { 
    readonly id?: string;
    readonly created_at?: string;
    link?: string | null;
    title?: string | null;
    description?: string | null;
    alt_text?: string | null;
    /**
     * The board to which this Pin belongs.
     */
    board_id?: string;
    /**
     * The board section to which this Pin belongs.
     */
    board_section_id?: string | null;
    readonly board_owner?: BoardOwner;
    readonly media?: PinMedia;
    media_source?: PinMediaSource;
}

