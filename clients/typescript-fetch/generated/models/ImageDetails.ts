/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface ImageDetails
 */
export interface ImageDetails {
    /**
     * 
     * @type {number}
     * @memberof ImageDetails
     */
    width: number;
    /**
     * 
     * @type {number}
     * @memberof ImageDetails
     */
    height: number | null;
    /**
     * 
     * @type {string}
     * @memberof ImageDetails
     */
    url: string;
}

export function ImageDetailsFromJSON(json: any): ImageDetails {
    return ImageDetailsFromJSONTyped(json, false);
}

export function ImageDetailsFromJSONTyped(json: any, ignoreDiscriminator: boolean): ImageDetails {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'width': json['width'],
        'height': json['height'],
        'url': json['url'],
    };
}

export function ImageDetailsToJSON(value?: ImageDetails | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'width': value.width,
        'height': value.height,
        'url': value.url,
    };
}

