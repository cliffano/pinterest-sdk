/* tslint:disable */
/* eslint-disable */
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

import { mapValues } from '../runtime';
import type { ImageMetadataImages } from './ImageMetadataImages';
import {
    ImageMetadataImagesFromJSON,
    ImageMetadataImagesFromJSONTyped,
    ImageMetadataImagesToJSON,
} from './ImageMetadataImages';

/**
 * 
 * @export
 * @interface ImageMetadata
 */
export interface ImageMetadata {
    /**
     * 
     * @type {string}
     * @memberof ImageMetadata
     */
    itemType?: string;
    /**
     * 
     * @type {string}
     * @memberof ImageMetadata
     */
    title?: string;
    /**
     * 
     * @type {string}
     * @memberof ImageMetadata
     */
    description?: string;
    /**
     * 
     * @type {string}
     * @memberof ImageMetadata
     */
    link?: string;
    /**
     * 
     * @type {ImageMetadataImages}
     * @memberof ImageMetadata
     */
    images?: ImageMetadataImages;
}

/**
 * Check if a given object implements the ImageMetadata interface.
 */
export function instanceOfImageMetadata(value: object): boolean {
    return true;
}

export function ImageMetadataFromJSON(json: any): ImageMetadata {
    return ImageMetadataFromJSONTyped(json, false);
}

export function ImageMetadataFromJSONTyped(json: any, ignoreDiscriminator: boolean): ImageMetadata {
    if (json == null) {
        return json;
    }
    return {
        
        'itemType': json['item_type'] == null ? undefined : json['item_type'],
        'title': json['title'] == null ? undefined : json['title'],
        'description': json['description'] == null ? undefined : json['description'],
        'link': json['link'] == null ? undefined : json['link'],
        'images': json['images'] == null ? undefined : ImageMetadataImagesFromJSON(json['images']),
    };
}

export function ImageMetadataToJSON(value?: ImageMetadata | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'item_type': value['itemType'],
        'title': value['title'],
        'description': value['description'],
        'link': value['link'],
        'images': ImageMetadataImagesToJSON(value['images']),
    };
}

