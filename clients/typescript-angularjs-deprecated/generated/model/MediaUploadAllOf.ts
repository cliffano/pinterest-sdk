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

import * as models from './models';

export interface MediaUploadAllOf {
    /**
     * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
     */
    "media_id"?: string;
    "media_type"?: models.models.MediaUploadType;
    /**
     * The URL where you will POST your media file.
     */
    "upload_url"?: string;
    "upload_parameters"?: models.MediaUploadAllOfUploadParameters;
}

