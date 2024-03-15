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
import { BatchOperation } from './batchOperation';
import { Country } from './country';
import { ItemDeleteDiscontinuedBatchRecord } from './itemDeleteDiscontinuedBatchRecord';
import { Language } from './language';


/**
 * Request object to discontinue catalogs items
 */
export interface CatalogsItemsDeleteDiscontinuedBatchRequest { 
    country: Country;
    language: Language;
    operation: BatchOperation;
    /**
     * Array with catalogs items
     */
    items: Array<ItemDeleteDiscontinuedBatchRecord>;
}
export namespace CatalogsItemsDeleteDiscontinuedBatchRequest {
}
