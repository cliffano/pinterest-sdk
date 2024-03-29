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

import type { CatalogsFeedsUpdateRequest } from './CatalogsFeedsUpdateRequest';
import {
    instanceOfCatalogsFeedsUpdateRequest,
    CatalogsFeedsUpdateRequestFromJSON,
    CatalogsFeedsUpdateRequestFromJSONTyped,
    CatalogsFeedsUpdateRequestToJSON,
} from './CatalogsFeedsUpdateRequest';
import type { CatalogsVerticalFeedsUpdateRequest } from './CatalogsVerticalFeedsUpdateRequest';
import {
    instanceOfCatalogsVerticalFeedsUpdateRequest,
    CatalogsVerticalFeedsUpdateRequestFromJSON,
    CatalogsVerticalFeedsUpdateRequestFromJSONTyped,
    CatalogsVerticalFeedsUpdateRequestToJSON,
} from './CatalogsVerticalFeedsUpdateRequest';

/**
 * @type FeedsUpdateRequest
 * 
 * @export
 */
export type FeedsUpdateRequest = CatalogsFeedsUpdateRequest | CatalogsVerticalFeedsUpdateRequest;

export function FeedsUpdateRequestFromJSON(json: any): FeedsUpdateRequest {
    return FeedsUpdateRequestFromJSONTyped(json, false);
}

export function FeedsUpdateRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): FeedsUpdateRequest {
    if (json == null) {
        return json;
    }
    return { ...CatalogsFeedsUpdateRequestFromJSONTyped(json, true), ...CatalogsVerticalFeedsUpdateRequestFromJSONTyped(json, true) };
}

export function FeedsUpdateRequestToJSON(value?: FeedsUpdateRequest | null): any {
    if (value == null) {
        return value;
    }

    if (instanceOfCatalogsFeedsUpdateRequest(value)) {
        return CatalogsFeedsUpdateRequestToJSON(value as CatalogsFeedsUpdateRequest);
    }
    if (instanceOfCatalogsVerticalFeedsUpdateRequest(value)) {
        return CatalogsVerticalFeedsUpdateRequestToJSON(value as CatalogsVerticalFeedsUpdateRequest);
    }

    return {};
}

