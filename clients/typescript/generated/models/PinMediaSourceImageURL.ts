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
* Image URL-based media source
*/
export class PinMediaSourceImageURL {
    'sourceType': PinMediaSourceImageURLSourceTypeEnum;
    'url': string;
    /**
    * Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
    */
    'isStandard'?: boolean;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "sourceType",
            "baseName": "source_type",
            "type": "PinMediaSourceImageURLSourceTypeEnum",
            "format": ""
        },
        {
            "name": "url",
            "baseName": "url",
            "type": "string",
            "format": ""
        },
        {
            "name": "isStandard",
            "baseName": "is_standard",
            "type": "boolean",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return PinMediaSourceImageURL.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum PinMediaSourceImageURLSourceTypeEnum {
    ImageUrl = 'image_url'
}

