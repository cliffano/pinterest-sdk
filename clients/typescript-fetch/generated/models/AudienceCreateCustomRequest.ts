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
import type { AudienceDataParty } from './AudienceDataParty';
import {
    AudienceDataPartyFromJSON,
    AudienceDataPartyFromJSONTyped,
    AudienceDataPartyToJSON,
} from './AudienceDataParty';
import type { AudienceRule } from './AudienceRule';
import {
    AudienceRuleFromJSON,
    AudienceRuleFromJSONTyped,
    AudienceRuleToJSON,
} from './AudienceRule';
import type { AudienceSharingType } from './AudienceSharingType';
import {
    AudienceSharingTypeFromJSON,
    AudienceSharingTypeFromJSONTyped,
    AudienceSharingTypeToJSON,
} from './AudienceSharingType';

/**
 * 
 * @export
 * @interface AudienceCreateCustomRequest
 */
export interface AudienceCreateCustomRequest {
    /**
     * Ad account ID.
     * @type {string}
     * @memberof AudienceCreateCustomRequest
     */
    adAccountId?: string;
    /**
     * Audience name.
     * @type {string}
     * @memberof AudienceCreateCustomRequest
     */
    name: string;
    /**
     * 
     * @type {AudienceRule}
     * @memberof AudienceCreateCustomRequest
     */
    rule: AudienceRule;
    /**
     * 
     * @type {AudienceSharingType}
     * @memberof AudienceCreateCustomRequest
     */
    sharingType: AudienceSharingType;
    /**
     * 
     * @type {AudienceDataParty}
     * @memberof AudienceCreateCustomRequest
     */
    dataParty: AudienceDataParty;
    /**
     * 
     * @type {string}
     * @memberof AudienceCreateCustomRequest
     */
    category?: string;
}

/**
 * Check if a given object implements the AudienceCreateCustomRequest interface.
 */
export function instanceOfAudienceCreateCustomRequest(value: object): boolean {
    if (!('name' in value)) return false;
    if (!('rule' in value)) return false;
    if (!('sharingType' in value)) return false;
    if (!('dataParty' in value)) return false;
    return true;
}

export function AudienceCreateCustomRequestFromJSON(json: any): AudienceCreateCustomRequest {
    return AudienceCreateCustomRequestFromJSONTyped(json, false);
}

export function AudienceCreateCustomRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): AudienceCreateCustomRequest {
    if (json == null) {
        return json;
    }
    return {
        
        'adAccountId': json['ad_account_id'] == null ? undefined : json['ad_account_id'],
        'name': json['name'],
        'rule': AudienceRuleFromJSON(json['rule']),
        'sharingType': AudienceSharingTypeFromJSON(json['sharing_type']),
        'dataParty': AudienceDataPartyFromJSON(json['data_party']),
        'category': json['category'] == null ? undefined : json['category'],
    };
}

export function AudienceCreateCustomRequestToJSON(value?: AudienceCreateCustomRequest | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'ad_account_id': value['adAccountId'],
        'name': value['name'],
        'rule': AudienceRuleToJSON(value['rule']),
        'sharing_type': AudienceSharingTypeToJSON(value['sharingType']),
        'data_party': AudienceDataPartyToJSON(value['dataParty']),
        'category': value['category'],
    };
}

