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
import {
    ImageDetails,
    ImageDetailsFromJSON,
    ImageDetailsFromJSONTyped,
    ImageDetailsToJSON,
} from './ImageDetails';

/**
 * 
 * @export
 * @interface PinMediaWithImageAllOf
 */
export interface PinMediaWithImageAllOf {
    /**
     * 
     * @type {{ [key: string]: ImageDetails; }}
     * @memberof PinMediaWithImageAllOf
     */
    images?: { [key: string]: ImageDetails; };
}

export function PinMediaWithImageAllOfFromJSON(json: any): PinMediaWithImageAllOf {
    return PinMediaWithImageAllOfFromJSONTyped(json, false);
}

export function PinMediaWithImageAllOfFromJSONTyped(json: any, ignoreDiscriminator: boolean): PinMediaWithImageAllOf {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'images': !exists(json, 'images') ? undefined : (mapValues(json['images'], ImageDetailsFromJSON)),
    };
}

export function PinMediaWithImageAllOfToJSON(value?: PinMediaWithImageAllOf | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'images': value.images === undefined ? undefined : (mapValues(value.images, ImageDetailsToJSON)),
    };
}

