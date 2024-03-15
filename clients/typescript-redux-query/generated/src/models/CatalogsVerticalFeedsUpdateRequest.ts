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
    CatalogsHotelFeedsUpdateRequest,
    CatalogsHotelFeedsUpdateRequestFromJSON,
    CatalogsHotelFeedsUpdateRequestToJSON,
    CatalogsRetailFeedsUpdateRequest,
    CatalogsRetailFeedsUpdateRequestFromJSON,
    CatalogsRetailFeedsUpdateRequestToJSON,
} from './';

/**
 * @type CatalogsVerticalFeedsUpdateRequest
 * Request object for updating a feed.
 * @export
 */
export type CatalogsVerticalFeedsUpdateRequest = CatalogsHotelFeedsUpdateRequest | CatalogsRetailFeedsUpdateRequest;


export function CatalogsVerticalFeedsUpdateRequestFromJSON(json: any): CatalogsVerticalFeedsUpdateRequest {
  switch (json.catalogType) {
  case 'HOTEL': return CatalogsHotelFeedsUpdateRequestFromJSON(json);
  case 'RETAIL': return CatalogsRetailFeedsUpdateRequestFromJSON(json);
  default: throw new Error("Unexpected catalogType value.");
  }
}

export function CatalogsVerticalFeedsUpdateRequestToJSON(value?: CatalogsVerticalFeedsUpdateRequest): any {
    if (value === undefined) {
        return undefined;
    }

    switch (value.catalogType) {
    case 'HOTEL': return CatalogsHotelFeedsUpdateRequestToJSON(<CatalogsHotelFeedsUpdateRequest>value);
    case 'RETAIL': return CatalogsRetailFeedsUpdateRequestToJSON(<CatalogsRetailFeedsUpdateRequest>value);
    default: throw new Error("Unexpected catalogType value.");
    }
}
