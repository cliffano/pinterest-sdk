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

import { RequestFile } from './models';

export class ConversionEventsDataInnerCustomDataContentsInner {
    /**
    * The id of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
    */
    'id'?: string;
    /**
    * The price of a product. Accepted as a string in the request; it will be parsed into a double. This is the original item value before any discount. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
    */
    'itemPrice'?: string;
    /**
    * The amount of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
    */
    'quantity'?: number;
    /**
    * The name of a product.
    */
    'itemName'?: string;
    /**
    * The category of a product.
    */
    'itemCategory'?: string;
    /**
    * The brand of a product.
    */
    'itemBrand'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "itemPrice",
            "baseName": "item_price",
            "type": "string"
        },
        {
            "name": "quantity",
            "baseName": "quantity",
            "type": "number"
        },
        {
            "name": "itemName",
            "baseName": "item_name",
            "type": "string"
        },
        {
            "name": "itemCategory",
            "baseName": "item_category",
            "type": "string"
        },
        {
            "name": "itemBrand",
            "baseName": "item_brand",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return ConversionEventsDataInnerCustomDataContentsInner.attributeTypeMap;
    }
}
