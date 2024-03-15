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
/**
 * 
 * @export
 * @interface LinkedBusiness
 */
export interface LinkedBusiness {
    /**
     * Username
     * @type {string}
     * @memberof LinkedBusiness
     */
    username?: string;
    /**
     * image_small_url
     * @type {string}
     * @memberof LinkedBusiness
     */
    imageSmallUrl?: string;
    /**
     * image_medium_url
     * @type {string}
     * @memberof LinkedBusiness
     */
    imageMediumUrl?: string;
    /**
     * image_large_url
     * @type {string}
     * @memberof LinkedBusiness
     */
    imageLargeUrl?: string;
    /**
     * image_xlarge_url
     * @type {string}
     * @memberof LinkedBusiness
     */
    imageXlargeUrl?: string;
}

/**
 * Check if a given object implements the LinkedBusiness interface.
 */
export function instanceOfLinkedBusiness(value: object): boolean {
    return true;
}

export function LinkedBusinessFromJSON(json: any): LinkedBusiness {
    return LinkedBusinessFromJSONTyped(json, false);
}

export function LinkedBusinessFromJSONTyped(json: any, ignoreDiscriminator: boolean): LinkedBusiness {
    if (json == null) {
        return json;
    }
    return {
        
        'username': json['username'] == null ? undefined : json['username'],
        'imageSmallUrl': json['image_small_url'] == null ? undefined : json['image_small_url'],
        'imageMediumUrl': json['image_medium_url'] == null ? undefined : json['image_medium_url'],
        'imageLargeUrl': json['image_large_url'] == null ? undefined : json['image_large_url'],
        'imageXlargeUrl': json['image_xlarge_url'] == null ? undefined : json['image_xlarge_url'],
    };
}

export function LinkedBusinessToJSON(value?: LinkedBusiness | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'username': value['username'],
        'image_small_url': value['imageSmallUrl'],
        'image_medium_url': value['imageMediumUrl'],
        'image_large_url': value['imageLargeUrl'],
        'image_xlarge_url': value['imageXlargeUrl'],
    };
}

