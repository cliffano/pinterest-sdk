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
    CatalogsHotelProductGroupUpdateRequest,
    CatalogsHotelProductGroupUpdateRequestFromJSON,
    CatalogsHotelProductGroupUpdateRequestToJSON,
} from './';

/**
 * @type CatalogsVerticalProductGroupUpdateRequest
 * Request object for updating a hotel product group.
 * @export
 */
export type CatalogsVerticalProductGroupUpdateRequest = CatalogsHotelProductGroupUpdateRequest;


export function CatalogsVerticalProductGroupUpdateRequestFromJSON(json: any): CatalogsVerticalProductGroupUpdateRequest {
  switch (json.catalogType) {
  case 'HOTEL': return CatalogsHotelProductGroupUpdateRequestFromJSON(json);
  default: throw new Error("Unexpected catalogType value.");
  }
}

export function CatalogsVerticalProductGroupUpdateRequestToJSON(value?: CatalogsVerticalProductGroupUpdateRequest): any {
    if (value === undefined) {
        return undefined;
    }

    switch (value.catalogType) {
    case 'HOTEL': return CatalogsHotelProductGroupUpdateRequestToJSON(<CatalogsHotelProductGroupUpdateRequest>value);
    default: throw new Error("Unexpected catalogType value.");
    }
}

