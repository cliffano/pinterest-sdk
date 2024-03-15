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
import { ProductGroupPromotion } from './productGroupPromotion';

export class ProductGroupPromotionUpdateRequest {
    /**
    * ID of the ad group the product group belongs to.
    */
    'adGroupId': string;
    'productGroupPromotion': Array<ProductGroupPromotion>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "adGroupId",
            "baseName": "ad_group_id",
            "type": "string"
        },
        {
            "name": "productGroupPromotion",
            "baseName": "product_group_promotion",
            "type": "Array<ProductGroupPromotion>"
        }    ];

    static getAttributeTypeMap() {
        return ProductGroupPromotionUpdateRequest.attributeTypeMap;
    }
}
