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
import type { ConversionTagConfigs } from './ConversionTagConfigs';
import {
    ConversionTagConfigsFromJSON,
    ConversionTagConfigsFromJSONTyped,
    ConversionTagConfigsToJSON,
} from './ConversionTagConfigs';
import type { EnhancedMatchStatusType } from './EnhancedMatchStatusType';
import {
    EnhancedMatchStatusTypeFromJSON,
    EnhancedMatchStatusTypeFromJSONTyped,
    EnhancedMatchStatusTypeToJSON,
} from './EnhancedMatchStatusType';
import type { EntityStatus } from './EntityStatus';
import {
    EntityStatusFromJSON,
    EntityStatusFromJSONTyped,
    EntityStatusToJSON,
} from './EntityStatus';

/**
 * 
 * @export
 * @interface ConversionTagResponse
 */
export interface ConversionTagResponse {
    /**
     * Ad account ID.
     * @type {string}
     * @memberof ConversionTagResponse
     */
    adAccountId?: string;
    /**
     * Tag code snippet.
     * @type {string}
     * @memberof ConversionTagResponse
     */
    codeSnippet?: string;
    /**
     * 
     * @type {EnhancedMatchStatusType}
     * @memberof ConversionTagResponse
     */
    enhancedMatchStatus?: EnhancedMatchStatusType;
    /**
     * Tag ID.
     * @type {string}
     * @memberof ConversionTagResponse
     */
    id?: string;
    /**
     * Time for the last event fired.
     * @type {number}
     * @memberof ConversionTagResponse
     */
    lastFiredTimeMs?: number;
    /**
     * Conversion tag name.
     * @type {string}
     * @memberof ConversionTagResponse
     */
    name?: string;
    /**
     * 
     * @type {EntityStatus}
     * @memberof ConversionTagResponse
     */
    status?: EntityStatus;
    /**
     * Version number.
     * @type {string}
     * @memberof ConversionTagResponse
     */
    version?: string;
    /**
     * 
     * @type {ConversionTagConfigs}
     * @memberof ConversionTagResponse
     */
    configs?: ConversionTagConfigs;
}

/**
 * Check if a given object implements the ConversionTagResponse interface.
 */
export function instanceOfConversionTagResponse(value: object): boolean {
    return true;
}

export function ConversionTagResponseFromJSON(json: any): ConversionTagResponse {
    return ConversionTagResponseFromJSONTyped(json, false);
}

export function ConversionTagResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): ConversionTagResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'adAccountId': json['ad_account_id'] == null ? undefined : json['ad_account_id'],
        'codeSnippet': json['code_snippet'] == null ? undefined : json['code_snippet'],
        'enhancedMatchStatus': json['enhanced_match_status'] == null ? undefined : EnhancedMatchStatusTypeFromJSON(json['enhanced_match_status']),
        'id': json['id'] == null ? undefined : json['id'],
        'lastFiredTimeMs': json['last_fired_time_ms'] == null ? undefined : json['last_fired_time_ms'],
        'name': json['name'] == null ? undefined : json['name'],
        'status': json['status'] == null ? undefined : EntityStatusFromJSON(json['status']),
        'version': json['version'] == null ? undefined : json['version'],
        'configs': json['configs'] == null ? undefined : ConversionTagConfigsFromJSON(json['configs']),
    };
}

export function ConversionTagResponseToJSON(value?: ConversionTagResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'ad_account_id': value['adAccountId'],
        'code_snippet': value['codeSnippet'],
        'enhanced_match_status': EnhancedMatchStatusTypeToJSON(value['enhancedMatchStatus']),
        'id': value['id'],
        'last_fired_time_ms': value['lastFiredTimeMs'],
        'name': value['name'],
        'status': EntityStatusToJSON(value['status']),
        'version': value['version'],
        'configs': ConversionTagConfigsToJSON(value['configs']),
    };
}

