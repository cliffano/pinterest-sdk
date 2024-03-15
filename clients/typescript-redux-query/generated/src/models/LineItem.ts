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
/**
 * 
 * @export
 * @interface LineItem
 */
export interface LineItem  {
    /**
     * Product brand. For example, \"Parker\".
     * @type {string}
     * @memberof LineItem
     */
    productBrand?: string;
    /**
     * Product category. For example, \"Shoes\".
     * @type {string}
     * @memberof LineItem
     */
    productCategory?: string;
    /**
     * Product ID. For example, 1414.
     * @type {number}
     * @memberof LineItem
     */
    productId?: number;
    /**
     * Product name. For example, \"Parker Boots\".
     * @type {string}
     * @memberof LineItem
     */
    productName?: string;
    /**
     * Product price. For example, \"99.99\".
     * @type {string}
     * @memberof LineItem
     */
    productPrice?: string;
    /**
     * Product quantity. For example, 2.
     * @type {number}
     * @memberof LineItem
     */
    productQuantity?: number;
    /**
     * Product variant. For example, \"Red\".
     * @type {string}
     * @memberof LineItem
     */
    productVariant?: string;
    /**
     * Product variant ID. For example, \"1414-34832\".
     * @type {string}
     * @memberof LineItem
     */
    productVariantId?: string;
}

export function LineItemFromJSON(json: any): LineItem {
    return {
        'productBrand': !exists(json, 'product_brand') ? undefined : json['product_brand'],
        'productCategory': !exists(json, 'product_category') ? undefined : json['product_category'],
        'productId': !exists(json, 'product_id') ? undefined : json['product_id'],
        'productName': !exists(json, 'product_name') ? undefined : json['product_name'],
        'productPrice': !exists(json, 'product_price') ? undefined : json['product_price'],
        'productQuantity': !exists(json, 'product_quantity') ? undefined : json['product_quantity'],
        'productVariant': !exists(json, 'product_variant') ? undefined : json['product_variant'],
        'productVariantId': !exists(json, 'product_variant_id') ? undefined : json['product_variant_id'],
    };
}

export function LineItemToJSON(value?: LineItem): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'product_brand': value.productBrand,
        'product_category': value.productCategory,
        'product_id': value.productId,
        'product_name': value.productName,
        'product_price': value.productPrice,
        'product_quantity': value.productQuantity,
        'product_variant': value.productVariant,
        'product_variant_id': value.productVariantId,
    };
}

