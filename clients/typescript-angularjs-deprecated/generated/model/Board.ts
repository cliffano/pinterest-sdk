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
 * Board
 */
export interface Board {
    "id"?: string;
    "name": string;
    "description"?: string;
    "owner"?: models.models.BoardOwner;
    /**
     * Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a>
     */
    "privacy"?: Board.PrivacyEnum;
}

export namespace Board {
    export enum PrivacyEnum {
        Public = <any> 'PUBLIC',
        Protected = <any> 'PROTECTED',
        Secret = <any> 'SECRET'
    }
}
