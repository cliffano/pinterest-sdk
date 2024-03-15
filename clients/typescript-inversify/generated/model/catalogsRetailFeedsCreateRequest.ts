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
import { CatalogsFeedsCreateRequestDefaultLocale } from './catalogsFeedsCreateRequestDefaultLocale';
import { CatalogsFormat } from './catalogsFormat';
import { CatalogsType } from './catalogsType';
import { Country } from './country';
import { NullableCurrency } from './nullableCurrency';
import { ProductAvailabilityType } from './productAvailabilityType';


/**
 * Request object for creating a retail feed.
 */
export interface CatalogsRetailFeedsCreateRequest { 
    default_currency?: NullableCurrency | null;
    /**
     * A human-friendly name associated to a given feed.
     */
    name: string;
    format: CatalogsFormat;
    default_locale: CatalogsFeedsCreateRequestDefaultLocale;
    credentials?: CatalogsFeedCredentials | null;
    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     */
    location: string;
    preferred_processing_schedule?: CatalogsFeedProcessingSchedule | null;
    catalog_type: CatalogsType;
    default_country: Country;
    default_availability?: ProductAvailabilityType | null;
}
export namespace CatalogsRetailFeedsCreateRequest {
}
