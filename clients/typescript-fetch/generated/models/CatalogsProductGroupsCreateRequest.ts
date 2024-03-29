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

import type { CatalogsProductGroupCreateRequest } from './CatalogsProductGroupCreateRequest';
import {
    instanceOfCatalogsProductGroupCreateRequest,
    CatalogsProductGroupCreateRequestFromJSON,
    CatalogsProductGroupCreateRequestFromJSONTyped,
    CatalogsProductGroupCreateRequestToJSON,
} from './CatalogsProductGroupCreateRequest';
import type { CatalogsVerticalProductGroupCreateRequest } from './CatalogsVerticalProductGroupCreateRequest';
import {
    instanceOfCatalogsVerticalProductGroupCreateRequest,
    CatalogsVerticalProductGroupCreateRequestFromJSON,
    CatalogsVerticalProductGroupCreateRequestFromJSONTyped,
    CatalogsVerticalProductGroupCreateRequestToJSON,
} from './CatalogsVerticalProductGroupCreateRequest';

/**
 * @type CatalogsProductGroupsCreateRequest
 * 
 * @export
 */
export type CatalogsProductGroupsCreateRequest = CatalogsProductGroupCreateRequest | CatalogsVerticalProductGroupCreateRequest;

export function CatalogsProductGroupsCreateRequestFromJSON(json: any): CatalogsProductGroupsCreateRequest {
    return CatalogsProductGroupsCreateRequestFromJSONTyped(json, false);
}

export function CatalogsProductGroupsCreateRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupsCreateRequest {
    if (json == null) {
        return json;
    }
    return { ...CatalogsProductGroupCreateRequestFromJSONTyped(json, true), ...CatalogsVerticalProductGroupCreateRequestFromJSONTyped(json, true) };
}

export function CatalogsProductGroupsCreateRequestToJSON(value?: CatalogsProductGroupsCreateRequest | null): any {
    if (value == null) {
        return value;
    }

    if (instanceOfCatalogsProductGroupCreateRequest(value)) {
        return CatalogsProductGroupCreateRequestToJSON(value as CatalogsProductGroupCreateRequest);
    }
    if (instanceOfCatalogsVerticalProductGroupCreateRequest(value)) {
        return CatalogsVerticalProductGroupCreateRequestToJSON(value as CatalogsVerticalProductGroupCreateRequest);
    }

    return {};
}

