// tslint:disable
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

import {
    MediaUploadAllOf,
    MediaUploadAllOfFromJSON,
    MediaUploadAllOfToJSON,
    MediaUploadAllOfUploadParameters,
    MediaUploadAllOfUploadParametersFromJSON,
    MediaUploadAllOfUploadParametersToJSON,
    MediaUploadType,
    MediaUploadTypeFromJSON,
    MediaUploadTypeToJSON,
} from './';

/**
 * @type MediaUpload
 * Media upload that has been registered but not uploaded/processed yet.
 * @export
 */
export interface MediaUpload extends MediaUploadAllOf {
}

export function MediaUploadFromJSON(json: any): MediaUpload {
    return {
        ...MediaUploadAllOfFromJSON(json),
    };
}

export function MediaUploadToJSON(value?: MediaUpload): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...MediaUploadAllOfToJSON(value),
    };
}
