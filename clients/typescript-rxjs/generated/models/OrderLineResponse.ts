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

import type {
    OrderLine,
    OrderLineError,
} from './';

/**
 * @export
 * @interface OrderLineResponse
 */
export interface OrderLineResponse {
    /**
     * Error list if update(s) fail.
     * @type {Array<OrderLineError>}
     * @memberof OrderLineResponse
     */
    errors?: Array<OrderLineError>;
    /**
     * Order Line object array.
     * @type {Array<OrderLine>}
     * @memberof OrderLineResponse
     */
    order_line?: Array<OrderLine>;
}