/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
/**
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 * @export
 * @interface MediaUploadAllOfUploadParameters
 */
export interface MediaUploadAllOfUploadParameters {
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    xAmzDate?: string;
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    xAmzSignature?: string;
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    xAmzSecurityToken?: string;
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    xAmzAlgorithm?: string;
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    key?: string;
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    policy?: string;
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    xAmzCredential?: string;
    /**
     * 
     * @type {string}
     * @memberof MediaUploadAllOfUploadParameters
     */
    contentType?: string;
}

/**
 * Check if a given object implements the MediaUploadAllOfUploadParameters interface.
 */
export function instanceOfMediaUploadAllOfUploadParameters(value: object): boolean {
    return true;
}

export function MediaUploadAllOfUploadParametersFromJSON(json: any): MediaUploadAllOfUploadParameters {
    return MediaUploadAllOfUploadParametersFromJSONTyped(json, false);
}

export function MediaUploadAllOfUploadParametersFromJSONTyped(json: any, ignoreDiscriminator: boolean): MediaUploadAllOfUploadParameters {
    if (json == null) {
        return json;
    }
    return {
        
        'xAmzDate': json['x-amz-date'] == null ? undefined : json['x-amz-date'],
        'xAmzSignature': json['x-amz-signature'] == null ? undefined : json['x-amz-signature'],
        'xAmzSecurityToken': json['x-amz-security-token'] == null ? undefined : json['x-amz-security-token'],
        'xAmzAlgorithm': json['x-amz-algorithm'] == null ? undefined : json['x-amz-algorithm'],
        'key': json['key'] == null ? undefined : json['key'],
        'policy': json['policy'] == null ? undefined : json['policy'],
        'xAmzCredential': json['x-amz-credential'] == null ? undefined : json['x-amz-credential'],
        'contentType': json['Content-Type'] == null ? undefined : json['Content-Type'],
    };
}

export function MediaUploadAllOfUploadParametersToJSON(value?: MediaUploadAllOfUploadParameters | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'x-amz-date': value['xAmzDate'],
        'x-amz-signature': value['xAmzSignature'],
        'x-amz-security-token': value['xAmzSecurityToken'],
        'x-amz-algorithm': value['xAmzAlgorithm'],
        'key': value['key'],
        'policy': value['policy'],
        'x-amz-credential': value['xAmzCredential'],
        'Content-Type': value['contentType'],
    };
}

