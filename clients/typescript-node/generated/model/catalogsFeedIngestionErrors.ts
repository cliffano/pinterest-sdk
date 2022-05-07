/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

export class CatalogsFeedIngestionErrors {
    'imageDownloadError'?: number;
    'imageDownloadConnectionTimeout'?: number;
    'imageFormatUnrecognize'?: number;
    'lineLevelInternalError'?: number;
    'largeProductCountDecrease'?: CatalogsFeedIngestionErrors.LargeProductCountDecreaseEnum;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "imageDownloadError",
            "baseName": "image_download_error",
            "type": "number"
        },
        {
            "name": "imageDownloadConnectionTimeout",
            "baseName": "image_download_connection_timeout",
            "type": "number"
        },
        {
            "name": "imageFormatUnrecognize",
            "baseName": "image_format_unrecognize",
            "type": "number"
        },
        {
            "name": "lineLevelInternalError",
            "baseName": "line_level_internal_error",
            "type": "number"
        },
        {
            "name": "largeProductCountDecrease",
            "baseName": "large_product_count_decrease",
            "type": "CatalogsFeedIngestionErrors.LargeProductCountDecreaseEnum"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsFeedIngestionErrors.attributeTypeMap;
    }
}

export namespace CatalogsFeedIngestionErrors {
    export enum LargeProductCountDecreaseEnum {
        NUMBER_1 = <any> 1
    }
}
