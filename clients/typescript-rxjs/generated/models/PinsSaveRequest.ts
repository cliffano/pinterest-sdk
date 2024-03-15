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
 * @interface PinsSaveRequest
 */
export interface PinsSaveRequest {
    /**
     * Unique identifier of the board to which the pin will be saved.
     * @type {string}
     * @memberof PinsSaveRequest
     */
    board_id?: string | null;
    /**
     * Unique identifier of the board section to which the pin will be saved.
     * @type {string}
     * @memberof PinsSaveRequest
     */
    board_section_id?: string | null;
}
