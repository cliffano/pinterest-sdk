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
    CatalogsItemsCreateBatchRequest,
    CatalogsItemsCreateBatchRequestFromJSON,
    CatalogsItemsCreateBatchRequestToJSON,
    CatalogsItemsDeleteBatchRequest,
    CatalogsItemsDeleteBatchRequestFromJSON,
    CatalogsItemsDeleteBatchRequestToJSON,
    CatalogsItemsDeleteDiscontinuedBatchRequest,
    CatalogsItemsDeleteDiscontinuedBatchRequestFromJSON,
    CatalogsItemsDeleteDiscontinuedBatchRequestToJSON,
    CatalogsItemsUpdateBatchRequest,
    CatalogsItemsUpdateBatchRequestFromJSON,
    CatalogsItemsUpdateBatchRequestToJSON,
    CatalogsItemsUpsertBatchRequest,
    CatalogsItemsUpsertBatchRequestFromJSON,
    CatalogsItemsUpsertBatchRequestToJSON,
} from './';

/**
 * @type CatalogsItemsBatchRequest
 * Request object of catalogs items batch
 * @export
 */
export type CatalogsItemsBatchRequest = CatalogsItemsCreateBatchRequest | CatalogsItemsDeleteBatchRequest | CatalogsItemsDeleteDiscontinuedBatchRequest | CatalogsItemsUpdateBatchRequest | CatalogsItemsUpsertBatchRequest;


export function CatalogsItemsBatchRequestFromJSON(json: any): CatalogsItemsBatchRequest {
  switch (json.operation) {
  case 'CREATE': return CatalogsItemsCreateBatchRequestFromJSON(json);
  case 'DELETE': return CatalogsItemsDeleteBatchRequestFromJSON(json);
  case 'DELETE_DISCONTINUED': return CatalogsItemsDeleteDiscontinuedBatchRequestFromJSON(json);
  case 'UPDATE': return CatalogsItemsUpdateBatchRequestFromJSON(json);
  case 'UPSERT': return CatalogsItemsUpsertBatchRequestFromJSON(json);
  default: throw new Error("Unexpected operation value.");
  }
}

export function CatalogsItemsBatchRequestToJSON(value?: CatalogsItemsBatchRequest): any {
    if (value === undefined) {
        return undefined;
    }

    switch (value.operation) {
    case 'CREATE': return CatalogsItemsCreateBatchRequestToJSON(<CatalogsItemsCreateBatchRequest>value);
    case 'DELETE': return CatalogsItemsDeleteBatchRequestToJSON(<CatalogsItemsDeleteBatchRequest>value);
    case 'DELETE_DISCONTINUED': return CatalogsItemsDeleteDiscontinuedBatchRequestToJSON(<CatalogsItemsDeleteDiscontinuedBatchRequest>value);
    case 'UPDATE': return CatalogsItemsUpdateBatchRequestToJSON(<CatalogsItemsUpdateBatchRequest>value);
    case 'UPSERT': return CatalogsItemsUpsertBatchRequestToJSON(<CatalogsItemsUpsertBatchRequest>value);
    default: throw new Error("Unexpected operation value.");
    }
}
