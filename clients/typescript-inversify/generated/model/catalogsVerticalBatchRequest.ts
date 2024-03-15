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
import { CatalogsHotelBatchItem } from './catalogsHotelBatchItem';
import { CatalogsHotelBatchRequest } from './catalogsHotelBatchRequest';
import { CatalogsRetailBatchRequest } from './catalogsRetailBatchRequest';
import { CatalogsType } from './catalogsType';
import { Country } from './country';
import { Language } from './language';


/**
 * A request object that can have multiple operations on a single batch
 */
/**
 * @type CatalogsVerticalBatchRequest
 * A request object that can have multiple operations on a single batch
 * @export
 */
export type CatalogsVerticalBatchRequest = CatalogsHotelBatchRequest | CatalogsRetailBatchRequest;

