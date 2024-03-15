// tslint:disable
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

import { exists, mapValues } from '../runtime';
/**
 * Creation fields
 * @export
 * @interface BookClosedResponse
 */
export interface BookClosedResponse  {
    /**
     * Are conversion metrics ready?
     * @type {boolean}
     * @memberof BookClosedResponse
     */
    conversionMetricsReady?: boolean;
    /**
     * Are non-conversion metrics ready?
     * @type {boolean}
     * @memberof BookClosedResponse
     */
    nonConversionMetricsReady?: boolean;
}

export function BookClosedResponseFromJSON(json: any): BookClosedResponse {
    return {
        'conversionMetricsReady': !exists(json, 'conversion_metrics_ready') ? undefined : json['conversion_metrics_ready'],
        'nonConversionMetricsReady': !exists(json, 'non_conversion_metrics_ready') ? undefined : json['non_conversion_metrics_ready'],
    };
}

export function BookClosedResponseToJSON(value?: BookClosedResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'conversion_metrics_ready': value.conversionMetricsReady,
        'non_conversion_metrics_ready': value.nonConversionMetricsReady,
    };
}


