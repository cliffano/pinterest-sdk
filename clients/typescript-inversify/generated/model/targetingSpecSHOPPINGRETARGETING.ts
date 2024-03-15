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


export interface TargetingSpecSHOPPINGRETARGETING { 
    /**
     * Number of days ago to start lookback timeframe for dynamic retargeting
     */
    lookback_window?: number;
    /**
     * Event types to target for dynamic retargeting
     */
    tag_types?: Array<number>;
    /**
     * Number of days ago to stop lookback timeframe for dynamic retargeting
     */
    exclusion_window?: number;
}