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
import { CatalogsFeedProcessingSchedule } from './catalogsFeedProcessingSchedule';
import { CatalogsStatus } from './catalogsStatus';
import { CatalogsFeedCredentials } from './catalogsFeedCredentials';
import { CatalogsType } from './catalogsType';
import { CatalogsFormat } from './catalogsFormat';
import { NullableCurrency } from './nullableCurrency';


/**
 * Request object for updating a feed.
 */
export interface CatalogsHotelFeedsUpdateRequest { 
    default_currency?: NullableCurrency | null;
    /**
     * A human-friendly name associated to a given feed.
     */
    name?: string;
    format?: CatalogsFormat;
    credentials?: CatalogsFeedCredentials | null;
    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     */
    location?: string;
    preferred_processing_schedule?: CatalogsFeedProcessingSchedule | null;
    status?: CatalogsStatus;
    catalog_type: CatalogsType;
}
export namespace CatalogsHotelFeedsUpdateRequest {
}


