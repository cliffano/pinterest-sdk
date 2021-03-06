/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    CatalogsFeedCredentials,
    CatalogsFeedCredentialsFromJSON,
    CatalogsFeedCredentialsFromJSONTyped,
    CatalogsFeedCredentialsToJSON,
} from './CatalogsFeedCredentials';
import {
    CatalogsFeedProcessingSchedule,
    CatalogsFeedProcessingScheduleFromJSON,
    CatalogsFeedProcessingScheduleFromJSONTyped,
    CatalogsFeedProcessingScheduleToJSON,
} from './CatalogsFeedProcessingSchedule';
import {
    CatalogsFormat,
    CatalogsFormatFromJSON,
    CatalogsFormatFromJSONTyped,
    CatalogsFormatToJSON,
} from './CatalogsFormat';
import {
    CatalogsStatus,
    CatalogsStatusFromJSON,
    CatalogsStatusFromJSONTyped,
    CatalogsStatusToJSON,
} from './CatalogsStatus';
import {
    Country,
    CountryFromJSON,
    CountryFromJSONTyped,
    CountryToJSON,
} from './Country';
import {
    NullableCurrency,
    NullableCurrencyFromJSON,
    NullableCurrencyFromJSONTyped,
    NullableCurrencyToJSON,
} from './NullableCurrency';
import {
    ProductAvailabilityType,
    ProductAvailabilityTypeFromJSON,
    ProductAvailabilityTypeFromJSONTyped,
    ProductAvailabilityTypeToJSON,
} from './ProductAvailabilityType';

/**
 * 
 * @export
 * @interface FeedFields
 */
export interface FeedFields {
    /**
     * 
     * @type {Country}
     * @memberof FeedFields
     */
    defaultCountry: Country;
    /**
     * 
     * @type {ProductAvailabilityType}
     * @memberof FeedFields
     */
    defaultAvailability: ProductAvailabilityType | null;
    /**
     * 
     * @type {NullableCurrency}
     * @memberof FeedFields
     */
    defaultCurrency: NullableCurrency | null;
    /**
     * A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
     * @type {string}
     * @memberof FeedFields
     */
    name: string | null;
    /**
     * 
     * @type {CatalogsFormat}
     * @memberof FeedFields
     */
    format: CatalogsFormat;
    /**
     * The locale used within a feed for product descriptions.
     * @type {string}
     * @memberof FeedFields
     */
    defaultLocale: string;
    /**
     * 
     * @type {CatalogsFeedCredentials}
     * @memberof FeedFields
     */
    credentials: CatalogsFeedCredentials | null;
    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     * @type {string}
     * @memberof FeedFields
     */
    location: string;
    /**
     * 
     * @type {CatalogsFeedProcessingSchedule}
     * @memberof FeedFields
     */
    preferredProcessingSchedule: CatalogsFeedProcessingSchedule | null;
    /**
     * 
     * @type {CatalogsStatus}
     * @memberof FeedFields
     */
    status: CatalogsStatus;
}

export function FeedFieldsFromJSON(json: any): FeedFields {
    return FeedFieldsFromJSONTyped(json, false);
}

export function FeedFieldsFromJSONTyped(json: any, ignoreDiscriminator: boolean): FeedFields {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'defaultCountry': CountryFromJSON(json['default_country']),
        'defaultAvailability': ProductAvailabilityTypeFromJSON(json['default_availability']),
        'defaultCurrency': NullableCurrencyFromJSON(json['default_currency']),
        'name': json['name'],
        'format': CatalogsFormatFromJSON(json['format']),
        'defaultLocale': json['default_locale'],
        'credentials': CatalogsFeedCredentialsFromJSON(json['credentials']),
        'location': json['location'],
        'preferredProcessingSchedule': CatalogsFeedProcessingScheduleFromJSON(json['preferred_processing_schedule']),
        'status': CatalogsStatusFromJSON(json['status']),
    };
}

export function FeedFieldsToJSON(value?: FeedFields | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'default_country': CountryToJSON(value.defaultCountry),
        'default_availability': ProductAvailabilityTypeToJSON(value.defaultAvailability),
        'default_currency': NullableCurrencyToJSON(value.defaultCurrency),
        'name': value.name,
        'format': CatalogsFormatToJSON(value.format),
        'default_locale': value.defaultLocale,
        'credentials': CatalogsFeedCredentialsToJSON(value.credentials),
        'location': value.location,
        'preferred_processing_schedule': CatalogsFeedProcessingScheduleToJSON(value.preferredProcessingSchedule),
        'status': CatalogsStatusToJSON(value.status),
    };
}

