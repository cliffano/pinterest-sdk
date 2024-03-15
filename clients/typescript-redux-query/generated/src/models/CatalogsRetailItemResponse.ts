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

import { exists, mapValues } from '../runtime';
import {
    CatalogsType,
    CatalogsTypeFromJSON,
    CatalogsTypeToJSON,
    ItemAttributes,
    ItemAttributesFromJSON,
    ItemAttributesToJSON,
    Pin,
    PinFromJSON,
    PinToJSON,
} from './';

/**
 * Object describing a retail item record
 * @export
 * @interface CatalogsRetailItemResponse
 */
export interface CatalogsRetailItemResponse  {
    /**
     * 
     * @type {CatalogsType}
     * @memberof CatalogsRetailItemResponse
     */
    catalogType: CatalogsType;
    /**
     * The catalog retail item id in the merchant namespace
     * @type {string}
     * @memberof CatalogsRetailItemResponse
     */
    itemId?: string;
    /**
     * The pins mapped to the item
     * @type {Array<Pin>}
     * @memberof CatalogsRetailItemResponse
     */
    pins?: Array<Pin>;
    /**
     * 
     * @type {ItemAttributes}
     * @memberof CatalogsRetailItemResponse
     */
    attributes?: ItemAttributes;
}

export function CatalogsRetailItemResponseFromJSON(json: any): CatalogsRetailItemResponse {
    return {
        'catalogType': CatalogsTypeFromJSON(json['catalog_type']),
        'itemId': !exists(json, 'item_id') ? undefined : json['item_id'],
        'pins': !exists(json, 'pins') ? undefined : (json['pins'] as Array<any>).map(PinFromJSON),
        'attributes': !exists(json, 'attributes') ? undefined : ItemAttributesFromJSON(json['attributes']),
    };
}

export function CatalogsRetailItemResponseToJSON(value?: CatalogsRetailItemResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'catalog_type': CatalogsTypeToJSON(value.catalogType),
        'item_id': value.itemId,
        'pins': value.pins === undefined ? undefined : (value.pins as Array<any>).map(PinToJSON),
        'attributes': ItemAttributesToJSON(value.attributes),
    };
}


