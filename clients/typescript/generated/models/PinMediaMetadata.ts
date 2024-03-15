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

import { ImageMetadata } from '../models/ImageMetadata';
import { ImageMetadataImages } from '../models/ImageMetadataImages';
import { VideoMetadata } from '../models/VideoMetadata';
import { HttpFile } from '../http/http';

export class PinMediaMetadata {
    'itemType'?: string;
    'title'?: string | null;
    'description'?: string | null;
    'link'?: string | null;
    'images'?: ImageMetadataImages;
    'coverImageUrl'?: string;
    /**
    * Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
    */
    'videoUrl'?: string | null;
    /**
    * Duration (in milliseconds)
    */
    'duration'?: number;
    /**
    * Height (in pixels)
    */
    'height'?: number;
    /**
    * Width (in pixels)
    */
    'width'?: number;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "itemType",
            "baseName": "item_type",
            "type": "string",
            "format": ""
        },
        {
            "name": "title",
            "baseName": "title",
            "type": "string",
            "format": ""
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string",
            "format": ""
        },
        {
            "name": "link",
            "baseName": "link",
            "type": "string",
            "format": ""
        },
        {
            "name": "images",
            "baseName": "images",
            "type": "ImageMetadataImages",
            "format": ""
        },
        {
            "name": "coverImageUrl",
            "baseName": "cover_image_url",
            "type": "string",
            "format": ""
        },
        {
            "name": "videoUrl",
            "baseName": "video_url",
            "type": "string",
            "format": ""
        },
        {
            "name": "duration",
            "baseName": "duration",
            "type": "number",
            "format": ""
        },
        {
            "name": "height",
            "baseName": "height",
            "type": "number",
            "format": ""
        },
        {
            "name": "width",
            "baseName": "width",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return PinMediaMetadata.attributeTypeMap;
    }

    public constructor() {
    }
}

