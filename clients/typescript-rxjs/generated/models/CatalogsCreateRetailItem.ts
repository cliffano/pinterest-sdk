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
    ItemAttributes,
} from './';

/**
 * An item to be created
 * @export
 * @interface CatalogsCreateRetailItem
 */
export interface CatalogsCreateRetailItem {
    /**
     * The catalog item id in the merchant namespace
     * @type {string}
     * @memberof CatalogsCreateRetailItem
     */
    item_id: string;
    /**
     * @type {string}
     * @memberof CatalogsCreateRetailItem
     */
    operation: CatalogsCreateRetailItemOperationEnum;
    /**
     * @type {ItemAttributes}
     * @memberof CatalogsCreateRetailItem
     */
    attributes: ItemAttributes;
}

/**
 * @export
 * @enum {string}
 */
export enum CatalogsCreateRetailItemOperationEnum {
    Create = 'CREATE',
    Update = 'UPDATE',
    Upsert = 'UPSERT',
    Delete = 'DELETE'
}
