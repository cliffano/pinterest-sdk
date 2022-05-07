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


/**
 * Image URL-based media source
 */
export interface PinMediaSourceImageURL { 
    source_type: PinMediaSourceImageURL.SourceTypeEnum;
    url: string;
}
export namespace PinMediaSourceImageURL {
    export type SourceTypeEnum = 'image_url';
    export const SourceTypeEnum = {
        ImageUrl: 'image_url' as SourceTypeEnum
    }
}
