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
import { ItemAttributes } from './itemAttributes';


/**
 * Object describing an item batch record to create items
 */
export interface ItemCreateBatchRecord { 
    /**
     * The catalog item id in the merchant namespace
     */
    item_id?: string;
    attributes?: ItemAttributes;
}
