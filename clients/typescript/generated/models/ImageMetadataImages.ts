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

import { ImageDetails } from '../models/ImageDetails';
import { HttpFile } from '../http/http';

export class ImageMetadataImages {
    '_150x150'?: ImageDetails;
    '_400x300'?: ImageDetails;
    '_600x'?: ImageDetails;
    '_1200x'?: ImageDetails;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "_150x150",
            "baseName": "150x150",
            "type": "ImageDetails",
            "format": ""
        },
        {
            "name": "_400x300",
            "baseName": "400x300",
            "type": "ImageDetails",
            "format": ""
        },
        {
            "name": "_600x",
            "baseName": "600x",
            "type": "ImageDetails",
            "format": ""
        },
        {
            "name": "_1200x",
            "baseName": "1200x",
            "type": "ImageDetails",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ImageMetadataImages.attributeTypeMap;
    }

    public constructor() {
    }
}

