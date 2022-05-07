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
import { ItemValidationEvent } from './itemValidationEvent';
import { ItemProcessingStatus } from './itemProcessingStatus';


/**
 * Object describing an item processing record
 */
export interface ItemProcessingRecord { 
    /**
     * The catalog item id in the merchant namespace
     */
    item_id?: string;
    /**
     * Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
     */
    errors?: Array<ItemValidationEvent>;
    /**
     * Array with the validation warnings for the item processing record
     */
    warnings?: Array<ItemValidationEvent>;
    status?: ItemProcessingStatus;
}

