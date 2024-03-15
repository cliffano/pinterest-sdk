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
    Interest,
    InterestFromJSON,
    InterestToJSON,
} from './';

/**
 * @type UserAccountFollowedInterests200Response
 * @export
 */
export interface UserAccountFollowedInterests200Response extends Paginated {
}

export function UserAccountFollowedInterests200ResponseFromJSON(json: any): UserAccountFollowedInterests200Response {
    return {
        ...PaginatedFromJSON(json),
    };
}

export function UserAccountFollowedInterests200ResponseToJSON(value?: UserAccountFollowedInterests200Response): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...PaginatedToJSON(value),
    };
}
