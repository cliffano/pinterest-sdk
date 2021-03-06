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
    CatalogsFeedIngestionErrors,
    CatalogsFeedIngestionErrorsFromJSON,
    CatalogsFeedIngestionErrorsFromJSONTyped,
    CatalogsFeedIngestionErrorsToJSON,
} from './CatalogsFeedIngestionErrors';
import {
    CatalogsFeedIngestionInfo,
    CatalogsFeedIngestionInfoFromJSON,
    CatalogsFeedIngestionInfoFromJSONTyped,
    CatalogsFeedIngestionInfoToJSON,
} from './CatalogsFeedIngestionInfo';

/**
 * 
 * @export
 * @interface CatalogsFeedIngestionDetails
 */
export interface CatalogsFeedIngestionDetails {
    /**
     * 
     * @type {CatalogsFeedIngestionErrors}
     * @memberof CatalogsFeedIngestionDetails
     */
    errors: CatalogsFeedIngestionErrors;
    /**
     * 
     * @type {CatalogsFeedIngestionInfo}
     * @memberof CatalogsFeedIngestionDetails
     */
    info: CatalogsFeedIngestionInfo;
}

export function CatalogsFeedIngestionDetailsFromJSON(json: any): CatalogsFeedIngestionDetails {
    return CatalogsFeedIngestionDetailsFromJSONTyped(json, false);
}

export function CatalogsFeedIngestionDetailsFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsFeedIngestionDetails {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'errors': CatalogsFeedIngestionErrorsFromJSON(json['errors']),
        'info': CatalogsFeedIngestionInfoFromJSON(json['info']),
    };
}

export function CatalogsFeedIngestionDetailsToJSON(value?: CatalogsFeedIngestionDetails | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'errors': CatalogsFeedIngestionErrorsToJSON(value.errors),
        'info': CatalogsFeedIngestionInfoToJSON(value.info),
    };
}

