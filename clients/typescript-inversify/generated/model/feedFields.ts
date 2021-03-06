/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { CatalogsFeedCredentials } from './catalogsFeedCredentials';
import { CatalogsFeedProcessingSchedule } from './catalogsFeedProcessingSchedule';
import { CatalogsFormat } from './catalogsFormat';
import { CatalogsStatus } from './catalogsStatus';
import { Country } from './country';
import { NullableCurrency } from './nullableCurrency';
import { ProductAvailabilityType } from './productAvailabilityType';


export interface FeedFields { 
    default_country: Country;
    default_availability: ProductAvailabilityType | null;
    default_currency: NullableCurrency | null;
    /**
     * A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
     */
    name: string | null;
    format: CatalogsFormat;
    /**
     * The locale used within a feed for product descriptions.
     */
    default_locale: string;
    credentials: CatalogsFeedCredentials | null;
    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     */
    location: string;
    preferred_processing_schedule: CatalogsFeedProcessingSchedule | null;
    status: CatalogsStatus;
}
