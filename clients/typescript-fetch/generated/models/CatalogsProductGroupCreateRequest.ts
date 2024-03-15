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
import type { CatalogsProductGroupFiltersRequest } from './CatalogsProductGroupFiltersRequest';
import {
    CatalogsProductGroupFiltersRequestFromJSON,
    CatalogsProductGroupFiltersRequestFromJSONTyped,
    CatalogsProductGroupFiltersRequestToJSON,
} from './CatalogsProductGroupFiltersRequest';

/**
 * Request object for creating a product group.
 * @export
 * @interface CatalogsProductGroupCreateRequest
 */
export interface CatalogsProductGroupCreateRequest {
    /**
     * 
     * @type {string}
     * @memberof CatalogsProductGroupCreateRequest
     */
    name: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsProductGroupCreateRequest
     */
    description?: string;
    /**
     * boolean indicator of whether the product group is being featured or not
     * @type {boolean}
     * @memberof CatalogsProductGroupCreateRequest
     */
    isFeatured?: boolean;
    /**
     * 
     * @type {CatalogsProductGroupFiltersRequest}
     * @memberof CatalogsProductGroupCreateRequest
     */
    filters: CatalogsProductGroupFiltersRequest;
    /**
     * Catalog Feed id pertaining to the catalog product group.
     * @type {string}
     * @memberof CatalogsProductGroupCreateRequest
     */
    feedId: string;
}

/**
 * Check if a given object implements the CatalogsProductGroupCreateRequest interface.
 */
export function instanceOfCatalogsProductGroupCreateRequest(value: object): boolean {
    if (!('name' in value)) return false;
    if (!('filters' in value)) return false;
    if (!('feedId' in value)) return false;
    return true;
}

export function CatalogsProductGroupCreateRequestFromJSON(json: any): CatalogsProductGroupCreateRequest {
    return CatalogsProductGroupCreateRequestFromJSONTyped(json, false);
}

export function CatalogsProductGroupCreateRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupCreateRequest {
    if (json == null) {
        return json;
    }
    return {
        
        'name': json['name'],
        'description': json['description'] == null ? undefined : json['description'],
        'isFeatured': json['is_featured'] == null ? undefined : json['is_featured'],
        'filters': CatalogsProductGroupFiltersRequestFromJSON(json['filters']),
        'feedId': json['feed_id'],
    };
}

export function CatalogsProductGroupCreateRequestToJSON(value?: CatalogsProductGroupCreateRequest | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'name': value['name'],
        'description': value['description'],
        'is_featured': value['isFeatured'],
        'filters': CatalogsProductGroupFiltersRequestToJSON(value['filters']),
        'feed_id': value['feedId'],
    };
}

