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

/**
 * @export
 * @interface Account
 */
export interface Account {
    /**
     * Type of account
     * @type {string}
     * @memberof Account
     */
    account_type?: AccountAccountTypeEnum;
    /**
     * User account ID.
     * @type {string}
     * @memberof Account
     */
    id?: string;
    /**
     * @type {string}
     * @memberof Account
     */
    profile_image?: string;
    /**
     * @type {string}
     * @memberof Account
     */
    website_url?: string;
    /**
     * @type {string}
     * @memberof Account
     */
    username?: string;
    /**
     * Profile about description.
     * @type {string}
     * @memberof Account
     */
    about?: string;
    /**
     * @type {string}
     * @memberof Account
     */
    business_name?: string | null;
    /**
     * User account board count.<br/>**Note**: Board count on user account level may differ from counts found elsewhere due to attribution of collaborative Boards.
     * @type {number}
     * @memberof Account
     */
    readonly board_count?: number | null;
    /**
     * User account pin count. This includes both created and saved pins.
     * @type {number}
     * @memberof Account
     */
    readonly pin_count?: number | null;
    /**
     * User account follower count.
     * @type {number}
     * @memberof Account
     */
    readonly follower_count?: number | null;
    /**
     * User account following count.
     * @type {number}
     * @memberof Account
     */
    readonly following_count?: number | null;
    /**
     * User account monthly views.
     * @type {number}
     * @memberof Account
     */
    readonly monthly_views?: number | null;
}

/**
 * @export
 * @enum {string}
 */
export enum AccountAccountTypeEnum {
    Pinner = 'PINNER',
    Business = 'BUSINESS'
}

