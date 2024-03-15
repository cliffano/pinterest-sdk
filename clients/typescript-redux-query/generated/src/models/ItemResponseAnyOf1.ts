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
    CatalogsHotelItemErrorResponse,
    CatalogsHotelItemErrorResponseFromJSON,
    CatalogsHotelItemErrorResponseToJSON,
    CatalogsRetailItemErrorResponse,
    CatalogsRetailItemErrorResponseFromJSON,
    CatalogsRetailItemErrorResponseToJSON,
} from './';

/**
 * @type ItemResponseAnyOf1
 * @export
 */
export type ItemResponseAnyOf1 = CatalogsHotelItemErrorResponse | CatalogsRetailItemErrorResponse;


export function ItemResponseAnyOf1FromJSON(json: any): ItemResponseAnyOf1 {
  switch (json.catalogType) {
  case 'HOTEL': return CatalogsHotelItemErrorResponseFromJSON(json);
  case 'RETAIL': return CatalogsRetailItemErrorResponseFromJSON(json);
  default: throw new Error("Unexpected catalogType value.");
  }
}

export function ItemResponseAnyOf1ToJSON(value?: ItemResponseAnyOf1): any {
    if (value === undefined) {
        return undefined;
    }

    switch (value.catalogType) {
    case 'HOTEL': return CatalogsHotelItemErrorResponseToJSON(<CatalogsHotelItemErrorResponse>value);
    case 'RETAIL': return CatalogsRetailItemErrorResponseToJSON(<CatalogsRetailItemErrorResponse>value);
    default: throw new Error("Unexpected catalogType value.");
    }
}

