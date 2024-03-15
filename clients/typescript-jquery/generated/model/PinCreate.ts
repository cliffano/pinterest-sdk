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

import * as models from './models';

/**
 * Pin
 */
export interface PinCreate {
    id?: string;

    created_at?: string;

    link?: string;

    title?: string;

    description?: string;

    /**
     * Dominant pin color. Hex number, e.g. \\\"#6E7874\\\".
     */
    dominant_color?: string;

    alt_text?: string;

    /**
     * The board to which this Pin belongs.
     */
    board_id?: string;

    /**
     * The board section to which this Pin belongs.
     */
    board_section_id?: string;

    board_owner?: models.BoardOwner;

    media?: models.SummaryPinMedia;

    media_source?: models.PinMediaSource;

    /**
     * The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>.
     */
    parent_pin_id?: string;

    /**
     * Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.
     */
    note?: string;

}
