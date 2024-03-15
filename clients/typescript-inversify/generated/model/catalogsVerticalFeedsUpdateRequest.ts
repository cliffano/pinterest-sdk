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
import { CatalogsFeedCredentials } from './catalogsFeedCredentials';
import { CatalogsFeedProcessingSchedule } from './catalogsFeedProcessingSchedule';
import { CatalogsFormat } from './catalogsFormat';
import { CatalogsHotelFeedsUpdateRequest } from './catalogsHotelFeedsUpdateRequest';
import { CatalogsRetailFeedsUpdateRequest } from './catalogsRetailFeedsUpdateRequest';
import { CatalogsStatus } from './catalogsStatus';
import { CatalogsType } from './catalogsType';
import { NullableCurrency } from './nullableCurrency';
import { ProductAvailabilityType } from './productAvailabilityType';


/**
 * Request object for updating a feed.
 */
/**
 * @type CatalogsVerticalFeedsUpdateRequest
 * Request object for updating a feed.
 * @export
 */
export type CatalogsVerticalFeedsUpdateRequest = CatalogsHotelFeedsUpdateRequest | CatalogsRetailFeedsUpdateRequest;
