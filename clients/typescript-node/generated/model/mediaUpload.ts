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
import { MediaUploadAllOf } from './mediaUploadAllOf';
import { MediaUploadAllOfUploadParameters } from './mediaUploadAllOfUploadParameters';
import { MediaUploadType } from './mediaUploadType';

/**
* Media upload that has been registered but not uploaded/processed yet.
*/
export class MediaUpload {
    /**
    * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
    */
    'mediaId'?: string;
    'mediaType'?: MediaUploadType;
    /**
    * The URL where you will POST your media file.
    */
    'uploadUrl'?: string;
    'uploadParameters'?: MediaUploadAllOfUploadParameters;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "mediaId",
            "baseName": "media_id",
            "type": "string"
        },
        {
            "name": "mediaType",
            "baseName": "media_type",
            "type": "MediaUploadType"
        },
        {
            "name": "uploadUrl",
            "baseName": "upload_url",
            "type": "string"
        },
        {
            "name": "uploadParameters",
            "baseName": "upload_parameters",
            "type": "MediaUploadAllOfUploadParameters"
        }    ];

    static getAttributeTypeMap() {
        return MediaUpload.attributeTypeMap;
    }
}
