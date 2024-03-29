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

import type { CatalogsProductGroup } from './CatalogsProductGroup';
import {
    instanceOfCatalogsProductGroup,
    CatalogsProductGroupFromJSON,
    CatalogsProductGroupFromJSONTyped,
    CatalogsProductGroupToJSON,
} from './CatalogsProductGroup';
import type { CatalogsVerticalProductGroup } from './CatalogsVerticalProductGroup';
import {
    instanceOfCatalogsVerticalProductGroup,
    CatalogsVerticalProductGroupFromJSON,
    CatalogsVerticalProductGroupFromJSONTyped,
    CatalogsVerticalProductGroupToJSON,
} from './CatalogsVerticalProductGroup';

/**
 * @type CatalogsProductGroupsCreate201Response
 * 
 * @export
 */
export type CatalogsProductGroupsCreate201Response = CatalogsProductGroup | CatalogsVerticalProductGroup;

export function CatalogsProductGroupsCreate201ResponseFromJSON(json: any): CatalogsProductGroupsCreate201Response {
    return CatalogsProductGroupsCreate201ResponseFromJSONTyped(json, false);
}

export function CatalogsProductGroupsCreate201ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupsCreate201Response {
    if (json == null) {
        return json;
    }
    return { ...CatalogsProductGroupFromJSONTyped(json, true), ...CatalogsVerticalProductGroupFromJSONTyped(json, true) };
}

export function CatalogsProductGroupsCreate201ResponseToJSON(value?: CatalogsProductGroupsCreate201Response | null): any {
    if (value == null) {
        return value;
    }

    if (instanceOfCatalogsProductGroup(value)) {
        return CatalogsProductGroupToJSON(value as CatalogsProductGroup);
    }
    if (instanceOfCatalogsVerticalProductGroup(value)) {
        return CatalogsVerticalProductGroupToJSON(value as CatalogsVerticalProductGroup);
    }

    return {};
}

