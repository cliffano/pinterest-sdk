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
} from './';

/**
 * Board
 * @export
 * @interface Board
 */
export interface Board {
    /**
     * @type {string}
     * @memberof Board
     */
    readonly id?: string;
    /**
     * @type {string}
     * @memberof Board
     */
    name: string;
    /**
     * @type {string}
     * @memberof Board
     */
    description?: string | null;
    /**
     * @type {BoardOwner}
     * @memberof Board
     */
    readonly owner?: BoardOwner;
    /**
     * Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
     * @type {string}
     * @memberof Board
     */
    privacy?: BoardPrivacyEnum;
}

/**
 * @export
 * @enum {string}
 */
export enum BoardPrivacyEnum {
    Public = 'PUBLIC',
    Protected = 'PROTECTED',
    Secret = 'SECRET'
}

