/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


/**
 * Video ID-based media source
 */
export interface PinMediaSourceVideoID { 
    source_type: PinMediaSourceVideoID.SourceTypeEnum;
    cover_image_url: string;
    media_id: string;
}
export namespace PinMediaSourceVideoID {
    export type SourceTypeEnum = 'video_id';
    export const SourceTypeEnum = {
        VideoId: 'video_id' as SourceTypeEnum
    }
}
