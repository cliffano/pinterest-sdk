/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { HttpFile } from '../http/http';

/**
* Pin URL-based media source for product pin creation. Currently the field is only available to a list of beta users.
*/
export class PinMediaSourcePinURL {
    'sourceType': PinMediaSourcePinURLSourceTypeEnum;
    /**
    * This is an affiliate link or sponsored product. The FTC requires disclosure for paid partnerships and affiliate products.
    */
    'isAffiliateLink'?: boolean;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "sourceType",
            "baseName": "source_type",
            "type": "PinMediaSourcePinURLSourceTypeEnum",
            "format": ""
        },
        {
            "name": "isAffiliateLink",
            "baseName": "is_affiliate_link",
            "type": "boolean",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return PinMediaSourcePinURL.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum PinMediaSourcePinURLSourceTypeEnum {
    PinUrl = 'pin_url'
}

