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
import { LeadFormQuestion } from './leadFormQuestion';
import { LeadFormStatus } from './leadFormStatus';


export interface LeadFormResponse { 
    /**
     * Internal name of the lead form.
     */
    name?: string | null;
    /**
     * A link to the advertiser\'s privacy policy. This will be included in the lead form\'s disclosure language.
     */
    privacy_policy_link?: string | null;
    /**
     * Whether the advertiser has accepted Pinterest\'s terms of service for creating a lead ad.
     */
    has_accepted_terms?: boolean;
    /**
     * A message for people who complete the form to let them know what happens next.
     */
    completion_message?: string | null;
    status?: LeadFormStatus;
    /**
     * Additional disclosure language to be included in the lead form.
     */
    disclosure_language?: string | null;
    /**
     * List of questions to be displayed on the lead form.
     */
    questions?: Array<LeadFormQuestion>;
    /**
     * The ID of this lead form
     */
    id?: string;
    /**
     * The Ad Account ID that this lead form belongs to.
     */
    ad_account_id?: string;
    /**
     * Lead form creation time. Unix timestamp in seconds.
     */
    created_time?: number;
    /**
     * Last update time. Unix timestamp in seconds.
     */
    updated_time?: number;
}
export namespace LeadFormResponse {
}
