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
import type { Keyword } from './Keyword';
import {
    KeywordFromJSON,
    KeywordFromJSONTyped,
    KeywordToJSON,
} from './Keyword';
import type { KeywordError } from './KeywordError';
import {
    KeywordErrorFromJSON,
    KeywordErrorFromJSONTyped,
    KeywordErrorToJSON,
} from './KeywordError';

/**
 * 
 * @export
 * @interface KeywordsResponse
 */
export interface KeywordsResponse {
    /**
     * 
     * @type {Array<KeywordError>}
     * @memberof KeywordsResponse
     */
    errors?: Array<KeywordError>;
    /**
     * 
     * @type {Array<Keyword>}
     * @memberof KeywordsResponse
     */
    keywords?: Array<Keyword>;
}

/**
 * Check if a given object implements the KeywordsResponse interface.
 */
export function instanceOfKeywordsResponse(value: object): boolean {
    return true;
}

export function KeywordsResponseFromJSON(json: any): KeywordsResponse {
    return KeywordsResponseFromJSONTyped(json, false);
}

export function KeywordsResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): KeywordsResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'errors': json['errors'] == null ? undefined : ((json['errors'] as Array<any>).map(KeywordErrorFromJSON)),
        'keywords': json['keywords'] == null ? undefined : ((json['keywords'] as Array<any>).map(KeywordFromJSON)),
    };
}

export function KeywordsResponseToJSON(value?: KeywordsResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'errors': value['errors'] == null ? undefined : ((value['errors'] as Array<any>).map(KeywordErrorToJSON)),
        'keywords': value['keywords'] == null ? undefined : ((value['keywords'] as Array<any>).map(KeywordToJSON)),
    };
}

