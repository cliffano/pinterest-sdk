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
import { BoardMedia } from './boardMedia';


/**
 * Board
 */
export interface Board { 
    readonly id?: string;
    /**
     * Date and time of board creation.
     */
    readonly created_at?: string;
    /**
     * Date and time of last board pins modified.
     */
    readonly board_pins_modified_at?: string;
    name: string;
    description?: string | null;
    /**
     * Count of collaborators on the board.
     */
    readonly collaborator_count?: number;
    /**
     * Count of pins on the board.
     */
    readonly pin_count?: number;
    /**
     * Board follower count.
     */
    readonly follower_count?: number;
    media?: BoardMedia;
    owner?: BoardOwner;
    /**
     * Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
     */
    privacy?: Board.PrivacyEnum;
}
export namespace Board {
    export type PrivacyEnum = 'PUBLIC' | 'PROTECTED' | 'SECRET';
    export const PrivacyEnum = {
        Public: 'PUBLIC' as PrivacyEnum,
        Protected: 'PROTECTED' as PrivacyEnum,
        Secret: 'SECRET' as PrivacyEnum
    };
}


