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
import { MediaUploadStatus } from './mediaUploadStatus';
import { MediaUploadType } from './mediaUploadType';


/**
 * Media upload details
 */
export interface MediaUploadDetails { 
    readonly media_id?: string;
    readonly media_type?: MediaUploadType;
    readonly status?: MediaUploadStatus;
}
