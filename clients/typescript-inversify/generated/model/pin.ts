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
import { BoardOwner } from './boardOwner';
import { CreativeType } from './creativeType';
import { PinMediaSource } from './pinMediaSource';
import { SummaryPinMedia } from './summaryPinMedia';


/**
 * Pin
 */
export interface Pin { 
    readonly id?: string;
    readonly created_at?: string;
    link?: string | null;
    title?: string | null;
    description?: string | null;
    /**
     * Dominant pin color. Hex number, e.g. \\\"#6E7874\\\".
     */
    dominant_color?: string | null;
    alt_text?: string | null;
    readonly creative_type?: CreativeType | null;
    /**
     * The board to which this Pin belongs.
     */
    board_id?: string;
    /**
     * The board section to which this Pin belongs.
     */
    board_section_id?: string | null;
    board_owner?: BoardOwner;
    /**
     * Whether the \"operation user_account\" is the Pin owner.
     */
    readonly is_owner?: boolean;
    media?: SummaryPinMedia;
    media_source?: PinMediaSource;
    /**
     * The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>.
     */
    parent_pin_id?: string | null;
    /**
     * Whether the Pin is standard or not. See documentation on <a href=\"https://developers.pinterest.com/docs/content/update/\">Changes to Pin creation</a> for more information.
     */
    is_standard?: boolean;
    /**
     * Whether the Pin has been promoted or not.
     */
    readonly has_been_promoted?: boolean;
    /**
     * Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.
     */
    note?: string | null;
    /**
     * Pin metrics with associated time intervals if any.
     */
    pin_metrics?: object | null;
}
export namespace Pin {
}