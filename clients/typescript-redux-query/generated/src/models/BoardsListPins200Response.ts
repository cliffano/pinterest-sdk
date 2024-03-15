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

import {
    Pin,
    PinFromJSON,
    PinToJSON,
} from './';

/**
 * @type BoardsListPins200Response
 * @export
 */
export interface BoardsListPins200Response extends Paginated {
}

export function BoardsListPins200ResponseFromJSON(json: any): BoardsListPins200Response {
    return {
        ...PaginatedFromJSON(json),
    };
}

export function BoardsListPins200ResponseToJSON(value?: BoardsListPins200Response): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...PaginatedToJSON(value),
    };
}
