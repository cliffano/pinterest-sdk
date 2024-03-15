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
    SSIOInsertionOrderStatus,
    SSIOInsertionOrderStatusFromJSON,
    SSIOInsertionOrderStatusToJSON,
} from './';

/**
 * @type SsioInsertionOrdersStatusGetByAdAccount200Response
 * @export
 */
export interface SsioInsertionOrdersStatusGetByAdAccount200Response extends Paginated {
}

export function SsioInsertionOrdersStatusGetByAdAccount200ResponseFromJSON(json: any): SsioInsertionOrdersStatusGetByAdAccount200Response {
    return {
        ...PaginatedFromJSON(json),
    };
}

export function SsioInsertionOrdersStatusGetByAdAccount200ResponseToJSON(value?: SsioInsertionOrdersStatusGetByAdAccount200Response): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...PaginatedToJSON(value),
    };
}