/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
 * Request object for updating a feed.
 * @export
 * @interface CatalogsFeedsUpdateRequest
 */
export interface CatalogsFeedsUpdateRequest {
    /**
     * 
     * @type {ProductAvailabilityType}
     * @memberof CatalogsFeedsUpdateRequest
     */
    defaultAvailability?: ProductAvailabilityType | null;
    /**
     * 
     * @type {NullableCurrency}
     * @memberof CatalogsFeedsUpdateRequest
     */
    defaultCurrency?: NullableCurrency | null;
    /**
     * A human-friendly name associated to a given feed.
     * @type {string}
     * @memberof CatalogsFeedsUpdateRequest
     */
    name?: string;
    /**
     * 
     * @type {CatalogsFormat}
     * @memberof CatalogsFeedsUpdateRequest
     */
    format?: CatalogsFormat;
    /**
     * 
     * @type {CatalogsFeedCredentials}
     * @memberof CatalogsFeedsUpdateRequest
     */
    credentials?: CatalogsFeedCredentials | null;
    /**
     * The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
     * @type {string}
     * @memberof CatalogsFeedsUpdateRequest
     */
    location?: string;
    /**
     * 
     * @type {CatalogsFeedProcessingSchedule}
     * @memberof CatalogsFeedsUpdateRequest
     */
    preferredProcessingSchedule?: CatalogsFeedProcessingSchedule | null;
    /**
     * 
     * @type {CatalogsStatus}
     * @memberof CatalogsFeedsUpdateRequest
     */
    status?: CatalogsStatus;
}

export function CatalogsFeedsUpdateRequestFromJSON(json: any): CatalogsFeedsUpdateRequest {
    return CatalogsFeedsUpdateRequestFromJSONTyped(json, false);
}

export function CatalogsFeedsUpdateRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsFeedsUpdateRequest {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'defaultAvailability': !exists(json, 'default_availability') ? undefined : ProductAvailabilityTypeFromJSON(json['default_availability']),
        'defaultCurrency': !exists(json, 'default_currency') ? undefined : NullableCurrencyFromJSON(json['default_currency']),
        'name': !exists(json, 'name') ? undefined : json['name'],
        'format': !exists(json, 'format') ? undefined : CatalogsFormatFromJSON(json['format']),
        'credentials': !exists(json, 'credentials') ? undefined : CatalogsFeedCredentialsFromJSON(json['credentials']),
        'location': !exists(json, 'location') ? undefined : json['location'],
        'preferredProcessingSchedule': !exists(json, 'preferred_processing_schedule') ? undefined : CatalogsFeedProcessingScheduleFromJSON(json['preferred_processing_schedule']),
        'status': !exists(json, 'status') ? undefined : CatalogsStatusFromJSON(json['status']),
    };
}

export function CatalogsFeedsUpdateRequestToJSON(value?: CatalogsFeedsUpdateRequest | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'default_availability': ProductAvailabilityTypeToJSON(value.defaultAvailability),
        'default_currency': NullableCurrencyToJSON(value.defaultCurrency),
        'name': value.name,
        'format': CatalogsFormatToJSON(value.format),
        'credentials': CatalogsFeedCredentialsToJSON(value.credentials),
        'location': value.location,
        'preferred_processing_schedule': CatalogsFeedProcessingScheduleToJSON(value.preferredProcessingSchedule),
        'status': CatalogsStatusToJSON(value.status),
    };
}

