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
    ConversionEventResponse,
    ConversionEventResponseFromJSON,
    ConversionEventResponseToJSON,
} from './';

/**
 * @type PageVisitConversionTagsGet200Response
 * @export
 */
export interface PageVisitConversionTagsGet200Response extends Paginated {
}

export function PageVisitConversionTagsGet200ResponseFromJSON(json: any): PageVisitConversionTagsGet200Response {
    return {
        ...PaginatedFromJSON(json),
    };
}

export function PageVisitConversionTagsGet200ResponseToJSON(value?: PageVisitConversionTagsGet200Response): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...PaginatedToJSON(value),
    };
}
