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
    ItemProcessingStatus,
    ItemValidationEvent,
} from './';

/**
 * Object describing an item processing record
 * @export
 * @interface ItemProcessingRecord
 */
export interface ItemProcessingRecord {
    /**
     * The catalog item id in the merchant namespace
     * @type {string}
     * @memberof ItemProcessingRecord
     */
    item_id?: string;
    /**
     * Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
     * @type {Array<ItemValidationEvent>}
     * @memberof ItemProcessingRecord
     */
    errors?: Array<ItemValidationEvent>;
    /**
     * Array with the validation warnings for the item processing record
     * @type {Array<ItemValidationEvent>}
     * @memberof ItemProcessingRecord
     */
    warnings?: Array<ItemValidationEvent>;
    /**
     * @type {ItemProcessingStatus}
     * @memberof ItemProcessingRecord
     */
    status?: ItemProcessingStatus;
}


