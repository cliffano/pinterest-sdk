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

import * as models from './models';

/**
 * Object describing an item batch record to upsert items
 */
export interface ItemUpsertBatchRecord {
    /**
     * The catalog item id in the merchant namespace
     */
    item_id?: string;

    attributes?: models.ItemAttributes;

}
