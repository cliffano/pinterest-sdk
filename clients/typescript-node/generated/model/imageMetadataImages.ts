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
import { ImageDetails } from './imageDetails';

export class ImageMetadataImages {
    '_150x150'?: ImageDetails;
    '_400x300'?: ImageDetails;
    '_600x'?: ImageDetails;
    '_1200x'?: ImageDetails;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "_150x150",
            "baseName": "150x150",
            "type": "ImageDetails"
        },
        {
            "name": "_400x300",
            "baseName": "400x300",
            "type": "ImageDetails"
        },
        {
            "name": "_600x",
            "baseName": "600x",
            "type": "ImageDetails"
        },
        {
            "name": "_1200x",
            "baseName": "1200x",
            "type": "ImageDetails"
        }    ];

    static getAttributeTypeMap() {
        return ImageMetadataImages.attributeTypeMap;
    }
}
