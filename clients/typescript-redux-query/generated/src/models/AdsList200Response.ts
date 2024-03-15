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
    AdResponse,
    AdResponseFromJSON,
    AdResponseToJSON,
} from './';

/**
 * @type AdsList200Response
 * @export
 */
export interface AdsList200Response extends Paginated {
}

export function AdsList200ResponseFromJSON(json: any): AdsList200Response {
    return {
        ...PaginatedFromJSON(json),
    };
}

export function AdsList200ResponseToJSON(value?: AdsList200Response): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...PaginatedToJSON(value),
    };
}
