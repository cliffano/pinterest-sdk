// tslint:disable
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

import type {
    MediaUploadAllOfUploadParameters,
    MediaUploadType,
} from './';

/**
 * Media upload that has been registered but not uploaded/processed yet.
 * @export
 * @interface MediaUpload
 */
export interface MediaUpload {
    /**
     * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
     * @type {string}
     * @memberof MediaUpload
     */
    media_id?: string;
    /**
     * @type {MediaUploadType}
     * @memberof MediaUpload
     */
    media_type?: MediaUploadType;
    /**
     * The URL where you will POST your media file.
     * @type {string}
     * @memberof MediaUpload
     */
    upload_url?: string;
    /**
     * @type {MediaUploadAllOfUploadParameters}
     * @memberof MediaUpload
     */
    upload_parameters?: MediaUploadAllOfUploadParameters;
}

