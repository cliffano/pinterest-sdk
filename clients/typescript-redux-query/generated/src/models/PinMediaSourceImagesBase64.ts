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

import { exists, mapValues } from '../runtime';
import {
    PinMediaSourceImagesBase64ItemsInner,
    PinMediaSourceImagesBase64ItemsInnerFromJSON,
    PinMediaSourceImagesBase64ItemsInnerToJSON,
} from './';

/**
 * Multiple Base64-encoded images media source
 * @export
 * @interface PinMediaSourceImagesBase64
 */
export interface PinMediaSourceImagesBase64  {
    /**
     * 
     * @type {string}
     * @memberof PinMediaSourceImagesBase64
     */
    sourceType?: PinMediaSourceImagesBase64SourceTypeEnum;
    /**
     * Array with image objects.
     * @type {Array<PinMediaSourceImagesBase64ItemsInner>}
     * @memberof PinMediaSourceImagesBase64
     */
    items: Array<PinMediaSourceImagesBase64ItemsInner>;
    /**
     * 
     * @type {number}
     * @memberof PinMediaSourceImagesBase64
     */
    index?: number;
}

export function PinMediaSourceImagesBase64FromJSON(json: any): PinMediaSourceImagesBase64 {
    return {
        'sourceType': !exists(json, 'source_type') ? undefined : json['source_type'],
        'items': (json['items'] as Array<any>).map(PinMediaSourceImagesBase64ItemsInnerFromJSON),
        'index': !exists(json, 'index') ? undefined : json['index'],
    };
}

export function PinMediaSourceImagesBase64ToJSON(value?: PinMediaSourceImagesBase64): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'source_type': value.sourceType,
        'items': (value.items as Array<any>).map(PinMediaSourceImagesBase64ItemsInnerToJSON),
        'index': value.index,
    };
}

/**
* @export
* @enum {string}
*/
export enum PinMediaSourceImagesBase64SourceTypeEnum {
    MultipleImageBase64 = 'multiple_image_base64'
}


