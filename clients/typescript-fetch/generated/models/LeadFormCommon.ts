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
import type { LeadFormQuestion } from './LeadFormQuestion';
import {
    LeadFormQuestionFromJSON,
    LeadFormQuestionFromJSONTyped,
    LeadFormQuestionToJSON,
} from './LeadFormQuestion';
import type { LeadFormStatus } from './LeadFormStatus';
import {
    LeadFormStatusFromJSON,
    LeadFormStatusFromJSONTyped,
    LeadFormStatusToJSON,
} from './LeadFormStatus';

/**
 * Creation fields
 * @export
 * @interface LeadFormCommon
 */
export interface LeadFormCommon {
    /**
     * Internal name of the lead form.
     * @type {string}
     * @memberof LeadFormCommon
     */
    name?: string;
    /**
     * A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.
     * @type {string}
     * @memberof LeadFormCommon
     */
    privacyPolicyLink?: string;
    /**
     * Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.
     * @type {boolean}
     * @memberof LeadFormCommon
     */
    hasAcceptedTerms?: boolean;
    /**
     * A message for people who complete the form to let them know what happens next.
     * @type {string}
     * @memberof LeadFormCommon
     */
    completionMessage?: string;
    /**
     * 
     * @type {LeadFormStatus}
     * @memberof LeadFormCommon
     */
    status?: LeadFormStatus;
    /**
     * Additional disclosure language to be included in the lead form.
     * @type {string}
     * @memberof LeadFormCommon
     */
    disclosureLanguage?: string;
    /**
     * List of questions to be displayed on the lead form.
     * @type {Array<LeadFormQuestion>}
     * @memberof LeadFormCommon
     */
    questions?: Array<LeadFormQuestion>;
}

/**
 * Check if a given object implements the LeadFormCommon interface.
 */
export function instanceOfLeadFormCommon(value: object): boolean {
    return true;
}

export function LeadFormCommonFromJSON(json: any): LeadFormCommon {
    return LeadFormCommonFromJSONTyped(json, false);
}

export function LeadFormCommonFromJSONTyped(json: any, ignoreDiscriminator: boolean): LeadFormCommon {
    if (json == null) {
        return json;
    }
    return {
        
        'name': json['name'] == null ? undefined : json['name'],
        'privacyPolicyLink': json['privacy_policy_link'] == null ? undefined : json['privacy_policy_link'],
        'hasAcceptedTerms': json['has_accepted_terms'] == null ? undefined : json['has_accepted_terms'],
        'completionMessage': json['completion_message'] == null ? undefined : json['completion_message'],
        'status': json['status'] == null ? undefined : LeadFormStatusFromJSON(json['status']),
        'disclosureLanguage': json['disclosure_language'] == null ? undefined : json['disclosure_language'],
        'questions': json['questions'] == null ? undefined : ((json['questions'] as Array<any>).map(LeadFormQuestionFromJSON)),
    };
}

export function LeadFormCommonToJSON(value?: LeadFormCommon | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'name': value['name'],
        'privacy_policy_link': value['privacyPolicyLink'],
        'has_accepted_terms': value['hasAcceptedTerms'],
        'completion_message': value['completionMessage'],
        'status': LeadFormStatusToJSON(value['status']),
        'disclosure_language': value['disclosureLanguage'],
        'questions': value['questions'] == null ? undefined : ((value['questions'] as Array<any>).map(LeadFormQuestionToJSON)),
    };
}

