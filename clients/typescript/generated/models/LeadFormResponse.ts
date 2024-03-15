/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { LeadFormQuestion } from '../models/LeadFormQuestion';
import { LeadFormStatus } from '../models/LeadFormStatus';
import { HttpFile } from '../http/http';

export class LeadFormResponse {
    /**
    * Internal name of the lead form.
    */
    'name'?: string | null;
    /**
    * A link to the advertiser\'s privacy policy. This will be included in the lead form\'s disclosure language.
    */
    'privacyPolicyLink'?: string | null;
    /**
    * Whether the advertiser has accepted Pinterest\'s terms of service for creating a lead ad.
    */
    'hasAcceptedTerms'?: boolean;
    /**
    * A message for people who complete the form to let them know what happens next.
    */
    'completionMessage'?: string | null;
    'status'?: LeadFormStatus;
    /**
    * Additional disclosure language to be included in the lead form.
    */
    'disclosureLanguage'?: string | null;
    /**
    * List of questions to be displayed on the lead form.
    */
    'questions'?: Array<LeadFormQuestion>;
    /**
    * The ID of this lead form
    */
    'id'?: string;
    /**
    * The Ad Account ID that this lead form belongs to.
    */
    'adAccountId'?: string;
    /**
    * Lead form creation time. Unix timestamp in seconds.
    */
    'createdTime'?: number;
    /**
    * Last update time. Unix timestamp in seconds.
    */
    'updatedTime'?: number;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "name",
            "baseName": "name",
            "type": "string",
            "format": ""
        },
        {
            "name": "privacyPolicyLink",
            "baseName": "privacy_policy_link",
            "type": "string",
            "format": ""
        },
        {
            "name": "hasAcceptedTerms",
            "baseName": "has_accepted_terms",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "completionMessage",
            "baseName": "completion_message",
            "type": "string",
            "format": ""
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "LeadFormStatus",
            "format": ""
        },
        {
            "name": "disclosureLanguage",
            "baseName": "disclosure_language",
            "type": "string",
            "format": ""
        },
        {
            "name": "questions",
            "baseName": "questions",
            "type": "Array<LeadFormQuestion>",
            "format": ""
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string",
            "format": ""
        },
        {
            "name": "adAccountId",
            "baseName": "ad_account_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "createdTime",
            "baseName": "created_time",
            "type": "number",
            "format": ""
        },
        {
            "name": "updatedTime",
            "baseName": "updated_time",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return LeadFormResponse.attributeTypeMap;
    }

    public constructor() {
    }
}



