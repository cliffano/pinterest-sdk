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
* Video ID-based media source
*/
export class PinMediaSourceVideoID {
    'sourceType': PinMediaSourceVideoIDSourceTypeEnum;
    /**
    * Cover image url.
    */
    'coverImageUrl'?: string;
    /**
    * Content type for cover image Base64.
    */
    'coverImageContentType'?: PinMediaSourceVideoIDCoverImageContentTypeEnum;
    /**
    * Cover image Base64.
    */
    'coverImageData'?: string;
    'mediaId': string;
    /**
    * Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
    */
    'isStandard'?: boolean;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "sourceType",
            "baseName": "source_type",
            "type": "PinMediaSourceVideoIDSourceTypeEnum",
            "format": ""
        },
        {
            "name": "coverImageUrl",
            "baseName": "cover_image_url",
            "type": "string",
            "format": ""
        },
        {
            "name": "coverImageContentType",
            "baseName": "cover_image_content_type",
            "type": "PinMediaSourceVideoIDCoverImageContentTypeEnum",
            "format": ""
        },
        {
            "name": "coverImageData",
            "baseName": "cover_image_data",
            "type": "string",
            "format": ""
        },
        {
            "name": "mediaId",
            "baseName": "media_id",
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
        return PinMediaSourceVideoID.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum PinMediaSourceVideoIDSourceTypeEnum {
    VideoId = 'video_id'
}
export enum PinMediaSourceVideoIDCoverImageContentTypeEnum {
    Jpeg = 'image/jpeg',
    Png = 'image/png'
}

