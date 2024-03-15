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
    AdAccountGetSubscriptionResponse,
    AdAccountGetSubscriptionResponseFromJSON,
    AdAccountGetSubscriptionResponseToJSON,
} from './';

/**
 * @type AdAccountsSubscriptionsGetList200Response
 * @export
 */
export interface AdAccountsSubscriptionsGetList200Response extends Paginated {
}

export function AdAccountsSubscriptionsGetList200ResponseFromJSON(json: any): AdAccountsSubscriptionsGetList200Response {
    return {
        ...PaginatedFromJSON(json),
    };
}

export function AdAccountsSubscriptionsGetList200ResponseToJSON(value?: AdAccountsSubscriptionsGetList200Response): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...PaginatedToJSON(value),
    };
}
