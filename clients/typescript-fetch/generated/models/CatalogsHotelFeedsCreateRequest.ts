/* tslint:disable */
/* eslint-disable */
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

import { mapValues } from '../runtime';
import type { CatalogsFeedCredentials } from './CatalogsFeedCredentials';
import {
    CatalogsFeedCredentialsFromJSON,
    CatalogsFeedCredentialsFromJSONTyped,
    CatalogsFeedCredentialsToJSON,
} from './CatalogsFeedCredentials';
import type { CatalogsFeedProcessingSchedule } from './CatalogsFeedProcessingSchedule';
import {
    CatalogsFeedProcessingScheduleFromJSON,
    CatalogsFeedProcessingScheduleFromJSONTyped,
    CatalogsFeedProcessingScheduleToJSON,
} from './CatalogsFeedProcessingSchedule';
import type { CatalogsFeedsCreateRequestDefaultLocale } from './CatalogsFeedsCreateRequestDefaultLocale';
import {
    CatalogsFeedsCreateRequestDefaultLocaleFromJSON,
    CatalogsFeedsCreateRequestDefaultLocaleFromJSONTyped,
    CatalogsFeedsCreateRequestDefaultLocaleToJSON,
} from './CatalogsFeedsCreateRequestDefaultLocale';
import type { CatalogsFormat } from './CatalogsFormat';
import {
    CatalogsFormatFromJSON,
    CatalogsFormatFromJSONTyped,
    CatalogsFormatToJSON,
} from './CatalogsFormat';
import type { CatalogsType } from './CatalogsType';
import {
    CatalogsTypeFromJSON,
    CatalogsTypeFromJSONTyped,
    CatalogsTypeToJSON,
} from './CatalogsType';
import type { NullableCurrency } from './NullableCurrency';
import {
    NullableCurrencyFromJSON,
    NullableCurrencyFromJSONTyped,
    NullableCurrencyToJSON,
} from './NullableCurrency';

/**
 * Request object for creating a feed. Please, be aware that "default_country" and "default_locale" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 * @export
 * @interface CatalogsHotelFeedsCreateRequest
 */
export interface CatalogsHotelFeedsCreateRequest {
    /**
     * 
     * @type {NullableCurrency}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    defaultCurrency?: NullableCurrency;
    /**
     * A human-friendly name associated to a given feed.
     * @type {string}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    name: string;
    /**
     * 
     * @type {CatalogsFormat}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    format: CatalogsFormat;
    /**
     * 
     * @type {CatalogsFeedsCreateRequestDefaultLocale}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    defaultLocale: CatalogsFeedsCreateRequestDefaultLocale;
    /**
     * 
     * @type {CatalogsFeedCredentials}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    credentials?: CatalogsFeedCredentials;
    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     * @type {string}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    location: string;
    /**
     * 
     * @type {CatalogsFeedProcessingSchedule}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    preferredProcessingSchedule?: CatalogsFeedProcessingSchedule;
    /**
     * 
     * @type {CatalogsType}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    catalogType: CatalogsType;
    /**
     * Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future.
     * @type {string}
     * @memberof CatalogsHotelFeedsCreateRequest
     */
    catalogId?: string;
}

/**
 * Check if a given object implements the CatalogsHotelFeedsCreateRequest interface.
 */
export function instanceOfCatalogsHotelFeedsCreateRequest(value: object): boolean {
    if (!('name' in value)) return false;
    if (!('format' in value)) return false;
    if (!('defaultLocale' in value)) return false;
    if (!('location' in value)) return false;
    if (!('catalogType' in value)) return false;
    return true;
}

export function CatalogsHotelFeedsCreateRequestFromJSON(json: any): CatalogsHotelFeedsCreateRequest {
    return CatalogsHotelFeedsCreateRequestFromJSONTyped(json, false);
}

export function CatalogsHotelFeedsCreateRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsHotelFeedsCreateRequest {
    if (json == null) {
        return json;
    }
    return {
        
        'defaultCurrency': json['default_currency'] == null ? undefined : NullableCurrencyFromJSON(json['default_currency']),
        'name': json['name'],
        'format': CatalogsFormatFromJSON(json['format']),
        'defaultLocale': CatalogsFeedsCreateRequestDefaultLocaleFromJSON(json['default_locale']),
        'credentials': json['credentials'] == null ? undefined : CatalogsFeedCredentialsFromJSON(json['credentials']),
        'location': json['location'],
        'preferredProcessingSchedule': json['preferred_processing_schedule'] == null ? undefined : CatalogsFeedProcessingScheduleFromJSON(json['preferred_processing_schedule']),
        'catalogType': CatalogsTypeFromJSON(json['catalog_type']),
        'catalogId': json['catalog_id'] == null ? undefined : json['catalog_id'],
    };
}

export function CatalogsHotelFeedsCreateRequestToJSON(value?: CatalogsHotelFeedsCreateRequest | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'default_currency': NullableCurrencyToJSON(value['defaultCurrency']),
        'name': value['name'],
        'format': CatalogsFormatToJSON(value['format']),
        'default_locale': CatalogsFeedsCreateRequestDefaultLocaleToJSON(value['defaultLocale']),
        'credentials': CatalogsFeedCredentialsToJSON(value['credentials']),
        'location': value['location'],
        'preferred_processing_schedule': CatalogsFeedProcessingScheduleToJSON(value['preferredProcessingSchedule']),
        'catalog_type': CatalogsTypeToJSON(value['catalogType']),
        'catalog_id': value['catalogId'],
    };
}
