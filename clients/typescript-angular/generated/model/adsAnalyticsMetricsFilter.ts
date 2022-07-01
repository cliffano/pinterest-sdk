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
import { AdsAnalyticsFilterColumn } from './adsAnalyticsFilterColumn';
import { AdsAnalyticsFilterOperator } from './adsAnalyticsFilterOperator';


export interface AdsAnalyticsMetricsFilter { 
    field?: AdsAnalyticsFilterColumn;
    operator?: AdsAnalyticsFilterOperator;
    /**
     * List of values for filtering
     */
    values?: Array<number>;
}

